#include "script_component.hpp"

class CfgPatches
{
	class ADDON
    {
		name = COMPONENT_NAME;
		addonRootClass = "ax87_rep_weapons";
		requiredVersion = REQUIRED_VERSION;
		author = CSTRING(AuxTeam);
		authors[] = {"Anorexican"};
		url = ECSTRING(main,URL);
		requiredaddons[]=
		{
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"ax87_rep_weapons",
			"jsrs_soundmod_complete_edition",
			"jsrs_soundmod_complete_edition_soundfiles"
		};
		units[] = {};
		weapons[] = {"87th_RPS6X"};
	};
};

#include "CfgWeapons.hpp"