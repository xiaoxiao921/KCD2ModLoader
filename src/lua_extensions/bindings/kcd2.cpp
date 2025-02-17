#include "kcd2.hpp"

namespace big
{
	extern toml_v2::config_file::config_entry<bool>* g_hook_log_write_enabled;
}

namespace lua::kcd2
{
	void bind(sol::table& state)
	{
		{
			auto ns = state["log"].get_or_create<sol::table>();

			// Lua API: Function
			// Table: log
			// Name: set_output_vanilla_game_log
			// Param: new_value
			// Pass true to include vanilla game log messages in the console and file log output.
			ns["set_output_vanilla_game_log"] = [](bool new_value)
			{
				big::g_hook_log_write_enabled->set_value(new_value);
			};
		}

		auto ns = state.create_named("kcd2");
	}
} // namespace lua::kcd2
