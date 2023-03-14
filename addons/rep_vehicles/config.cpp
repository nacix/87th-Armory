#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = CSTRING(AuxTeam);
		authors[] = {"Anorexican", "Stim_1087"};
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"JLTS_core",
			"JLTS_characters_CloneArmor",
			"3AS_Main",
			"3AS_LAAT",
			"3AS_ATRT"
        };
        units[]=
		{
			"87th_LAAT",
			"87th_ATRT"
		};
		weapons[]=
		{
			"87th_ATRT_Uniform"
		};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"