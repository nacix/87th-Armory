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
           CLASS(Clone_Base),
		   CLASS(Clone_P1_Base),
		   CLASS(Medic_Base),
		   CLASS(Commando_Base),
		   CLASS(ARF_Base),
		   CLASS(ARF_Base_Desert),
		   CLASS(ARF_Base_Sarid),
		   CLASS(ARF_Base_Woodland),
		   CLASS(ARF_Base_Winter),
		   CLASS(ARF_Base_Urban)
		};
		weapons[] = {};
    };
};

#include "XtdGearModels.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearInfos.hpp"
#include "CfgVehicles.hpp"