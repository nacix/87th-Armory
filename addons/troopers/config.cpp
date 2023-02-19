#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		authors[] = {"Stim_1087", "Anorexican"};
		author = "87th Legion";
		url = "http://xkcd.com";
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
        };
        units[]=
		{
			"87th_BARC_Major",
			"87th_BARC_Captain",
			"87th_BARC_Lieutenant",
			"87th_BARC_NCO",
			"87th_BARC_CLS",
			"87th_BARC_JTAC",
			"87th_BARC_Spotter",
			"87th_BARC_Sniper",
			"87th_BARC_DC15S",
			"87th_ARF_Major",
			"87th_ARF_Captain",
			"87th_ARF_Lieutenant",
			"87th_ARF_NCO",
			"87th_ARF_CLS",
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
			"87th_Clone_DC15A"
		};
		weapons[]=
		{
			"87th_Trooper_Helmet",
			"87th_Raven_Helmet",
			"87th_Tasty_Helmet",
            "87th_ARF_Helmet",
			"87th_BARC_Helmet",
			"87th_P2_Pilot_helmet",
			"87th_Commander_Helmet",
			"87th_NVG",
			"87th_Trooper_Uniform",
			"87th_3AS_DC15A_F",
			"87th_3AS_DC15S_F",
			"87th_3AS_DC15A_GL",
			"87th_3AS_DC15C_GL",
			"87th_3AS_DC15C_F",
			"87th_3AS_DC15L_F",
			"87th_JLTS_DC15X"
		};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"