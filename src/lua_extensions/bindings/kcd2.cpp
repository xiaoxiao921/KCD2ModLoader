#include "kcd2.hpp"

namespace big
{
	extern toml_v2::config_file::config_entry<bool>* g_hook_log_write_enabled;
	extern std::unordered_set<std::string> g_fmod_events;
} // namespace big

namespace lua::kcd2
{
	static std::unordered_map<std::string, void*> g_file_path_to_bank;

	// Lua API: Function
	// Table: audio
	// Name: load_bank
	// Param: file_path: string: Path to the fmod .bank to load
	// Returns: bool: Returns true if bank loaded successfully.
	// The game currently use FMod Studio `2.02.21`. You can query the version by clicking checking Properties -> Details of the game `fmodstudio.dll`.
	// If your sound events correcty play but nothing can be heard, make sure that the guid of the Mixer masterBus, MixerInput output and MixerMaster id matches one from the game
	// You'll want to string replace the guids in the (at minimum 2) .xml files Master, Mixer, and any Metadata/Event events files that were made before the guid setup change
	static bool load_bank(const std::string& file_path, sol::this_environment env)
	{
		void* bank = nullptr;
		const auto res = big::fmodstudio_loadbankfile_orig(big::g_fmodstudio_instance, file_path.c_str(), 0x00'00'00'00 | 0x00'00'00'04, &bank);

		if (res)
		{
			LOG(ERROR) << "Failed loading fmod bank, fmod error code: " << res;

			return false;
		}

		g_file_path_to_bank[file_path] = bank;

		return true;
}

	// Lua API: Function
	// Table: audio
	// Name: unload_bank
	// Param: file_path: string: Path to the fmod .bank to load
	// Returns: bool: Returns true if bank unloaded successfully.
	static bool unload_bank(const std::string& file_path, sol::this_environment env)
	{
		const auto it = g_file_path_to_bank.find(file_path);
		if (it == g_file_path_to_bank.end())
		{
			LOG(ERROR) << "Failed unloading fmod bank, bank doesn't exist";

			return false;
		}

		const auto res = big::fmodstudio_bank_unload_orig(it->second);

		if (res)
{
			LOG(ERROR) << "Failed unloading fmod bank, fmod error code: " << res;

			return false;
		}

		return true;
	}

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

		{
			auto ns = state.create_named("audio");

			ns.set_function("load_bank", load_bank);
			ns.set_function("unload_bank", unload_bank);

			// Lua API: Function
			// Table: audio
			// Name: on_fmod_getevent
			// Param: function: function: signature (string event_name) return new_event_name or nil
			// The passed function will be called before the game loads a fmod event. is_early_main setup/check required.
			ns["on_fmod_getevent"] = [](sol::protected_function f, sol::this_environment env)
			{
				auto mod = (big::lua_module_ext*)big::lua_module::this_from(env);
				if (mod)
				{
					mod->m_data_ext.m_on_fmod_getevent.push_back(f);
				}
			};

			// Lua API: Field
			// Table: audio
			// Field: events: table<string>
			// All fmod string events used by the game so far.
			ns["events"] = sol::as_table(std::ref(big::g_fmod_events));
		}
	}
} // namespace lua::kcd2
