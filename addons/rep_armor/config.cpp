#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = CSTRING(AuxTeam);
		authors[] = {"Stim_1087", "Anorexican"};
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"3AS_Main",
			"3AS_Characters",
			"3AS_Characters_Commando",
			"JLTS_core",
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_characters_CloneLegions",
			"SEA_JLTS_ExtendedArsenal"
        };
        units[]=
		{
           "87th_Clone_Base",
		   "87th_Medic_Base",
		   "87th_Commando_Base"
		};
		weapons[]=
		{
			"87th_Trooper_Helmet",
			"87th_Captain_Helmet",
			"87th_ARC_Helmet",
			"87th_Airborne_Helmet",
            "87th_ARF_Helmet",
			"87th_ATRT_Helmet",
			"87th_BARC_Helmet",
			"87th_Katarn_Helmet",
			"87th_P2_Pilot_helmet",
			"87th_Commander_Helmet",
			"87th_NVG",
			"87th_Trooper_Uniform",
			"87th_Medic_Uniform",
			"87th_Katarn_Uniform",
			"87th_Katarn_Backpack"
		};
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"