#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = ECSTRING(Common,AuxTeam);
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
			"ls_armor_bluefor"
        };
        units[]=
		{
           "87th_Clone_Base",
		   "87th_Clone_P1_Base",
		   "87th_Medic_Base",
		   "87th_Commando_Base",
		   "87th_ARF_Base",
		   "87th_ARF_Base_Desert",
		   "87th_ARF_Base_Sarid",
		   "87th_ARF_Base_Woodland",
		   "87th_ARF_Base_Winter",
		   "87th_ARF_Base_Urban"
		};
		weapons[]=
		{
			"87th_Trooper_Helmet",
			"87th_P1_Trooper_Helmet",
			"87th_Captain_Helmet",
			"87th_ARC_Helmet",
			"87th_Airborne_Helmet",
            "87th_ARF_Helmet",
			"87th_ARF_Helmet_Desert",
			"87th_ARF_Helmet_Sarid",
			"87th_ARF_Helmet_Woodland",
			"87th_ARF_Helmet_Winter",
			"87th_ARF_Helmet_Urban",
			"87th_ARF_Helmet_P2",
			"87th_ARF_Helmet_Desert_P2",
			"87th_ARF_Helmet_Sarid_P2",
			"87th_ARF_Helmet_Woodland_P2",
			"87th_ARF_Helmet_Winter_P2",
			"87th_ARF_Helmet_Urban_P2",
			"87th_ARF_Helmet_Tasty",
			"87th_ARF_Helmet_Tasty_Desert",
			"87th_ARF_Helmet_Tasty_Sarid",
			"87th_ARF_Helmet_Tasty_Woodland",
			"87th_ARF_Helmet_Tasty_Winter",
			"87th_ARF_Helmet_Tasty_Urban",
			"87th_ARF_Helmet_Tasty_P2",
			"87th_ARF_Helmet_Tasty_Desert_P2",
			"87th_ARF_Helmet_Tasty_Sarid_P2",
			"87th_ARF_Helmet_Tasty_Woodland_P2",
			"87th_ARF_Helmet_Tasty_Winter_P2",
			"87th_ARF_Helmet_Tasty_Urban_P2",
			"87th_ATRT_Helmet",
			"87th_BARC_Helmet",
			"87th_Katarn_Helmet",
			"87th_P2_Pilot_helmet",
			"87th_P1_Pilot_Helmet",
			"87th_Commander_Helmet",
			"87th_Engineer_Helmet",
			"87th_RTO_Helmet",
			"87th_NVG",
			"87th_Trooper_Uniform",
			"87th_P1_Trooper_Uniform",
			"87th_Medic_Uniform",
			"87th_Katarn_Uniform",
			"87th_Katarn_Backpack",
			"87th_ARF_Uniform",
			"87th_ARF_Uniform_Desert",
			"87th_ARF_Uniform_Sarid",
			"87th_ARF_Uniform_Woodland",
			"87th_ARF_Uniform_Winter",
			"87th_ARF_Uniform_Urban"
		};
    };
};

#include "XtdGearModels.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearInfos.hpp"
#include "CfgVehicles.hpp"