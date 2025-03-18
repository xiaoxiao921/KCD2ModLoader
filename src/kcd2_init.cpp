#include "kcd2_init.hpp"

#include "hooks/hooking.hpp"
#include "kcd2_address.hpp"
#include "memory/gm_address.hpp"

#include <config/config.hpp>
#include <gui/gui.hpp>
#include <gui/renderer.hpp>
#include <lua_extensions/lua_manager_extension.hpp>
#include <pugixml.hpp>
#include <threads/thread_pool.hpp>

extern "C"
{
#include <ldo.h>
#include <ltable.h>
#include <lua.h>
#include <zip.h>
#undef lua_load
	extern void luaV_execute(lua_State *L, int nexeccalls);
}

namespace big
{
	static lua_State *g_early_main_lua_state = nullptr;

	extern void render_imgui_frame();

	static bool lua_init_once = true;

	// Currently this is not the lua init function, it's the CryScriptSystem::Update function
	static __int64 __fastcall hook_CScriptSystem_Update(__int64 a1)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);
		std::scoped_lock l2(g_lua_manager->m_module_lock);

		const auto res = big::g_hooking->get_original<hook_CScriptSystem_Update>()(a1);

		if (g_lua_execute_buffer_queue.size())
		{
			auto state_view = sol::state_view(g_lua_manager->lua_state());
			for (const auto &buffer : g_lua_execute_buffer_queue)
			{
				try
				{
					state_view.script(buffer);
				}
				catch (const std::exception &e)
				{
					LOG(ERROR) << e.what();
				}
			}
			g_lua_execute_buffer_queue.clear();
		}

		render_imgui_frame();

		lua_manager_extension::g_lua_manager_instance->process_file_watcher_queue();

		return res;
	}

	//static __int64 __fastcall hook_Initializing_Direct3D(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, int a7, int a8, __int64 a9)
	static __int64 __fastcall hook_Initializing_Direct3D()
	{
		LOG(INFO) << "Initializing_Direct3D called (currently sys_flash_address_space setter function)";

		const auto res = big::g_hooking->get_original<hook_Initializing_Direct3D>()();

		//std::thread(
		//[]()
		//{
		big::g_renderer->hook();
		g_running = true;
		//})
		//.detach();

		LOG(INFO) << "Initializing_Direct3D finished";

		return res;
	}

	static void hook_lua_call(lua_State *L, int nargs, int nresults)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);
		std::scoped_lock l2(g_lua_manager->m_module_lock);

		static auto game_func = kcd2_address::scan("E8 ? ? ? ? FF C3 3B DF 7E").get_call().as_func<decltype(lua_call)>();
		return game_func(L, nargs, nresults);
	}

	static int hook_lua_checkstack(lua_State *L, int extra)
	{
		static auto game_func =
		    kcd2_address::scan("E8 ? ? ? ? 85 C0 75 ? 48 8D 15 ? ? ? ? 48 8B CF E8 ? ? ? ? 80 7B").get_call().as_func<decltype(lua_checkstack)>();
		return game_func(L, extra);
	}

	static void hook_lua_concat(lua_State *L, int n)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 2B DF").get_call().as_func<decltype(lua_concat)>();
		return game_func(L, n);
	}

	static void hook_lua_createtable(lua_State *L, int narr, int nrec)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 48 8B 5F ? 48 8B CF 48 2B 5F").get_call().as_func<decltype(lua_createtable)>();
		return game_func(L, narr, nrec);
	}

	static int hook_lua_error(lua_State *L)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 41 83 C8 ? 33 D2").get_call().as_func<decltype(lua_error)>();
		return game_func(L);
	}

	static int hook_lua_gc(lua_State *L, int what, int data)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 41 83 3C 9E").get_call().as_func<decltype(lua_gc)>();
		return game_func(L, what, data);
	}

	static void hook_lua_getfenv(lua_State *L, int index)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 41 8B C3 48 83 C4").get_call().as_func<decltype(lua_getfenv)>();
		return game_func(L, index);
	}

	static void hook_lua_getfield(lua_State *L, int index, const char *k)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 44 8D 7D").get_call().as_func<decltype(lua_getfield)>();
		return game_func(L, index, k);
	}

	static int hook_lua_getmetatable(lua_State *L, int index)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 85 C0 75 ? 33 D2 44 8D 40").get_call().as_func<decltype(lua_getmetatable)>();
		return game_func(L, index);
	}

	static void hook_lua_gettable(lua_State *L, int index)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 41 83 CB").get_call().as_func<decltype(lua_gettable)>();
		return game_func(L, index);
	}

	static void hook_lua_insert(lua_State *L, int index)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 8B 56 ? 44 8B CF").get_call().as_func<decltype(lua_insert)>();
		return game_func(L, index);
	}

	static sol::optional<sol::environment> env_to_add;
	static kcd2_address game_lua_pcall;

	//static std::unordered_set<size_t> g_lua_different_threads;

	static int hook_game_lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);
		std::scoped_lock l2(g_lua_manager->m_module_lock);

		if (env_to_add.has_value() && env_to_add.value().valid())
		{
			sol::set_environment(env_to_add.value(), sol::stack_reference(L, -1));
		}

		//auto current_thread_id = GetCurrentThreadId();
		//if (!g_lua_different_threads.contains(current_thread_id))
		//{
		//g_lua_different_threads.insert(current_thread_id);
		//LOG(ERROR) << "lua_pcall current thread id: " << current_thread_id;
		//}

		return big::g_hooking->get_original<hook_game_lua_pcall>()(L, nargs, nresults, errfunc);
	}

	static int hook_lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
	{
		return game_lua_pcall.as_func<decltype(lua_pcall)>()(L, nargs, nresults, errfunc);
	}

	static void hook_luaV_execute(lua_State *L, int nexeccalls)
	{
		//std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		static auto game_func =
		    kcd2_address::scan("48 8B C4 48 89 58 ? 89 50 ? 55 56 57 41 54 41 55 41 56 41 57 48 81 EC").as_func<decltype(luaV_execute)>();
		return game_func(L, nexeccalls);
	}

	static int hook_lua_load(lua_State *L, lua_Reader reader, void *dt, const char *chunkname)
	{
		//std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 48 83 CE ? 85 C0").get_call().as_func<decltype(lua_load)>();
		return game_func(L, reader, dt, chunkname);
	}

	static void CScriptTable_PushRef_def(void *a1, void *a2)
	{
	}

	static std::unordered_set<void *> g_lua_game_metatables;

	class vtable_helper
	{
	public:
		virtual ~vtable_helper()
		{
		}
	};

	struct CScriptableBase_info
	{
		void *m_ptr;
		std::string m_typeid_name;
	};

	static std::unordered_map<void *, CScriptableBase_info> g_metatable_ptr_to_CScriptable;

	static void hook_CScriptTable_SetMetatable(void *this_, void *pMetatable)
	{
		big::g_hooking->get_original<hook_CScriptTable_SetMetatable>()(this_, pMetatable);

		if (g_lua_game_metatables.contains(pMetatable))
		{
			return;
		}

		g_lua_game_metatables.insert(pMetatable);

		auto L = g_lua_manager->lua_state();

		lua_getglobal(L, "__cryengine__metatables");

		// Check if the global table exists, if not, create it
		if (lua_isnil(L, -1))
		{
			lua_pop(L, 1);                               // Pop the nil value
			lua_newtable(L);                             // Create a new table
			lua_pushvalue(L, -1);                        // Duplicate the table reference
			lua_setglobal(L, "__cryengine__metatables"); // Store in _G
		}

		static auto PushRef = kcd2_address::scan("E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 8D 4E ? 8D 56").get_call().as_func<decltype(CScriptTable_PushRef_def)>();

		const auto &cscriptable_info = g_metatable_ptr_to_CScriptable[pMetatable];

		// TODO: https://github.com/ValtoGameEngines/CryEngine/blob/d9d2c9f000836f0676e65a90bed40dcc3b1451eb/Code/CryEngine/CryScriptSystem/ScriptSystem.cpp#L2618
		std::string key;
		if (!cscriptable_info.m_typeid_name.empty())
		{
			key = cscriptable_info.m_typeid_name;
		}
		else
		{
			static uint64_t unk_counter = 0;
			key                         = std::format("Unknown Metatable {}", unk_counter++);
		}

		lua_pushstring(L, key.c_str()); // Push key
		PushRef(this_, pMetatable);     // Push value
		lua_settable(L, -3);            // __cryengine__metatables[key] = value

		// Pop the __cryengine__metatables table
		lua_pop(L, 1);
	}

	void hook_CScriptableBase_Init(__int64 a1, __int64 IScriptSystem_pSS, __int64 ISystem_pSystem, int nParamIdOffset)
	{
		big::g_hooking->get_original<hook_CScriptableBase_Init>()(a1, IScriptSystem_pSS, ISystem_pSystem, nParamIdOffset);

		g_ISystem = ISystem_pSystem;

		const auto metatable = *(__int64 *)(a1 + 72);
		if (metatable)
		{
			vtable_helper *vth = (vtable_helper *)a1;

			g_metatable_ptr_to_CScriptable[(void *)metatable] = {(void *)a1, typeid(*vth).name()};
		}
	}

	static void *hook_lua_custom_alloc(void *ud, void *ptr, size_t osize, size_t nsize)
	{
		(void)ud;
		(void)osize;
		if (nsize == 0)
		{
			free(ptr);
			return NULL;
		}
		else
		{
			return realloc(ptr, nsize);
		}
	}

	static char hook_CryScriptSystem_Init(void *this_, __int64 a2)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		const auto early_main_state = lua_manager_extension::g_lua_manager_instance->lua_state();
		lua_manager_extension::g_lua_manager_instance.reset();
		LOG(INFO) << "Lua manager early main reset";
		lua_close(early_main_state);

		LOG(INFO) << "Starting hook queue";
		Logger::FlushQueue();

		// no idea if all these hook are necessary, the one that did the trick was lua_load i'm pretty sure
		big::hooking::detour_hook_helper::add_queue<hook_luaV_execute>("", &luaV_execute);
		big::hooking::detour_hook_helper::add_queue<hook_lua_call>("", &lua_call);
		big::hooking::detour_hook_helper::add_queue<hook_lua_checkstack>("", &lua_checkstack);
		big::hooking::detour_hook_helper::add_queue<hook_lua_createtable>("", &lua_createtable);
		big::hooking::detour_hook_helper::add_queue<hook_lua_error>("", &lua_error);
		big::hooking::detour_hook_helper::add_queue<hook_lua_gc>("", &lua_gc);
		big::hooking::detour_hook_helper::add_queue<hook_lua_getfenv>("", &lua_getfenv);
		big::hooking::detour_hook_helper::add_queue<hook_lua_getfield>("", &lua_getfield);
		big::hooking::detour_hook_helper::add_queue<hook_lua_getmetatable>("", &lua_getmetatable);
		big::hooking::detour_hook_helper::add_queue<hook_lua_gettable>("", &lua_gettable);
		big::hooking::detour_hook_helper::add_queue<hook_lua_insert>("", &lua_insert);
		game_lua_pcall = kcd2_address::scan("E8 ? ? ? ? 48 8B 4E ? 8B D7 8B D8").get_call();
		big::hooking::detour_hook_helper::add_queue<hook_game_lua_pcall>("", game_lua_pcall);
		big::hooking::detour_hook_helper::add_queue<hook_lua_pcall>("", &lua_pcall);
		big::hooking::detour_hook_helper::add_queue<hook_lua_load>("lua_load hook", &lua_load);
		const auto game_lua_setmetatable =
		    kcd2_address::scan("40 53 48 83 EC ? 48 8B DA E8 ? ? ? ? 48 8B D3 E8 ? ? ? ? 48 8B 0D");
		big::hooking::detour_hook_helper::add_queue<hook_CScriptTable_SetMetatable>("hook_CScriptTable_SetMetatable", game_lua_setmetatable);
		const auto CScriptableBase_Init_func = kcd2_address::scan("E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 39 3D");
		big::hooking::detour_hook_helper::add_queue<hook_CScriptableBase_Init>("hook_CScriptableBase_Init",
		                                                                       CScriptableBase_Init_func.get_call());
		const auto lua_custom_alloc = kcd2_address::scan("E8 ? ? ? ? 33 FF 48 8B D8 48 85 C0 0F 84 ? ? ? ? 48 8D 88");
		big::hooking::detour_hook_helper::add_queue<hook_lua_custom_alloc>("hook_lua_custom_alloc", lua_custom_alloc.get_call());
		big::hooking::detour_hook_helper::execute_queue();

		LOG(INFO) << "Ending hook queue";
		Logger::FlushQueue();

		const auto res = big::g_hooking->get_original<hook_CryScriptSystem_Init>()(this_, a2);

		return res;
	}

	static void *__fastcall hook_attachVariable(void *this_, const char *szVarName, int *pContainer, const char *szComment, int dwFlags)
	{
		if (strcmp(szVarName, "sys_PakPriority") == 0)
		{
			LOG(INFO) << "sys_PakPriority intercepted. Setting to 0.";
			*pContainer = 0;
		}

		const auto res = big::g_hooking->get_original<hook_attachVariable>()(this_, szVarName, pContainer, szComment, dwFlags);

		return res;
	}

	static void hook_PostInputEvent(char **a1, __int64 a2, __int64 a3, __int64 a4)
	{
		if (big::g_gui && big::g_gui->is_open() && !big::g_gui->let_game_input_go_through_gui_layer)
		{
			return;
		}

		big::g_hooking->get_original<hook_PostInputEvent>()(a1, a2, a3, a4);
	}

	enum CryEngine_ELogType
	{
		eMessage,
		eWarning,
		eError,
		eAlways,
		eWarningAlways,
		eErrorAlways,
		eInput,         //!< e.g. "e_CaptureFolder ?" or all printouts from history or auto completion.
		eInputResponse, //!< e.g. "Set output folder for video capturing" in response to "e_CaptureFolder ?".
		eComment,
		eAssert
	};

	toml_v2::config_file::config_entry<bool> *g_hook_log_write_enabled = nullptr;

	static void __fastcall hook_CLog_LogV(__int64 this_, __int64 a2, unsigned int a3, CryEngine_ELogType elogtype, int a5, const char *szFormat, va_list args)
	{
		if (szFormat && g_hook_log_write_enabled->get_value())
		{
			va_list args_copy;
			va_copy(args_copy, args);

			// Determine required buffer size (excluding null terminator)
			int required_size = vsnprintf(nullptr, 0, szFormat, args_copy);
			va_end(args_copy);

			if (required_size > 0) // Ensure formatting succeeded
			{
				// Stack allocation using alloca (adds +1 for null terminator)
				char *buffer = (char *)alloca(required_size + 1);

				va_copy(args_copy, args);
				vsnprintf(buffer, required_size + 1, szFormat, args_copy);
				va_end(args_copy);

				switch (elogtype)
				{
				case eMessage:       LOG(INFO) << buffer; break;
				case eWarning:       LOG(WARNING) << buffer; break;
				case eError:         LOG(ERROR) << buffer; break;
				case eAlways:        LOG(INFO) << buffer; break;
				case eWarningAlways: LOG(WARNING) << buffer; break;
				case eErrorAlways:   LOG(ERROR) << buffer; break;
				case eInput:         LOG(INFO) << buffer; break;
				case eInputResponse: LOG(INFO) << buffer; break;
				case eComment:       LOG(INFO) << buffer; break;
				case eAssert:        LOG(ERROR) << "[Assert] " << buffer; break;
				default:             LOG(INFO) << buffer; break;
				}
			}
		}

		big::g_hooking->get_original<hook_CLog_LogV>()(this_, a2, a3, elogtype, a5, szFormat, args);
	}

	bool __fastcall hook_CScriptSystem_ExecuteBuffer(__int64 this_, const char *sBuffer, __int64 size, const char *sBufferDescription, __int64 pEnvironmentLua)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		if (lua_init_once)
		{
			lua_init_once = false;

			lua_State *L = *reinterpret_cast<lua_State **>(this_ + 16);

			// must ensure dummynode / luaO_nilobject from the game WHGame.dll is used and not ours.
			{
				static auto game_index2adr = kcd2_address::scan("85 D2 7F ? B8", "game index2adr").as_func<intptr_t(lua_State *, int)>();
				luaO_nilobject_external_address = game_index2adr(L, 999'999);
				static auto game_luaH_new =
				    kcd2_address::scan(
				        "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 8B F0 8B DA 45 33 C0",
				        "game luaH_new")
				        .as_func<Table *(lua_State *, int, int)>();
				auto game_table            = game_luaH_new(L, 0, 0);
				dummynode_external_address = (intptr_t)game_table->node;
			}

			// https://github.com/lp249839965/CryEngine-5.2.3/blob/ef4f45fe2ff05ad788fec1dd6ac56c038731e29d/Code/CryEngine/CryScriptSystem/ScriptSystem.cpp#L747
			{
				L->l_G->storedebug = 1;
			}

			LOG(INFO) << "Lua manager init";
			lua_manager_extension::g_lua_manager_instance = std::make_unique<lua_manager>(
			    L,
			    g_file_manager.get_project_folder("config"),
			    g_file_manager.get_project_folder("plugins_data"),
			    g_file_manager.get_project_folder("plugins"),
			    [](sol::state_view &state, sol::table &lua_ext)
			    {
				    lua_manager_extension::init_lua_manager(state, lua_ext, false);
			    },
			    [](sol::state_view &state) -> sol::environment
			    {
				    // rom.game = _G
				    state[rom::g_lua_api_namespace]["game"] = state["_G"];

				    // local plugin_G = {}
				    sol::table plugin_G = state.create_table();

				    sol::table all_g = state["_G"];
				    for (const auto &[k, v] : all_g)
				    {
					    if (k.is<const char *>())
					    {
						    auto key_str = k.as<const char *>();
						    // Bad heuristic for filtering out native functions from the game code
						    if (!std::isupper(static_cast<unsigned char>(key_str[0])))
						    {
							    plugin_G[k] = v;
						    }
					    }
					    else
					    {
						    plugin_G[k] = v;
					    }
				    }

				    // plugin_G.rom = rom
				    plugin_G[rom::g_lua_api_namespace] = state[rom::g_lua_api_namespace];

				    // plugin_G._G = plugin_G
				    plugin_G["_G"] = plugin_G;

				    // when you give plugins an _ENV, plugin_G is the __index instead
				    return sol::environment(state, sol::create, plugin_G);
			    });

			lua_manager_extension::g_lua_manager_instance->init<lua_module_ext>(true);
		}

		std::scoped_lock guard(g_lua_manager->m_module_lock);

		for (const auto &mod_ : g_lua_manager->m_modules)
		{
			auto mod = (lua_module_ext *)mod_.get();
			for (const auto &cb : mod->m_data_ext.m_on_pre_import)
			{
				auto res        = cb(sBufferDescription, env_to_add.has_value() ? env_to_add.value() : sol::lua_nil);
				auto env_to_set = res.get<sol::optional<sol::environment>>();
				if (env_to_set && env_to_set.value() && env_to_set.value().valid())
				{
					env_to_add = env_to_set;
					LOG(INFO) << "Setting _ENV for this script to " << mod->guid();
				}
			}
		}

		const auto res = big::g_hooking->get_original<hook_CScriptSystem_ExecuteBuffer>()(this_, sBuffer, size, sBufferDescription, pEnvironmentLua);

		env_to_add = {};

		for (const auto &mod_ : g_lua_manager->m_modules)
		{
			auto mod = (lua_module_ext *)mod_.get();
			for (const auto &cb : mod->m_data_ext.m_on_post_import)
			{
				cb(sBufferDescription);
			}
		}

		return res;
	}

	__int64 hook_fmodstudio_loadbankfile(void *this_, const char *filename, __int64 fmod_studio_load_bank_flags, void **bank)
	{
		g_fmodstudio_instance = this_;

		return fmodstudio_loadbankfile_orig(this_, filename, fmod_studio_load_bank_flags, bank);
	}

	static __int64 hook_fmodstudio_getevent(void *fmodstudio_event_system_this, const char *event_name, void **event_description_result)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		std::string new_event_name = event_name;

		if (g_lua_manager)
		{
			std::scoped_lock guard(g_lua_manager->m_module_lock);

			for (const auto &mod_ : g_lua_manager->m_modules)
			{
				auto mod = (lua_module_ext *)mod_.get();
				for (const auto &cb : mod->m_data_ext.m_on_fmod_getevent)
				{
					auto res = cb(new_event_name);
					if (res.get_type() == sol::type::string)
					{
						new_event_name = res.get<std::string>();
					}
				}
			}
		}

		g_fmod_events.insert(new_event_name.c_str());

		const auto res = fmodstudio_getevent_orig(fmodstudio_event_system_this, new_event_name.c_str(), event_description_result);
		if (res != 0)
		{
			LOG(WARNING) << "Failed playing " << new_event_name.c_str() << " - " << res << " - " << event_description_result;
		}

		return res;
	}

	const char *g_xml_current_parsed_filename = nullptr;

	static __int64 *__fastcall hook_XmlParserImp_ParseFile(void *this_, __int64 *a2, const char *filename, char a4)
	{
		g_xml_current_parsed_filename = filename;

		const auto res = big::g_hooking->get_original<hook_XmlParserImp_ParseFile>()(this_, a2, filename, a4);

		g_xml_current_parsed_filename = nullptr;

		return res;
	}

	static std::string strip_last_double_underscore(const std::string &path)
	{
		size_t pos = path.rfind("__");
		if (pos != std::string::npos)
		{
			return path.substr(0, pos) + ".xml";
		}

		return path;
	}

	static std::string strip_last_file_separator(const std::string &path)
	{
		size_t pos = path.find_last_of("/\\"); // Find last occurrence of '/' or '\'
		if (pos != std::string::npos)
		{
			return path.substr(pos + 1); // Return substring after the last separator
		}
		return path; // Return original string if no separator is found
	}

	static std::string get_normalized_original_filename(const std::string &input)
	{
		return strip_last_file_separator(big::string::to_lower(input));
	}

	static std::string get_original_filename_from_mod_filename(const std::string &input)
	{
		return strip_last_file_separator(strip_last_double_underscore(big::string::to_lower(input)));
	}

	void parse_xml_entity(pugi::xml_node in_node, const std::string &entity_class_name, xml_node_metadata_t &metadata_out_node, entity_xml_info_t *entity_out_info)
	{
		entity_out_info->m_id = metadata_out_node.m_id;

		for (const auto &attr : in_node.attributes())
		{
			const std::string attr_name = attr.name();
			if (attr_name.empty())
			{
				continue;
			}
			const std::string attr_value = attr.value();
			if (attr_value.empty())
			{
				continue;
			}

			auto &attribute_potential_values = metadata_out_node.m_attributes[attr_name];
			if (attribute_potential_values.size() < 20)
			{
				attribute_potential_values.insert(attr_value);
			}
			auto &attribute_entityclass = metadata_out_node.m_attributes_entityclass[attr_name];
			attribute_entityclass.insert(entity_class_name);

			entity_out_info->m_attributes.emplace_back(attr_name, attr_value);
		}

		for (const auto &child : in_node.children())
		{
			const std::string child_name = child.name();
			if (child_name.empty())
			{
				continue;
			}

			const auto metadata_id    = metadata_out_node.m_id + '_' + child_name;
			auto &child_node_metadata = g_entity_xml_metadata[metadata_id];
			if (!child_node_metadata.m_id.size())
			{
				child_node_metadata.m_id   = metadata_id;
				child_node_metadata.m_name = child_name;
			}
			metadata_out_node.m_childrens.insert(metadata_id);
			auto &childrens_entityclass = metadata_out_node.m_childrens_entityclass[metadata_id];
			childrens_entityclass.insert(entity_class_name);

			entity_xml_info_t *child_xml_info = new entity_xml_info_t;
			child_xml_info->m_name            = child_name;

			parse_xml_entity(child, entity_class_name, child_node_metadata, child_xml_info);

			entity_out_info->m_childrens.push_back(child_xml_info);
		}
	}

	void parse_xml_objects_file(const char *file_content_, size_t file_size_)
	{
		const std::string file_content(file_content_, file_size_);

		g_thread_pool->push(
		    [file_content]()
		    {
			    pugi::xml_document doc;
			    if (!doc.load_buffer(file_content.c_str(), file_content.size()))
			    //if (!doc.load_file("C:/Users/Quentin/Desktop/kcd2/level_kutnohorsko/objects_mission0.xml"))
			    {
				    LOG(ERROR) << "Failed to load <Objects> XML file";
				    return;
			    }

			    const std::string entity_str = "Entity";

			    std::scoped_lock l(g_xml_info_mutex);

			    for (auto &entity : doc.child("Objects").children(entity_str.c_str()))
			    {
				    const std::string entity_guid       = entity.attribute("EntityGuid").value();
				    const std::string entity_class_name = entity.attribute("EntityClass").value();

				    entity_xml_info_t *entity_xml_info   = new entity_xml_info_t;
				    entity_xml_info->m_name              = entity_str;
				    entity_xml_info->m_entity_name       = entity.attribute("Name").value();
				    entity_xml_info->m_entity_class_name = entity_class_name;

				    auto &entity_root_node = g_entity_xml_metadata[entity_str];
				    if (!entity_root_node.m_id.size())
				    {
					    entity_root_node.m_id   = entity_str;
					    entity_root_node.m_name = entity_str;
				    }
				    parse_xml_entity(entity, entity_class_name, entity_root_node, entity_xml_info);

				    g_entity_xml_infos.push_back(entity_xml_info);
				    g_entity_guid_to_xml_infos[entity_guid] = entity_xml_info;
			    }

			    //LOG(INFO) << "Parsed an XML file containing <Objects>";
		    });
	}

	static __int64 __fastcall hook_XML_Parse(__int64 parser, const char *pFileContents, int fileSize)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		if (big::string::starts_with("<Objects>", pFileContents))
		{
			//LOG(INFO) << "Found <Objects>";
			parse_xml_objects_file(pFileContents, fileSize);
		}

		// useful for finding xref across data, wh_data however doesn't seem to get parsed here?
		/*if (new_file_content.contains("a659399b-8517-4cc7") || new_file_content.contains("3a7fb2dc-9118-418a-bb5c-c8db913467ed")
		    || new_file_content.contains("763db0bb-4469-497d-bdc9-712b3df91b5a") || new_file_content.contains("ksta_additive_man_18"))
		{
			LOG(ERROR) << g_xml_current_parsed_filename ? g_xml_current_parsed_filename : "No filename";
		}*/

		// TODO: try to re-enable this, there is lua vm crashes because of this, due to it not being called from the lua script thread.
		//if (g_lua_manager)
		//{
		//std::scoped_lock guard(g_lua_manager->m_module_lock);

		//for (const auto &mod_ : g_lua_manager->m_modules)
		//{
		//auto mod = (lua_module_ext *)mod_.get();
		//for (const auto &cb : mod->m_data_ext.m_on_xml_parse)
		//{


		//auto res = cb(g_xml_current_parsed_filename ? g_xml_current_parsed_filename : "", new_file_content);
		//if (res.get_type() == sol::type::string)
		//{
		//new_file_content = res.get<std::string>();
		//}
		//}
		//}
		//}

		const char *current_parsed_filename = g_xml_current_parsed_filename;
		if (current_parsed_filename)
		{
			const auto original_filename = get_normalized_original_filename(current_parsed_filename);

			const auto it = g_xml_filename_to_modifications.find(original_filename);
			if (it != g_xml_filename_to_modifications.end())
			{
				std::filesystem::path filename = current_parsed_filename;
				const auto modded_xml_filename_lowered = big::string::to_lower((char *)filename.filename().u8string().c_str());
				if (!g_modded_xml_filenames.contains(modded_xml_filename_lowered))
				{
					LOG(INFO) << "[XML Merger] Applying xml merge patches for " << original_filename << " (" << current_parsed_filename << " - " << modded_xml_filename_lowered << ")";

					std::string new_file_content;
					new_file_content.assign(pFileContents, fileSize);
					apply_xml_patches(new_file_content, it->second);
					return big::g_hooking->get_original<hook_XML_Parse>()(parser,
					                                                      new_file_content.c_str(),
					                                                      new_file_content.size());

					//if (!modded_xml_filename_lowered.contains("component"))
					//{
					//std::ofstream file("C:/Users/Quentin/Desktop/inventorypreset__shop_PATCHED.xml", std::ios::binary);
					//if (file)
					//{
					//file.write(new_file_content.data(), new_file_content.size());
					//}
					//}
				}
			}
			else
			{
				//LOG(INFO) << original_filename;
			}
		}


		return big::g_hooking->get_original<hook_XML_Parse>()(parser, pFileContents, fileSize);
	}

	uintptr_t g_CCryPak = 0;

	static __int64 __fastcall hook_CCryPak_ctor(__int64 a1, __int64 a2, void *a3)
	{
		g_CCryPak = a1;

		return big::g_hooking->get_original<hook_CCryPak_ctor>()(a1, a2, a3);
	}

	static const char *g_table_current_table_name = nullptr;
	static const char *g_table_current_mod_name   = nullptr;

	static bool is_safe_ptr(const char *ptr)
	{
		__try
		{
			// Attempt to read memory at ptr
			if (ptr && *ptr)
			{
				return ptr;
			}
		}
		__except (EXCEPTION_EXECUTE_HANDLER)
		{
			return false;
		}
		return false;
	}

	// Wrapper function that safely converts the string
	static std::string safe_string_convert(const char *ptr)
	{
		return is_safe_ptr(ptr) ? std::string(ptr) : std::to_string((uintptr_t)ptr);
	}

	// Returns true if parsed successfully
	// Returns true and skip orig call for skipping xml parsing of a given file
	static bool hook_XmlParserReadOnly_Read_caller(__int64 a1, const char **ptr_to_filename, char a3)
	{
		if (ptr_to_filename && *ptr_to_filename)
		{
			std::filesystem::path filename = *ptr_to_filename;
			const auto modded_xml_filename_lowered = big::string::to_lower((char *)filename.filename().u8string().c_str());
			if (g_modded_xml_filenames.contains(modded_xml_filename_lowered))
			{
				LOG(INFO) << "[XML Merger] Skipping vanilla parsing of " << *ptr_to_filename << " since we already merged it";
				return true;
			}
		}

		const auto res = big::g_hooking->get_original<hook_XmlParserReadOnly_Read_caller>()(a1, ptr_to_filename, a3);

		return res;
	}

	static __int64 g_CXConsole = 0;

	struct cvar_vtable_helper
	{
		virtual ~cvar_vtable_helper()
		{
		}

		virtual void *func_1()            = 0;
		virtual void *func_2()            = 0;
		virtual void *func_3()            = 0;
		virtual float GetFVal()           = 0;
		virtual const char *GetString()   = 0;
		virtual void *func_6()            = 0;
		virtual void *func_7()            = 0;
		virtual void *func_8()            = 0;
		virtual void *func_9()            = 0;
		virtual void *func_10()           = 0;
		virtual void *func_11()           = 0;
		virtual void *func_12()           = 0;
		virtual void *func_13()           = 0;
		virtual int GetType()             = 0;
		virtual const char *GetName()     = 0;
		virtual const char *GetHelpText() = 0;
	};

	std::string to_string_us(float value)
	{
		std::ostringstream oss;
		oss.imbue(std::locale("C")); // Ensures decimal point is '.'
		oss << value;
		return oss.str();
	}

	static __int64 hook_CXConsole_RegisterVar(__int64 a1, cvar_vtable_helper *pCvar, __int64 pChangeFunc)
	{
		// https://github.com/ValtoGameEngines/CryEngine/blob/d9d2c9f000836f0676e65a90bed40dcc3b1451eb/Code/CryEngine/CryCommon/CrySystem/IConsole.h#L612
		const char *cvar_name      = pCvar->GetName();
		const char *cvar_help_text = pCvar->GetHelpText();
		const auto cvar_type       = pCvar->GetType();
		std::string default_value  = "";
		constexpr int CVAR_FLOAT   = 2;
		constexpr int CVAR_INT     = 1;
		constexpr int CVAR_STRING  = 3;
		if (cvar_type == CVAR_FLOAT || cvar_type == CVAR_INT)
		{
			default_value = to_string_us(pCvar->GetFVal());
		}
		else if (cvar_type == CVAR_STRING)
		{
			default_value = pCvar->GetString();
		}

		g_cvar_name_to_cvar_data[cvar_name] = {cvar_help_text, default_value};

		const auto res = big::g_hooking->get_original<hook_CXConsole_RegisterVar>()(a1, pCvar, pChangeFunc);

		return res;
	}

	static __int64 hook_CXConsole_AddCommandScript(__int64 a1, const char *sName, __int64 pFunc, int nFlags, const char *sHelp)
	{
		if (sName)
		{
			g_console_command_name_to_help_text[sName] = sHelp ? sHelp : "";
		}

		const auto res = big::g_hooking->get_original<hook_CXConsole_AddCommandScript>()(a1, sName, pFunc, nFlags, sHelp);
		return res;
	}

	static __int64 hook_CXConsole_AddCommandCommand(__int64 a1, const char *sName, __int64 pFunc, int nFlags, const char *sHelp)
	{
		if (sName)
		{
			g_console_command_name_to_help_text[sName] = sHelp ? sHelp : "";
		}

		const auto res = big::g_hooking->get_original<hook_CXConsole_AddCommandCommand>()(a1, sName, pFunc, nFlags, sHelp);
		return res;
	}

	static __int64 hook_CXConsole_Ctor(__int64 a1)
	{
		const auto res = big::g_hooking->get_original<hook_CXConsole_Ctor>()(a1);

		g_CXConsole = a1;

		static auto hook1 =
		    big::hooking::detour_hook_helper::add<hook_CXConsole_AddCommandScript>("hook_CXConsole_AddCommandScript", (*reinterpret_cast<void ***>(a1))[32]);
		static auto hook2 =
		    big::hooking::detour_hook_helper::add<hook_CXConsole_AddCommandCommand>("hook_CXConsole_AddCommandCommand", (*reinterpret_cast<void ***>(a1))[33]);

		return res;
	}

	static __int64 hook_CEntitySystem_CEntitySystem(CEntitySystem *this_, __int64 ISystem_pSystem)
	{
		const auto res = big::g_hooking->get_original<hook_CEntitySystem_CEntitySystem>()(this_, ISystem_pSystem);

		g_CEntitySystem = this_;

		return res;
	}

	static __int64 hook_CEntity_dctor(CEntity *centity_inst, char a2)
	{
		const auto res = big::g_hooking->get_original<hook_CEntity_dctor>()(centity_inst, a2);

		const auto it = std::find(g_entities.begin(), g_entities.end(), centity_inst);
		if (it != g_entities.end())
		{
			*it = g_entities.back();
			g_entities.pop_back();
		}
		g_entity_infos.erase(centity_inst);

		return res;
	}

	static __int64 hook_CEntity_ctor(CEntity *a1, __int64 a2)
	{
		const auto res = big::g_hooking->get_original<hook_CEntity_ctor>()(a1, a2);

		g_entities.push_back(a1);
		CEntitySystem_DumpEntity(g_CEntitySystem, a1);

		if (strcmp(a1->GetName(), "Dude") == 0)
		{
			g_player_entity = a1;
			LOG(INFO) << "Player entity found";
		}

		static auto hook_dctor = big::hooking::detour_hook_helper::add<hook_CEntity_dctor>("hook_CEntity_dctor", (*reinterpret_cast<void ***>(a1))[0]);

		return res;
	}

	//__int64 hook_CPlayerStateMovement_Ledge_callback(__int64 a1, __int64 a2, __int64 a3, int32_t *a4)
	//{
	//const auto res = big::g_hooking->get_original<hook_CPlayerStateMovement_Ledge_callback>()(a1, a2, a3, a4);

	//LOG(INFO) << "CPlayerStateMovement_Ledge_callback callback: " << a1 << " - " << a2 << " - " << a3 << " - " << a4;

	//LOG(INFO) << "a1: " << typeid(*reinterpret_cast<vtable_helper *>(a1)).name(); // C_PlayerStateMovement

	// a2 is a 40 bytes struct, can be anything, doesn't matter, just allocate it on stack.
	// a4 is the int enum new value of the state.

	//LOG(INFO) << "a3: " << typeid(*reinterpret_cast<vtable_helper *>(a3)).name(); // C_Player

	//return res;
	//}

	__int64 hook_C_PlayerStateMovement_ctor(__int64 a1)
	{
		g_C_PlayerStateMovement = a1;

		const auto res = big::g_hooking->get_original<hook_C_PlayerStateMovement_ctor>()(a1);

		return res;
	}

	__int64 hook_C_Player_ctor(__int64 a1)
	{
		g_C_Player = a1;

		const auto res = big::g_hooking->get_original<hook_C_Player_ctor>()(a1);

		return res;
	}

	static __int64 hook_wh_db_table_patch_find_line(__int64 table_metadata, char *table_vanilla_data, unsigned int table_vanilla_line_index, char *table_mod_data, unsigned int table_mod_line_index)
	{
		const auto res = big::g_hooking->get_original<hook_wh_db_table_patch_find_line>()(table_metadata, table_vanilla_data, table_vanilla_line_index, table_mod_data, table_mod_line_index);

		const auto v5                    = *(uint64_t *)(table_metadata + 64);
		const auto line_size             = *(uint32_t *)(v5 + 16);
		char *table_vanilla_data_indexed = &table_vanilla_data[table_mod_line_index * line_size];

		char *table_vanilla_data_key = *(char **)table_vanilla_data_indexed;
		char *table_mod_data_key_ptr = *(char **)table_mod_data;

		std::string table_mod_data_key = safe_string_convert(table_mod_data_key_ptr);

		std::vector<uint8_t> patched_data(line_size);
		std::memcpy(patched_data.data(), table_mod_data, line_size);

		if (res == -1)
		{
			g_table_name_to_added_line_to_info[g_table_current_table_name][table_mod_data_key].push_back({g_table_current_mod_name, patched_data});
		}
		else
		{
			if (!g_table_name_to_modified_line_to_original_data[g_table_current_table_name].contains(table_mod_data_key))
			{
				std::vector<uint8_t> orig_data(line_size);
				std::memcpy(orig_data.data(), table_vanilla_data_indexed, line_size);
				g_table_name_to_modified_line_to_original_data[g_table_current_table_name][table_mod_data_key] = orig_data;
			}
			g_table_name_to_modified_line_to_info[g_table_current_table_name][table_mod_data_key].push_back({g_table_current_mod_name, patched_data});
		}

		return res;
	}

	// Skip the "__" or return original string if not found
	static const char *get_string_after_double_underscore(const char *str)
	{
		const char *found = strstr(str, "__");
		return found ? found + 2 : str;
	}

	static char __fastcall hook_wh_db_table_patched(__int64 table_metadata, __int64 mod_metadata, int *line_added_count, int *line_modified_count)
	{
		g_table_current_table_name = *(const char **)(table_metadata + 40);

		const auto mod_patch_table_name = *(const char **)(mod_metadata + 40);
		g_table_current_mod_name        = get_string_after_double_underscore(mod_patch_table_name);

		LOG(INFO) << "Table PTF Name: " << g_table_current_table_name << " - " << g_table_current_mod_name;

		const auto is_table_patched = big::g_hooking->get_original<hook_wh_db_table_patched>()(table_metadata, mod_metadata, line_added_count, line_modified_count);
		if (is_table_patched)
		{
		}

		return is_table_patched;
	}

	static bool hook_CCryFile_Open(__int64 this_, const char *filename, const char *mode, unsigned int nOpenFlags)
	{
		if (strcmp(mode, "rb") != 0)
		{
			return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, filename, mode, nOpenFlags);
		}

		if (!g_lua_manager)
		{
			return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, filename, mode, nOpenFlags);
		}

		std::scoped_lock guard(g_lua_manager->m_module_lock);

		for (const auto &mod_ : g_lua_manager->m_modules)
		{
			auto mod      = (lua_module_ext *)mod_.get();
			const auto it = mod->m_data_ext.m_cryfile_open_replace_map.find(filename);
			if (it != mod->m_data_ext.m_cryfile_open_replace_map.end())
			{
				return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, it->second.c_str(), mode, nOpenFlags);
			}
		}

		return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, filename, mode, nOpenFlags);
	}

	void apply_xml_patches(std::string &originalFileContent, const std::vector<std::string> &patchFileContents)
	{
		// Load original file content into a pugixml document
		pugi::xml_document originalDoc;
		pugi::xml_parse_result result = originalDoc.load_buffer(originalFileContent.c_str(), originalFileContent.size(), (pugi::parse_default | pugi::parse_comments));
		if (!result)
		{
			LOG(ERROR) << "Failed to parse original file: " << result.description();
			return;
		}

		// Iterate over each patch file content
		for (const std::string &patchContent : patchFileContents)
		{
			// Load patch content into a pugixml document
			pugi::xml_document patchDoc;
			pugi::xml_parse_result patchResult = patchDoc.load_buffer(patchContent.c_str(), patchContent.size(), (pugi::parse_default | pugi::parse_comments));
			if (!patchResult)
			{
				LOG(ERROR) << "Failed to parse patch file: " << patchResult.description();
				continue;
			}

			std::function<void(pugi::xml_node, pugi::xml_node)> merge_nodes;
			merge_nodes = [&](pugi::xml_node base_node, pugi::xml_node patch_node)
			{
				for (pugi::xml_node patch_child : patch_node.children())
				{
					const char *name = patch_child.name();

					std::string identifier  = patch_child.attribute("Name").value();
					identifier             += patch_child.attribute("Ref").value();

					pugi::xml_node matching_node;
					for (pugi::xml_node base_child : base_node.children(name))
					{
						std::string other_identifier  = base_child.attribute("Name").value();
						other_identifier             += base_child.attribute("Ref").value();

						if (identifier == other_identifier)
						{
							matching_node = base_child;
							break;
						}
					}

					if (matching_node)
					{
						for (pugi::xml_attribute attr : patch_child.attributes())
						{
							matching_node.attribute(attr.name()).set_value(attr.value());
						}
						merge_nodes(matching_node, patch_child);
					}
					else
					{
						base_node.append_copy(patch_child);
					}
				}
			};

			merge_nodes(originalDoc, patchDoc);
		}

		std::ostringstream outputStream;
		originalDoc.save(outputStream);
		originalFileContent = outputStream.str();
	}

	void read_xmls_from_zip_file_path(const std::string &zipFilePath)
	{
		struct zip_t *zip = zip_open(zipFilePath.c_str(), 0, 'r');
		int i, n = zip_entries_total(zip);
		for (i = 0; i < n; ++i)
		{
			zip_entry_openbyindex(zip, i);
			{
				const char *name        = zip_entry_name(zip);
				int isdir               = zip_entry_isdir(zip);
				unsigned long long size = zip_entry_size(zip);
				unsigned int crc32      = zip_entry_crc32(zip);

				if (!strstr(name, ".xml"))
				{
					continue;
				}

				unsigned char *file_content = (unsigned char *)calloc(sizeof(unsigned char), size);

				zip_entry_noallocread(zip, (void *)file_content, size);

				std::filesystem::path modded_xml_filename = name;
				const auto modded_xml_filename_lowered =
				    big::string::to_lower((char *)modded_xml_filename.filename().u8string().c_str());

				if (modded_xml_filename_lowered.contains("inventorypreset"))
				{
					g_modded_xml_filenames.insert(modded_xml_filename_lowered);
					const auto original_filename = get_original_filename_from_mod_filename(name);
					const std::string modification((char *)file_content, size);
					g_xml_filename_to_modifications[original_filename].emplace_back(modification);
					LOG(INFO) << "[XML Merger] Adding modded xml file " << modded_xml_filename_lowered << " to " << original_filename
					          << " patch list (count: " << g_xml_filename_to_modifications[original_filename].size() << ")";
				}

				free(file_content);
			}
			zip_entry_close(zip);
		}
		zip_close(zip);
	}

	void CEntitySystem_DumpEntity(CEntitySystem *entity_system, CEntity *entity)
	{
		EntityInfo info;

		info.name       = entity->GetName();
		info.name_lower = big::string::to_lower(info.name);

		auto entity_class     = entity->GetClass();
		info.class_name       = entity_class->GetName();
		info.class_name_lower = big::string::to_lower(info.class_name);

		Archetype *archetype = entity->m_archetype;
		if (archetype)
		{
			//LOG(INFO) << HEX_TO_UPPER(archetype);
			//Logger::FlushQueue();
			//MessageBoxA(0, "", "", 0);
			info.archetype_name       = archetype->m_name;
			info.archetype_name_lower = big::string::to_lower(info.archetype_name);
		}
		else
		{
			info.archetype_name       = "None";
			info.archetype_name_lower = big::string::to_lower(info.archetype_name);
		}

		//entity->GetPos(info.position);
		//info.is_active = entity->IsActive();
		//info.is_hidden = entity->IsHidden();

		info.id        = entity->GetId();
		info.id_string = std::to_string(info.id);
		info.id_mask   = info.id & 0x3'FF'FF;
		info.id_salt   = info.id >> 18;

		__int64 entity_layer_data = entity_system->GetEntityLayerData(entity);
		if (entity_layer_data)
		{
			info.layer_id         = *(unsigned __int16 *)(entity_layer_data + 40);
			info.layer_name       = *(const char **)(entity_layer_data + 16);
			info.layer_name_lower = big::string::to_lower(info.layer_name);
		}

		auto guid_data   = entity->GetGuid();
		auto format_guid = [](__int64 guid_data) -> std::string
		{
			char result[64];
			snprintf(result, sizeof(result), "%.8x-%.4x-%.4x", *(uint32_t *)guid_data, *(uint16_t *)(guid_data + 4), *(uint16_t *)(guid_data + 6));
			return std::string(result);
		};
		if (guid_data)
		{
			info.guid = format_guid((__int64)&guid_data);
		}

		g_entity_infos.insert({entity, info});
	}

	void CEntitySystem_DumpEntities(CEntitySystem *entity_system)
	{
		g_entity_infos.clear();
		g_entities_filtered.clear();

		auto it = entity_system->GetEntityIterator();
		if (it)
		{
			(*(void (**)(__int64))(*(__int64 *)it + 8LL))(it);
		}

		const auto EntityIterator_MoveFirst_func = (*(void (**)(__int64))(*(__int64 *)it + 48LL));
		EntityIterator_MoveFirst_func(it);

		const auto EntityIterator_Next_func = (*(CEntity * (**)(__int64))(*(__int64 *)it + 32LL));
		while (auto entity = EntityIterator_Next_func(it))
		{
			CEntitySystem_DumpEntity(entity_system, entity);
		}
	}

	std::pair<Vec3, Vec3> GetViewCameraPositionAndDirection()
	{
		// vtable offset retrieved by looking at the lua exposed function "GetViewCameraPos"
		const auto ISystem_GetViewCameraMatrix_func = (*reinterpret_cast<void ***>(g_ISystem))[133];
		uintptr_t camera_matrix = ((__int64 (*)(uint64_t))ISystem_GetViewCameraMatrix_func)(g_ISystem);
		Vec3 camera_position;
		camera_position.x = *(float *)(camera_matrix + 12);
		camera_position.y = *(float *)(camera_matrix + 12 + 16);
		camera_position.z = *(float *)(camera_matrix + 12 + 16 + 16);

		Vec3 camera_direction;
		camera_direction.x = *(float *)(camera_matrix + 4);
		camera_direction.y = *(float *)(camera_matrix + 4 + 16);
		camera_direction.z = *(float *)(camera_matrix + 4 + 16 + 16);

		return {camera_position, camera_direction};
	}

	static int RayWorldIntersection_definition(__int64 IPhysicalWorld_instance, Vec3 *source, Vec3 *direction, unsigned int iEntTypes, unsigned int flags, ray_hit_t *hits, int nmaxhits, void **pSkipEnts = 0, int nSkipEnts = 0, __int64 pForeignData = 0, int iForeignData = 0, const char *pNameTag = "RayWorldIntersection(Physics)")
	{
	}

	void RayWorldIntersection()
	{
		if (!g_player_entity)
		{
			return;
		}

		ray_hit_t ray_hit[1];

		// ISystem_GetIPhysicalWorld_func vtable offset found in the function that call RayWorldIntersection and use RayWorldIntersection(Script) as parameter
		const auto ISystem_GetIPhysicalWorld_func = (*reinterpret_cast<void ***>(g_ISystem))[74];
		const auto IPhysicalWorld_instance        = ((__int64 (*)(uint64_t))ISystem_GetIPhysicalWorld_func)(g_ISystem);

		static auto RayWorldIntersection_func = kcd2_address::scan("E8 ? ? ? ? 48 FF 03 48 81 C4").get_call().as_func<decltype(RayWorldIntersection_definition)>();
		auto camera_pos_and_dir = GetViewCameraPositionAndDirection();

		// Extend the max range distance to 1000
		Vec3 ray_dir_range = camera_pos_and_dir.second * 1000.0f;

		void *pSkipEnts[1];
		pSkipEnts[0] = g_player_entity->GetPhysics();

		constexpr int iEntTypes = ent_all;
		//constexpr int geom_flags_val = geom_colltype0 << rwi_colltype_bit | rwi_stop_at_pierceable;
		constexpr int geom_flags_val = rwi_ignore_noncolliding | rwi_stop_at_pierceable;

		const auto nHits = RayWorldIntersection_func(IPhysicalWorld_instance, &camera_pos_and_dir.first, &ray_dir_range, iEntTypes, geom_flags_val, ray_hit, 1, pSkipEnts, 1, 0, 0, "RayWorldIntersection(Physics)");

		for (int i = 0; i < nHits; i++)
		{
			const auto &hit                   = ray_hit[i];
			const auto PHYS_FOREIGN_ID_STATIC = 2;
			const auto hit_entity             = hit.pCollider->GetForeignData(PHYS_FOREIGN_ID_STATIC);
			if (hit_entity)
			{
				LOG(INFO) << "[Raycast] Entity hit: " << hit_entity->GetName();

				size_t k = 0;
				for (const auto &ent : g_entities)
				{
					if (ent == hit_entity)
					{
						g_selected_index_entity_detail_inspector = k;

						break;
					}

					k++;
				}
			}
			else
			{
				LOG(INFO) << "[Raycast] No entity hit";
			}
			LOG(INFO) << "[Raycast] Hit distance: " << hit.dist;
			LOG(INFO) << "[Raycast] Hit pos: " << hit.pt.x << " y: " << hit.pt.y << " z: " << hit.pt.z;
		}
	}

	void kcd2_init()
	{
		{
			const auto cryengine_attachVariable =
			    kcd2_address::scan("E8 ? ? ? ? 4C 8D 0D ? ? ? ? 4C 8D 05 ? ? ? ? 48 8B CB");
			if (!cryengine_attachVariable)
			{
				LOG(ERROR) << "Failed to find CryEngine attachVariable";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_attachVariable>("attachVariable hook", cryengine_attachVariable.get_call());
		}

		{
			//const auto init_renderer =
			//kcd2_address::scan("48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 "
			//"41 57 48 8B EC 48 83 EC ? 48 8B F1 45 8B F1");
			const auto init_renderer = kcd2_address::scan("E8 ? ? ? ? 48 83 3D ? ? ? ? ? 75 ? 48 8D 0D");
			if (!init_renderer)
			{
				LOG(ERROR) << "Failed to find init_renderer";
				return;
			}
			//big::hooking::detour_hook_helper::add<hook_Initializing_Direct3D>("hook_Initializing_Direct3D", init_renderer.get_call());
			big::hooking::detour_hook_helper::add<hook_Initializing_Direct3D>("hook_Initializing_Direct3D", init_renderer);
		}

		{
			const auto ptr = kcd2_address::scan(
			    "48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 45 84 C0 75 ? 44 38 81 ? ? ? ? 74 ? 83 7A");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find PostInputEvent";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_PostInputEvent>("hook_hook_PostInputEvent", ptr);
		}

		{
			g_hook_log_write_enabled = big::config::general().bind("Logging", "Output Vanilla Game Log", false, "Output to the KCD2ModLoader log the vanilla game log kcd.log");

			const auto ptr = kcd2_address::scan(
			    "40 53 56 57 41 54 41 55 41 56 41 57 B8 ? ? ? ? E8 ? ? ? ? 48 2B E0 0F 29 B4 24 ? ? ? ? 48 8B 05");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CLog_LogV";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CLog_LogV>("hook_CLog_LogV", ptr);
		}

		{
			g_noclip_enabled = big::config::general().bind("Noclip", "Enabled", false, "Toggle noclip mode on or off.");
			g_noclip_speed_default = big::config::general().bind("Noclip", "Default Speed", 0.1, "Sets the default movement speed for noclip mode.");
			g_noclip_speed_multiplier = big::config::general().bind("Noclip", "Speed Multiplier", 10.0, "Multiplier applied to speed when boosting in noclip mode.");
		}

		{
			g_show_entity_inspector = big::config::general().bind("Inspectors", "Entity", true, "Show the Entity Inspector.");
			g_show_entity_metadata_inspector = big::config::general().bind("Inspectors", "Entity Metadata", false, "Show the Entity Metadata Inspector.");
			g_show_entity_xml_infos_inspector = big::config::general().bind("Inspectors", "XML Infos", false, "Show the XML Infos Inspector.");
			g_show_ptf_inspector = big::config::general().bind("Inspectors", "PTF", true, "Show the PTF Inspector.");
		}

		{
			EachImportFunction(::GetModuleHandleA("WHGame.dll"),
			                   "fmodstudio.dll",
			                   [](const char *funcname, void *&func)
			                   {
				                   if (strcmp(funcname, "?getEvent@System@Studio@FMOD@@QEBA?AW4FMOD_RESULT@@PEBDPEAPEAVEventDescription@23@@Z") == 0)
				                   {
					                   fmodstudio_getevent_orig = (fmodstudio_getevent_t)func;
					                   ForceWrite<void *>(func, hook_fmodstudio_getevent);
				                   }
				                   else if (strcmp(funcname, "?loadBankFile@System@Studio@FMOD@@QEAA?AW4FMOD_RESULT@@PEBDIPEAPEAVBank@23@@Z") == 0)
				                   {
					                   fmodstudio_loadbankfile_orig = (fmodstudio_loadbankfile_t)func;
					                   big::ForceWrite<void *>(func, hook_fmodstudio_loadbankfile);
				                   }
				                   else if (strcmp(funcname, "?unload@Bank@Studio@FMOD@@QEAA?AW4FMOD_RESULT@@XZ") == 0)
				                   {
					                   fmodstudio_bank_unload_orig = (fmodstudio_bank_unload_t)func;
				                   }
			                   });
		}

		{
			const auto ptr = kcd2_address::scan(
			    "40 53 56 57 41 56 41 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 41 8A D9");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find XmlParserImp_ParseFile";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_XmlParserImp_ParseFile>("hook_XmlParserImp_ParseFile", ptr);
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8D 4D ? 83 F8");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find XML_Parse";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_XML_Parse>("hook_XML_Parse", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? B3 ? 84 C0 75");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CCryFile_Open";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CCryFile_Open>("hook_CCryFile_Open", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8B F8 8A 83");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CCryPak_ctor";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CCryPak_ctor>("hook_CCryPak_ctor", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? E9 ? ? ? ? 8B 52 ? 44 8B 79");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find wh_db_table_patched";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_wh_db_table_patched>("hook_wh_db_table_patched", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 83 F8 ? 75 ? 48 8B CB E8 ? ? ? ? 45 33 C9");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find wh_db_table_patch_find_line";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_wh_db_table_patch_find_line>("hook_wh_db_table_patch_find_line", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 8A E8 48 "
			                                    "8B FA 48 8B F1 E8 ? ? ? ? 48 8B 88");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find XmlParserReadOnly_Read_caller";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_XmlParserReadOnly_Read_caller>(
			    "hook_XmlParserReadOnly_Read_caller",
			    ptr);
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8B C3 48 8B 5C 24 ? 48 8B 6C 24 ? 0F 28 74 24");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CXConsole_RegisterVar";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CXConsole_RegisterVar>("hook_CXConsole_RegisterVar", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8B C8 EB ? 49 8B CF 48 8B 46 ? 48 89 88");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CXConsole_Ctor";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CXConsole_Ctor>("hook_CXConsole_Ctor", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8B D8 48 8B D7 48 89 1D");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CEntitySystem_CEntitySystem";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CEntitySystem_CEntitySystem>("hook_CEntitySystem_CEntitySystem", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 48 8B D8 EB ? 48 8B DF 41 8B C7");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CEntity_ctor";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CEntity_ctor>("hook_CEntity_ctor", ptr.get_call());
		}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 4C 8B 45 ? 4C 3B C7");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find a function that uses gEnv->pGame";
				return;
			}

			g_gEnv_pGame_ptr = ptr.get_call().offset(0x65).rip().as<uintptr_t *>();

			// Reproduction of CryEngine SetFlyMode inside CDevMode::OnGameplayCommand
			// Doesn't work well cause of custom movement system of KCD
			//const auto gEnv_pGame = *g_gEnv_pGame_ptr;
			//const auto IGameFramework = (*(__int64(__fastcall **)(__int64))(*(uintptr_t *)gEnv_pGame + 128LL))(gEnv_pGame);
			//const auto IActor_pPlayer = (*(__int64(__fastcall **)(__int64))(*(uintptr_t *)IGameFramework + 512LL))(IGameFramework);
			//if (IActor_pPlayer)
			//{
			// IActor->SetFlyMode
			//(*(void(__fastcall **)(__int64, uint8_t))(*(uintptr_t *)IActor_pPlayer + 608LL))(IActor_pPlayer, (uint8_t)2);
			//}
		}

		//{
		//const auto ptr = kcd2_address::scan(
		//"4C 8D 05 ? ? ? ? 48 8D 15 ? ? ? ? 8D 41 ? 48 8D 4D ? 89 83 ? ? ? ? E8 ? ? ? ? 48 89 75");
		//if (!ptr)
		//{
		//LOG(ERROR) << "Failed to find CPlayerStateMovement_Ledge_callback";
		//return;
		//}
		//big::hooking::detour_hook_helper::add<hook_CPlayerStateMovement_Ledge_callback>(
		//"hook_CPlayerStateMovement_Ledge_callback",
		//ptr.offset(3).rip());
		//}

		{
			const auto ptr = kcd2_address::scan("E8 ? ? ? ? EB ? 45 33 C0 F7 43");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find CEntity_SetWorldTM";
				return;
			}

			g_CEntity_SetWorldTM = ptr.get_call().as<decltype(g_CEntity_SetWorldTM)>();
		}

		{
			const auto ptr = kcd2_address::scan(
			    "48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC ? 48 8B F9 E8");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find C_PlayerStateMovement_ctor";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_C_PlayerStateMovement_ctor>("hook_C_PlayerStateMovement_ctor", ptr);
		}

		{
			const auto ptr =
			    kcd2_address::scan("40 55 53 56 57 41 56 48 8B EC 48 81 EC ? ? ? ? 48 8B D9 E8 ? ? ? ? 33 F6");
			if (!ptr)
			{
				LOG(ERROR) << "Failed to find C_Player_ctor";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_C_Player_ctor>("hook_C_Player_ctor", ptr);
		}

		// Early main Lua
		{
			static const TValue luaO_nilobject_ = {{NULL}, LUA_TNIL};
			static const Node dummynode_        = {
                {{NULL}, LUA_TNIL},        /* value */
                {{{NULL}, LUA_TNIL, NULL}} /* key */
            };
			luaO_nilobject_external_address = (uintptr_t)&luaO_nilobject_;
			dummynode_external_address      = (uintptr_t)&dummynode_;

			g_early_main_lua_state = luaL_newstate();

			std::scoped_lock l(lua_manager_extension::g_manager_mutex);

			lua_manager_extension::g_lua_manager_instance = std::make_unique<lua_manager>(g_early_main_lua_state,
			                                                                              g_file_manager.get_project_folder("config"),
			                                                                              g_file_manager.get_project_folder("plugins_data"),
			                                                                              g_file_manager.get_project_folder("plugins"),
			                                                                              [](sol::state_view &state, sol::table &lua_ext)
			                                                                              {
				                                                                              lua_manager_extension::init_lua_api(state, lua_ext, true);
			                                                                              });

			sol::state_view sol_state_view(g_early_main_lua_state);
			sol::table lua_ext = sol_state_view.create_named_table(rom::g_lua_api_namespace);
			lua_manager_extension::init_lua_state(sol_state_view, lua_ext, true);
			lua_manager_extension::g_lua_manager_instance->init<lua_module_ext>(false);
		}

		{
			const auto cryscriptsystem_init =
			    kcd2_address::scan("E8 ? ? ? ? 84 C0 74 ? 48 8B 46 ? 48 8B 88 ? ? ? ? 48 8B 01");
			if (!cryscriptsystem_init)
			{
				LOG(ERROR) << "Failed to find CryScriptSystem::Init";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CryScriptSystem_Init>("hook_CryScriptSystem_Init",
			                                                                 cryscriptsystem_init.get_call());

			const auto lua_system_update_tick =
			    kcd2_address::scan("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 3D ? ? ? ? 48 8B F1 33 D2");
			if (!lua_system_update_tick)
			{
				LOG(ERROR) << "Failed to find CryScriptSystem::Update";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CScriptSystem_Update>("hook_lua_system_update_tick", lua_system_update_tick);

			const auto lua_execute_buffer = kcd2_address::scan(
			    "48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B F9 48 89 50");
			if (!lua_execute_buffer)
			{
				LOG(ERROR) << "Failed to find CryScriptSystem::ExecuteBuffer";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_CScriptSystem_ExecuteBuffer>("hook_lua_execute_buffer", lua_execute_buffer);
		}

		//parse_xml_objects_file("", 0);

		char module_file_path[MAX_PATH];
		const auto path_size                    = GetModuleFileNameA(nullptr, module_file_path, MAX_PATH);
		const std::filesystem::path root_folder = std::string(module_file_path, path_size);
		const auto game_root_folder             = root_folder.parent_path().parent_path().parent_path();
		const auto game_mods_folder             = game_root_folder / "Mods";
		std::filesystem::create_directories(game_mods_folder);

		std::vector<std::string> mod_order;
		std::ifstream mod_order_file(game_mods_folder / "mod_order.txt");
		bool use_mod_order = mod_order_file.is_open();
		if (use_mod_order)
		{
			std::string line;
			while (std::getline(mod_order_file, line))
			{
				mod_order.push_back(line);
			}
		}

		// First, find all valid mod folders and their manifest
		for (const auto &entry : std::filesystem::recursive_directory_iterator(game_mods_folder, std::filesystem::directory_options::skip_permission_denied | std::filesystem::directory_options::follow_directory_symlink))
		{
			if (entry.path().filename() == "mod.manifest")
			{
				pugi::xml_document manifest_doc;
				std::string file_path = (char *)entry.path().u8string().c_str();
				if (manifest_doc.load_file(file_path.c_str()))
				{
					pugi::xml_node name_node;
					pugi::xml_node modid_node;
					pugi::xml_node description_node;
					pugi::xml_node author_node;
					pugi::xml_node version_node;
					pugi::xml_node created_on_node;
					try
					{
						name_node        = manifest_doc.select_node("//name").node();
						modid_node       = manifest_doc.select_node("//modid").node();
						description_node = manifest_doc.select_node("//description").node();
						author_node      = manifest_doc.select_node("//author").node();
						version_node     = manifest_doc.select_node("//version").node();
						created_on_node  = manifest_doc.select_node("//created_on").node();
					}
					catch (const std::exception &e)
					{
						LOG(WARNING) << e.what();
					}
					if (name_node || modid_node)
					{
						// Find the mod root folder (direct child of "Mods")
						std::filesystem::path mod_root = entry.path().parent_path();
						while (mod_root.parent_path() != game_mods_folder)
						{
							mod_root = mod_root.parent_path();
						}

						std::string mod_folder_name = big::string::to_lower((char *)mod_root.filename().u8string().c_str());
						std::string mod_id = modid_node ? big::string::to_lower(modid_node.text().as_string()) :
						                                  big::string::to_lower(name_node.text().as_string());

						LOG(INFO) << "Mapping mod folder '" << mod_folder_name << "' to modid '" << mod_id << "'";

						g_vanilla_mods.push_back({
						    .m_name        = name_node ? big::string::to_lower(name_node.text().as_string()) : mod_id,
						    .m_mod_id      = mod_id,
						    .m_description = description_node ? description_node.text().as_string() : "",
						    .m_author      = author_node ? author_node.text().as_string() : "",
						    .m_version     = version_node ? version_node.text().as_string() : "",
						    .m_folder_name = mod_folder_name,
						    .m_created_on  = created_on_node ? created_on_node.text().as_string() : "",
						});
					}
					else
					{
						LOG(ERROR) << "No modid inside " << file_path;
					}
				}
				else
				{
					LOG(ERROR) << "Invalid XML file " << (char *)entry.path().u8string().c_str();
				}
			}
		}

		// Now collect all .pak files, ensuring they are assigned to the correct mod folder
		for (const auto &entry : std::filesystem::recursive_directory_iterator(game_mods_folder, std::filesystem::directory_options::skip_permission_denied | std::filesystem::directory_options::follow_directory_symlink))
		{
			if (entry.path().extension() == ".pak")
			{
				// Find the mod root folder
				std::filesystem::path mod_root = entry.path().parent_path();
				while (mod_root.parent_path() != game_mods_folder)
				{
					mod_root = mod_root.parent_path();
				}

				std::string mod_folder_name = big::string::to_lower((char *)mod_root.filename().u8string().c_str());
				//LOG(INFO) << "mod_folder_name " << mod_folder_name;

				for (auto &vanilla_mod : g_vanilla_mods)
				{
					if (vanilla_mod.m_folder_name == mod_folder_name)
					{
						vanilla_mod.m_loaded_paks.push_back((char *)entry.path().u8string().c_str());
					}
				}
			}
		}

		if (!use_mod_order)
		{
			for (const auto &vanilla_mod : g_vanilla_mods)
			{
				for (const auto &pak_path : vanilla_mod.m_loaded_paks)
				{
					read_xmls_from_zip_file_path(pak_path.c_str());
				}
			}
			return;
		}

		// Process mods in the correct order
		for (const std::string &mod_name : mod_order)
		{
			for (const auto &mod_info : g_vanilla_mods)
			{
				if (mod_name == mod_info.m_folder_name || mod_name == mod_info.m_mod_id)
				{
					for (const auto &pak_path : mod_info.m_loaded_paks)
					{
						//LOG(INFO) << "Reading from " << (char *)pak_path.u8string().c_str();
						read_xmls_from_zip_file_path(pak_path);
					}
				}
			}
		}
	}
} // namespace big
