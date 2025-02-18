#pragma once
#include "lua_module_ext.hpp"

#include <lua/lua_manager.hpp>

namespace big::lua_manager_extension
{
	void init_lua_manager(sol::state_view& state, sol::table& lua_ext, bool is_early_main);
	void init_lua_state(sol::state_view& state, sol::table& lua_ext, bool is_early_main);
	void init_lua_api(sol::state_view& state, sol::table& lua_ext, bool is_early_main);

	inline std::recursive_mutex g_manager_mutex;
	inline std::unique_ptr<lua_manager> g_lua_manager_instance;
} // namespace big::lua_manager_extension
