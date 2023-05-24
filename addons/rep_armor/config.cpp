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
		weapons[] = {};
    };
};

#include "XtdGearModels.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearInfos.hpp"
#include "CfgVehicles.hpp"