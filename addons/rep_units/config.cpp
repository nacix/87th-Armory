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
			"JLTS_characters_CloneLegions"
        };
        units[]=
		{
			"87th_Clone_Pilot",
			"87th_RC_Sniper",
			"87th_RC_Demo",
			"87th_RC_Tech",
			"87th_RC_NCO",
			"87th_RC_DC17M",
			"87th_ARC_Lieutenant",
			"87th_ARC_Sniper",
			"87th_ARC_JTAC",
			"87th_ARC_Medic",
			"87th_ARC_EOD",
			"87th_ARC_AT",
			"87th_ARC_GL",
			"87th_ARC_Westar",
			"87th_ARC_DC15S",
			"87th_AB_NCO_D",
			"87th_AB_NCO_C",
			"87th_AB_NCO_B",
			"87th_AB_NCO_A",
			"87th_AB_Officer",
			"87th_AB_NCO",
			"87th_AB_CLS",
			"87th_AB_AR",
			"87th_AB_EOD",
			"87th_AB_AT",
			"87th_AB_DC15LE_UGL",
			"87th_AB_DC15LE",
			"87th_AB_DC15C",
			"87th_BARC_Major",
			"87th_BARC_Captain",
			"87th_BARC_Lieutenant",
			"87th_BARC_NCO",
			"87th_BARC_CLS",
			"87th_BARC_JTAC",
			"87th_BARC_Spotter",
			"87th_BARC_Sniper",
			"87th_BARC_DC15S",
			"87th_ATRT_Driver",
			"87th_ARF_Major",
			"87th_ARF_Captain",
			"87th_ARF_Lieutenant",
			"87th_ARF_NCO",
			"87th_ARF_CLS",
			"87th_ARF_EOD",
			"87th_ARF_AT",
			"87th_ARF_JTAC",
			"87th_ARF_Spotter",
			"87th_ARF_Sniper",
			"87th_ARF_DC15S",
			"87th_Clone_Sharpshooter",
			"87th_Clone_AR",
			"87th_Clone_SergeantMajor",
			"87th_Clone_Sergeant",
			"87th_Clone_RTO",
			"87th_Clone_EOD",
			"87th_Clone_Medic",
			"87th_Clone_Marksman",
			"87th_Clone_Major",
			"87th_Clone_Lieutenant",
			"87th_Clone_Jumper",
			"87th_Clone_Corporal",
			"87th_Clone_Commander",
			"87th_Clone_Captain",
			"87th_Clone_AT",
			"87th_Clone_DP23",
			"87th_Clone_DC15AUGL",
			"87th_Clone_DC15S",
			"87th_Clone_DC15A",
			"87th_Clone_P1_Sharpshooter",
			"87th_Clone_P1_AR",
			"87th_Clone_P1_Sergeant",
			"87th_Clone_P1_RTO",
			"87th_Clone_P1_EOD",
			"87th_Clone_P1_Medic",
			"87th_Clone_P1_Lieutenant",
			"87th_Clone_P1_Corporal",
			"87th_Clone_P1_Commander",
			"87th_Clone_P1_Captain",
			"87th_Clone_P1_AT",
			"87th_Clone_P1_DC15AUGL",
			"87th_Clone_P1_DC15S",
			"87th_Clone_P1_DC15A"
		};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"