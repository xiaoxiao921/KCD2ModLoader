#include "kcd2_init.hpp"

#include "hooks/hooking.hpp"
#include "kcd2_address.hpp"
#include "memory/gm_address.hpp"

#include <config/config.hpp>
#include <gui/gui.hpp>
#include <gui/renderer.hpp>
#include <lua_extensions/lua_manager_extension.hpp>

extern "C"
{
#include <ldo.h>
#include <ltable.h>
#include <lua.h>
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
		//return big::g_hooking->get_original<hook_CScriptSystem_Update>()(a1);

		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		const auto res = big::g_hooking->get_original<hook_CScriptSystem_Update>()(a1);

		render_imgui_frame();

		lua_manager_extension::g_lua_manager_instance->process_file_watcher_queue();

		return res;
	}

	static __int64 __fastcall hook_Initializing_Direct3D(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, int a7, int a8, __int64 a9)
	{
		LOG(INFO) << "Initializing_Direct3D called";

		const auto res = big::g_hooking->get_original<hook_Initializing_Direct3D>()(a1, a2, a3, a4, a5, a6, a7, a8, a9);

		//std::thread(
		//[]()
		//{
		g_running = true;
		big::g_renderer->hook();
		//})
		//.detach();

		LOG(INFO) << "Initializing_Direct3D finished";

		return res;
	}

	static void hook_lua_call(lua_State *L, int nargs, int nresults)
	{
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

	static int hook_game_lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
	{
		if (env_to_add.has_value() && env_to_add.value().valid())
		{
			sol::set_environment(env_to_add.value(), sol::stack_reference(L, -1));
		}

		return big::g_hooking->get_original<hook_game_lua_pcall>()(L, nargs, nresults, errfunc);
	}

	static int hook_lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
	{
		return game_lua_pcall.as_func<decltype(lua_pcall)>()(L, nargs, nresults, errfunc);
	}

	static void hook_luaV_execute(lua_State *L, int nexeccalls)
	{
		static auto game_func =
		    kcd2_address::scan("48 8B C4 48 89 58 ? 89 50 ? 55 56 57 41 54 41 55 41 56 41 57 48 81 EC").as_func<decltype(luaV_execute)>();
		return game_func(L, nexeccalls);
	}

	static int hook_lua_load(lua_State *L, lua_Reader reader, void *dt, const char *chunkname)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 48 83 CE ? 85 C0").get_call().as_func<decltype(lua_load)>();
		return game_func(L, reader, dt, chunkname);
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
		//return fmodstudio_getevent_orig(fmodstudio_event_system_this, event_name, event_description_result);

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

	static __int64 __fastcall hook_XML_Parse(__int64 parser, const char *pFileContents, int fileSize)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		if (g_lua_manager)
		{
			std::scoped_lock guard(g_lua_manager->m_module_lock);

			bool should_copy_xml = false;
			for (const auto &mod_ : g_lua_manager->m_modules)
			{
				auto mod = (lua_module_ext *)mod_.get();
				if (mod->m_data_ext.m_on_xml_parse.size())
				{
					should_copy_xml = true;
					break;
				}
			}

			std::string new_file_content;
			if (should_copy_xml)
			{
				new_file_content.assign(pFileContents, fileSize);
				for (const auto &mod_ : g_lua_manager->m_modules)
				{
					auto mod = (lua_module_ext *)mod_.get();
					for (const auto &cb : mod->m_data_ext.m_on_xml_parse)
					{
						auto res = cb(g_xml_current_parsed_filename ? g_xml_current_parsed_filename : "", new_file_content);
						if (res.get_type() == sol::type::string)
						{
							new_file_content = res.get<std::string>();
						}
					}
				}

				return big::g_hooking->get_original<hook_XML_Parse>()(parser, new_file_content.c_str(), new_file_content.size());
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

	static size_t hook_CCryFile_Open(__int64 this_, const char *filename, const char *mode, unsigned int nOpenFlags)
	{
		if (strcmp(mode, "rb") != 0)
		{
			return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, filename, mode, nOpenFlags);
		}

		if (!g_lua_manager)
		{
			return big::g_hooking->get_original<hook_CCryFile_Open>()(this_, filename, mode, nOpenFlags);
		}

		//if (strstr(filename, "gameaudio") && strstr(filename, "voices"))
		//{
		//LOG(INFO) << filename;
		//}

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
			const auto init_renderer =
			    kcd2_address::scan("48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 41 54 41 55 41 56 "
			                       "41 57 48 8B EC 48 83 EC ? 48 8B F1 45 8B F1");
			if (!init_renderer)
			{
				LOG(ERROR) << "Failed to find init_renderer";
				return;
			}
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
	}
} // namespace big
