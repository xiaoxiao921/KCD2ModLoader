#include "kcd2.hpp"

namespace big
{
	extern std::unordered_map<std::string, int*> g_cryengine_attached_variables;
}

namespace lua::kcd2
{
	void bind(sol::table& state)
	{
		auto ns = state.create_named("kcd2");

		// Lua API: Function
		// Table: kcd2
		// Name: set_cvar
		// Param: cvar_name: string: The name of the cvar.
		// Param: new_value: number: The new value of the cvar.
		// Returns: bool: If the cvar was successfuly set or not.
		ns.set_function("set_cvar",
		                [](const std::string& cvar_name, double new_value) -> bool
		                {
			                const auto it = big::g_cryengine_attached_variables.find(cvar_name);
			                if (it == big::g_cryengine_attached_variables.end())
			                {
				                LOG(ERROR) << "CVar " << cvar_name << " not found.";
				                return false;
			                }

			                *it->second = (int)new_value;

			                return true;
		                });

		// Lua API: Function
		// Table: kcd2
		// Name: get_cvar
		// Param: cvar_name: string: The name of the cvar.
		// Returns: number: The cvar value.
		ns.set_function("get_cvar",
		                [](const std::string& cvar_name) -> double
		                {
			                const auto it = big::g_cryengine_attached_variables.find(cvar_name);
			                if (it == big::g_cryengine_attached_variables.end())
			                {
				                LOG(ERROR) << "CVar " << cvar_name << " not found.";
				                return false;
			                }

			                return (double)*it->second;
		                });
	}
} // namespace lua::kcd2
