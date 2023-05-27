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
			"JLTS_core",
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneLegions"
        };
        units[]=
		{
			CLASS(Clone_P1_Pilot),
			CLASS(Clone_Pilot),
			CLASS(RC_Sniper),
			CLASS(RC_Demo),
			CLASS(RC_Tech),
			CLASS(RC_NCO),
			CLASS(RC_DC17M),
			CLASS(ARC_Lieutenant),
			CLASS(ARC_Sniper),
			CLASS(ARC_JTAC),
			CLASS(ARC_Medic),
			CLASS(ARC_EOD),
			CLASS(ARC_AT),
			CLASS(ARC_GL),
			CLASS(ARC_Westar),
			CLASS(ARC_DC15S),
			CLASS(AB_NCO_D),
			CLASS(AB_NCO_C),
			CLASS(AB_NCO_B),
			CLASS(AB_NCO_A),
			CLASS(AB_Officer),
			CLASS(AB_NCO),
			CLASS(AB_CLS),
			CLASS(AB_AR),
			CLASS(AB_EOD),
			CLASS(AB_AT),
			CLASS(AB_DC15LE_UGL),
			CLASS(AB_DC15LE),
			CLASS(AB_DC15C),
			CLASS(BARC_Major),
			CLASS(BARC_Captain),
			CLASS(BARC_Lieutenant),
			CLASS(BARC_NCO),
			CLASS(BARC_CLS),
			CLASS(BARC_JTAC),
			CLASS(BARC_Spotter),
			CLASS(BARC_Sniper),
			CLASS(BARC_DC15S),
			CLASS(ARF_Major),
			CLASS(ARF_Captain),
			CLASS(ARF_Lieutenant),
			CLASS(ARF_NCO),
			CLASS(ARF_CLS),
			CLASS(ARF_EOD),
			CLASS(ARF_AT),
			CLASS(ARF_JTAC),
			CLASS(ARF_Spotter),
			CLASS(ARF_Sniper),
			CLASS(ARF_DC15S),
			CLASS(Clone_Sharpshooter),
			CLASS(Clone_AR),
			CLASS(Clone_SergeantMajor),
			CLASS(Clone_Sergeant),
			CLASS(Clone_RTO),
			CLASS(Clone_EOD),
			CLASS(Clone_Medic),
			CLASS(Clone_Marksman),
			CLASS(Clone_Major),
			CLASS(Clone_Lieutenant),
			CLASS(Clone_Jumper),
			CLASS(Clone_Corporal),
			CLASS(Clone_Commander),
			CLASS(Clone_Captain),
			CLASS(Clone_AT),
			CLASS(Clone_DP23),
			CLASS(Clone_DC15AUGL),
			CLASS(Clone_DC15S),
			CLASS(Clone_DC15A),
			CLASS(Clone_P1_Sharpshooter),
			CLASS(Clone_P1_AR),
			CLASS(Clone_P1_Sergeant),
			CLASS(Clone_P1_RTO),
			CLASS(Clone_P1_EOD),
			CLASS(Clone_P1_Medic),
			CLASS(Clone_P1_Lieutenant),
			CLASS(Clone_P1_Corporal),
			CLASS(Clone_P1_Commander),
			CLASS(Clone_P1_Captain),
			CLASS(Clone_P1_AT),
			CLASS(Clone_P1_DC15AUGL),
			CLASS(Clone_P1_DC15S),
			CLASS(Clone_P1_DC15A)
		};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"