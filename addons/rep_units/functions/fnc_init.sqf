#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Initializes global variables for our republic units
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

if (!isServer) exitWith {};

// FACE PROFILES BASED ON UNIT ROLE TAG
GVAR(faceProfileMap) = createHashMapFromArray [
    ["CT", [
		"lsd_gar_cloneA_head", 0.8,
		"lsd_gar_cloneC_head", 0.2
    ]],
    ["SPC", [
        "lsd_gar_cloneA_head", 0.65,
        "lsd_gar_cloneC_head", 0.15,
        "lsd_gar_cloneG_head", 0.15,
        "lsd_developer_cloneGambit_head", 0.05
    ]],
    ["NCO", [
        "lsd_gar_cloneA_head", 0.35,
        "lsd_gar_cloneC_head", 0.20,
        "lsd_gar_cloneG_head", 0.25,
        "lsd_developer_cloneGambit_head", 0.20
    ]],
    ["SNCO", [
        "lsd_gar_cloneA_head", 0.35,
        "lsd_gar_cloneG_head", 0.30,
        "lsd_developer_cloneGambit_head", 0.35
    ]],
    ["JCO", [
        "lsd_gar_cloneA_head", 0.6,
        "lsd_gar_cloneC_head", 0.25,
        "lsd_developer_cloneGambit_head", 0.15
    ]],
    ["SCO", [
        "lsd_gar_cloneA_head", 0.3,
        "lsd_gar_cloneG_head", 0.4,
        "lsd_developer_cloneGambit_head", 0.2,
        "lsd_community_cloneVaelin_head", 0.1
    ]],
    ["CMDR", [
        "lsd_developer_cloneMarco_head", 0.5,
		"lsd_community_cloneVaelin_head", 0.5
    ]]
];

// SKILL LEVELS FOR EACH UNIT TYPE
// <NUMBER: 0.00 - 1.00> | [0] aimingAccuracy, [1] aimingShake, [2] spotDistance, [3] spotTime, [4] courage, [5] commanding, [6] aimingSpeed, [7] general, [8] endurance, [9] reloadSpeed
private _eliteSkills = 		[1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00];
private _sniperSkills = 	[0.90, 0.90, 1.00, 1.00, 1.00, 1.00, 0.85, 0.80, 1.00, 1.00];
private _scoutSkills = 		[0.80, 0.80, 0.80, 0.80, 1.00, 1.00, 0.80, 0.80, 1.00, 1.00];
private _leadSkills =		[0.75, 0.75, 0.65, 0.75, 1.00, 1.00, 0.65, 0.75, 0.75, 0.80];
private _basicSkills =		[0.65, 0.65, 0.65, 0.65, 1.00, 1.00, 0.65, 0.65, 0.70, 0.75];

