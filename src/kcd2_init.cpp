#include "kcd2_init.hpp"

#include "hooks/hooking.hpp"
#include "kcd2_address.hpp"
#include "memory/gm_address.hpp"

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
	extern void render_imgui_frame();

	//static bool __fastcall hook_lua_init_system(__int64 a1, __int64 a2, char a3)
	// Currently this is not the lua init function, it's the CryScriptSystem::Update function
	static __int64 __fastcall hook_lua_init_system(__int64 a1)
	{
		std::scoped_lock l(lua_manager_extension::g_manager_mutex);

		//const auto res = big::g_hooking->get_original<hook_lua_init_system>()(a1, a2, a3);
		const auto res = big::g_hooking->get_original<hook_lua_init_system>()(a1);

		static bool once = true;
		if (once)
		{
			once = false;

			lua_State *L = *reinterpret_cast<lua_State **>(a1 + 16);

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

			lua_manager_extension::g_lua_manager_instance = std::make_unique<lua_manager>(L,
			                                                                              g_file_manager.get_project_folder("config"),
			                                                                              g_file_manager.get_project_folder("plugins_data"),
			                                                                              g_file_manager.get_project_folder("plugins"),
			                                                                              [](sol::state_view &state, sol::table &lua_ext)
			                                                                              {
				                                                                              lua_manager_extension::init_lua_manager(state, lua_ext);
			                                                                              });

			lua_manager_extension::g_lua_manager_instance->init<lua_module_ext>();

			lua_manager_extension::g_is_lua_state_valid = true;
		}

		if (lua_manager_extension::g_lua_manager_instance)
		{
			render_imgui_frame();

			lua_manager_extension::g_lua_manager_instance->process_file_watcher_queue();
		}

		return res;
	}

	static __int64 __fastcall hook_Initializing_Direct3D(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, int a7, int a8, __int64 a9)
	{
		LOG(INFO) << "Initializing_Direct3D called";

		const auto res = big::g_hooking->get_original<hook_Initializing_Direct3D>()(a1, a2, a3, a4, a5, a6, a7, a8, a9);

		std::thread(
		    []()
		    {
			    g_running = true;
			    //Sleep(15'000);
			    big::g_renderer->hook();
		    })
		    .detach();

		LOG(INFO) << "Initializing_Direct3D finished";

		return res;
	}

	static void *__fastcall hook_lua_allocator(void *ud, void *ptr, size_t osize, size_t nsize)
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

	static int hook_lua_pcall(lua_State *L, int nargs, int nresults, int errfunc)
	{
		static auto game_func = kcd2_address::scan("E8 ? ? ? ? 48 8B 4E ? 8B D7 8B D8").get_call().as_func<decltype(lua_pcall)>();
		return game_func(L, nargs, nresults, errfunc);
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

	void *__fastcall hook_attachVariable(void *this_, const char *szVarName, int *pContainer, const char *szComment, int dwFlags)
	{
		if (strcmp(szVarName, "sys_PakPriority") == 0)
		{
			LOG(INFO) << "sys_PakPriority intercepted. Setting to 0.";
			*pContainer = 0;
		}

		const auto res = big::g_hooking->get_original<hook_attachVariable>()(this_, szVarName, pContainer, szComment, dwFlags);

		return res;
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
			// must ensure dummynode / luaO_nilobject from the game WHGame.dll is used and not ours.
			//const intptr_t game_base_address = (intptr_t)GetModuleHandleA("WHGame.dll");
			//dummynode_external_address       = game_base_address + 0x3'98'B7'A0;
			//luaO_nilobject_external_address  = game_base_address + 0x3'98'B7'90;

			//const auto lua_init_system = kcd2_address::scan("E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 89 5F").get_call();
			const auto lua_init_system =
			    kcd2_address::scan("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 3D ? ? ? ? 48 8B F1 33 D2");
			if (!lua_init_system)
			{
				LOG(ERROR) << "Failed to find CryScriptSystem::Update";
				return;
			}
			big::hooking::detour_hook_helper::add<hook_lua_init_system>("hook_lua_init_system", lua_init_system);

			// no idea if all these hook are necessary, the one that did the trick was lua_load i'm pretty sure
			big::hooking::detour_hook_helper::add<hook_luaV_execute>("", &luaV_execute);
			big::hooking::detour_hook_helper::add<hook_lua_call>("", &lua_call);
			big::hooking::detour_hook_helper::add<hook_lua_checkstack>("", &lua_checkstack);
			big::hooking::detour_hook_helper::add<hook_lua_createtable>("", &lua_createtable);
			big::hooking::detour_hook_helper::add<hook_lua_error>("", &lua_error);
			big::hooking::detour_hook_helper::add<hook_lua_gc>("", &lua_gc);
			big::hooking::detour_hook_helper::add<hook_lua_getfenv>("", &lua_getfenv);
			big::hooking::detour_hook_helper::add<hook_lua_getfield>("", &lua_getfield);
			big::hooking::detour_hook_helper::add<hook_lua_getmetatable>("", &lua_getmetatable);
			big::hooking::detour_hook_helper::add<hook_lua_gettable>("", &lua_gettable);
			big::hooking::detour_hook_helper::add<hook_lua_insert>("", &lua_insert);
			big::hooking::detour_hook_helper::add<hook_lua_pcall>("", &lua_pcall);
			big::hooking::detour_hook_helper::add<hook_lua_allocator>(
			    "hook_lua_allocator",
			    kcd2_address::scan("E8 ? ? ? ? 33 FF 48 8B D8 48 85 C0 0F 84 ? ? ? ? 48 8D 88").get_call());
			big::hooking::detour_hook_helper::add<hook_lua_load>("lua_load hook", &lua_load);
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
	}
} // namespace big
