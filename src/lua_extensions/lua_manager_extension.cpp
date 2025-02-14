#include "lua_manager_extension.hpp"

#include "bindings/gui_ext.hpp"
#include "string/string.hpp"

#include <lua/lua_manager.hpp>

namespace big::lua_manager_extension
{
	static void delete_everything()
	{
		std::scoped_lock l(g_manager_mutex);

		g_is_lua_state_valid = false;

		g_lua_manager_instance.reset();

		LOG(INFO) << "state is no longer valid!";
	}

	static int the_state_is_going_down(lua_State* L)
	{
		delete_everything();

		return 0;
	}

	void init_lua_manager(sol::state_view& state, sol::table& lua_ext)
	{
		init_lua_state(state, lua_ext);
		init_lua_api(state, lua_ext);
	}

	static int open_debug_lib(lua_State* L)
	{
		luaL_requiref(L, "_rom_debug", luaopen_debug, 1 /*Leaves a copy of the module on the stack.*/);

		// Number of elements on the stack.
		return 1;
	}

	void init_lua_state(sol::state_view& state, sol::table& lua_ext)
	{
		// Register our cleanup functions when the state get destroyed.
		{
			/*sol::table my_takedown_metatable                           = state.create_table_with();
			my_takedown_metatable[sol::meta_function::garbage_collect] = the_state_is_going_down;
			sol::table my_takedown_table                               = lua_ext.create_named(
                std::format("..{}\xF0\x9F\x8F\xB4 \xF0\x9F\x8F\xB4 \xF0\x9F\x8F\xB4 \xF0\x9F\x8F\xB4 \xF0\x9F\x8F\xB4", rom::g_project_name),
                sol::metatable_key,
                my_takedown_metatable);*/
		}

		// clang-format off
		//state.open_libraries(
		//	sol::lib::base,
		//	sol::lib::package,
		//	sol::lib::coroutine,
		//	sol::lib::string,
		//	sol::lib::os,
		//	sol::lib::math,
		//	sol::lib::table,
		//	sol::lib::debug,
		//	sol::lib::bit32,
		//	sol::lib::io,
		//	sol::lib::utf8);
		// clang-format on

		// clang-format off
		//state.open_libraries();
		//state.open_libraries(
			//sol::lib::os,
			//sol::lib::io,
			//sol::lib::utf8);
		// clang-format on

		//lua_pushcfunction(state.lua_state(), open_debug_lib);
		//lua_setglobal(state.lua_state(), "_rom_open_debug");
	}

	void init_lua_api(sol::state_view& state, sol::table& lua_ext)
	{
		// Let's keep that list sorted the same as the solution file explorer
		//lua::gui_ext::bind(lua_ext);
	}
} // namespace big::lua_manager_extension