// SKILL TABLE FOR EACH UNIT CLASS
private _vcomSkillTable = [
	// REPUBLIC COMMANDOS
	[CLASS(RC_Sniper), _eliteSkills],
	[CLASS(RC_Demo), _eliteSkills],
	[CLASS(RC_Tech), _eliteSkills],
	[CLASS(RC_NCO), _eliteSkills],
	[CLASS(RC_DC17M), _eliteSkills],

	// ARC TROOPERS
	[CLASS(ARC_Lieutenant), _eliteSkills],
	[CLASS(ARC_Sniper), _eliteSkills],
	[CLASS(ARC_JTAC), _sniperSkills],
	[CLASS(ARC_Medic), _sniperSkills],
	[CLASS(ARC_EOD), _sniperSkills],
	[CLASS(ARC_AT), _sniperSkills],
	[CLASS(ARC_GL), _sniperSkills],
	[CLASS(ARC_Westar), _sniperSkills],
	[CLASS(ARC_DC15S), _sniperSkills],

	// BARC TROOPERS
	[CLASS(BARC_Major), _sniperSkills],
	[CLASS(BARC_Captain), _sniperSkills],
	[CLASS(BARC_Lieutenant), _sniperSkills],
	[CLASS(BARC_NCO), _scoutSkills],
	[CLASS(BARC_CLS), _scoutSkills],
	[CLASS(BARC_JTAC), _scoutSkills],
	[CLASS(BARC_Spotter), _scoutSkills],
	[CLASS(BARC_Sniper), _sniperSkills],
	[CLASS(BARC_DC15S), _scoutSkills],

	// ARF TROOPERS
	[CLASS(ARF_Major), _sniperSkills],
	[CLASS(ARF_Captain), _sniperSkills],
	[CLASS(ARF_Lieutenant), _sniperSkills],
	[CLASS(ARF_NCO), _scoutSkills],
	[CLASS(ARF_CLS), _scoutSkills],
	[CLASS(ARF_EOD), _scoutSkills],
	[CLASS(ARF_AT), _scoutSkills],
	[CLASS(ARF_JTAC), _scoutSkills],
	[CLASS(ARF_Spotter), _scoutSkills],
	[CLASS(ARF_Sniper), _sniperSkills],
	[CLASS(ARF_DC15S), _scoutSkills],

	// AIRBORNE TROOPERS
	[CLASS(AB_Officer), _scoutSkills],
	[CLASS(AB_NCO), _scoutSkills],
	[CLASS(AB_CLS), _leadSkills],
	[CLASS(AB_AR), _leadSkills],
	[CLASS(AB_EOD), _leadSkills],
	[CLASS(AB_AT), _leadSkills],
	[CLASS(AB_DC15LE_UGL), _leadSkills],
	[CLASS(AB_DC15C), _leadSkills],
	[CLASS(AB_DC15LE), _leadSkills],
	// PARADROPPERS
	[CLASS(AB_NCO_A), _scoutSkills],
	[CLASS(AB_NCO_B), _scoutSkills],
	[CLASS(AB_NCO_C), _scoutSkills],
	[CLASS(AB_NCO_D), _scoutSkills],

	// CLONE TROOPERS
	[CLASS(Clone_Pilot), _basicSkills],
	[CLASS(Clone_Sharpshooter), _sniperSkills],
	[CLASS(Clone_AR), _basicSkills],
	[CLASS(Clone_SergeantMajor), _leadSkills],
	[CLASS(Clone_Sergeant), _leadSkills],
	[CLASS(Clone_RTO), _basicSkills],
	[CLASS(Clone_EOD), _basicSkills],
	[CLASS(Clone_Medic), _basicSkills],
	[CLASS(Clone_Marksman), _scoutSkills],
	[CLASS(Clone_Major), _leadSkills],
	[CLASS(Clone_Lieutenant), _leadSkills],
	[CLASS(Clone_Jumper), _scoutSkills],
	[CLASS(Clone_Corporal), _leadSkills],
	[CLASS(Clone_Commander), _leadSkills],
	[CLASS(Clone_Captain), _leadSkills],
	[CLASS(Clone_AT), _basicSkills],
	[CLASS(Clone_DP23), _basicSkills],
	[CLASS(Clone_DC15AUGL), _basicSkills],
	[CLASS(Clone_DC15S), _basicSkills],
	[CLASS(Clone_DC15A), _basicSkills],

	// CLONE TROOPERS (P1)
	[CLASS(Clone_P1_Pilot), _basicSkills],
	[CLASS(Clone_P1_Sharpshooter), _sniperSkills],
	[CLASS(Clone_P1_AR), _basicSkills],
	[CLASS(Clone_P1_Sergeant), _leadSkills],
	[CLASS(Clone_P1_RTO), _basicSkills],
	[CLASS(Clone_P1_EOD), _basicSkills],
	[CLASS(Clone_P1_Medic), _basicSkills],
	[CLASS(Clone_P1_Lieutenant), _leadSkills],
	[CLASS(Clone_P1_Corporal), _leadSkills],
	[CLASS(Clone_P1_Commander), _leadSkills],
	[CLASS(Clone_P1_Captain), _leadSkills],
	[CLASS(Clone_P1_AT), _basicSkills],
	[CLASS(Clone_P1_DC15AUGL), _basicSkills],
	[CLASS(Clone_P1_DC15S), _basicSkills],
	[CLASS(Clone_P1_DC15A), _basicSkills]
];

[_vcomSkillTable] call EFUNC(common,updateVCOM); // ENABLES SUPPORT FOR VCOM_AI 3.0
GVAR(skillTable) = createHashMapFromArray _vcomSkillTable;