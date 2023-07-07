#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = ECSTRING(Common,AuxTeam);
		authors[] = {"Anorexican", "Stim_1087"};
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"3AS_Main",
			"3AS_ATRT",
			"3AS_LAAT",
			"3AS_ITT",
			"JLTS_core",
			"JLTS_characters_CloneArmor",
			"ls_vehicles_ground"
        };
        units[]=
		{
			CLASS(LAAT),
			CLASS(LAAT_Lights),
			CLASS(LAAT_Mk1),
			CLASS(LAAT_Mk1_Lights),
			CLASS(P1_LAAT),
			CLASS(P1_LAAT_Lights),
			CLASS(P1_LAAT_Mk1),
			CLASS(P1_LAAT_Mk1_Lights),
			CLASS(ATRT),
			//CLASS(BARC),
			CLASS(RTT),
			CLASS(RTT_Rep),
			CLASS(P1_RTT),
			CLASS(P1_RTT_Rep)
		};
		weapons[]=
		{
			CLASS(ATRT_Uniform)
		};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"