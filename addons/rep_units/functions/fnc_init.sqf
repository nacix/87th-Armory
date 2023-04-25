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
	["87th_RC_Sniper", _eliteSkills],
	["87th_RC_Demo", _eliteSkills],
	["87th_RC_Tech", _eliteSkills],
	["87th_RC_NCO", _eliteSkills],
	["87th_RC_DC17M", _eliteSkills],

	// ARC TROOPERS
	["87th_ARC_Lieutenant", _eliteSkills],
	["87th_ARC_Sniper", _eliteSkills],
	["87th_ARC_JTAC", _sniperSkills],
	["87th_ARC_Medic", _sniperSkills],
	["87th_ARC_EOD", _sniperSkills],
	["87th_ARC_AT", _sniperSkills],
	["87th_ARC_GL", _sniperSkills],
	["87th_ARC_Westar", _sniperSkills],
	["87th_ARC_DC15S", _sniperSkills],

	// BARC TROOPERS
	["87th_BARC_Major", _sniperSkills],
	["87th_BARC_Captain", _sniperSkills],
	["87th_BARC_Lieutenant", _sniperSkills],
	["87th_BARC_NCO", _scoutSkills],
	["87th_BARC_CLS", _scoutSkills],
	["87th_BARC_JTAC", _scoutSkills],
	["87th_BARC_Spotter", _scoutSkills],
	["87th_BARC_Sniper", _sniperSkills],
	["87th_BARC_DC15S", _scoutSkills],

	// ARF TROOPERS
	["87th_ARF_Major", _sniperSkills],
	["87th_ARF_Captain", _sniperSkills],
	["87th_ARF_Lieutenant", _sniperSkills],
	["87th_ARF_NCO", _scoutSkills],
	["87th_ARF_CLS", _scoutSkills],
	["87th_ARF_EOD", _scoutSkills],
	["87th_ARF_AT", _scoutSkills],
	["87th_ARF_JTAC", _scoutSkills],
	["87th_ARF_Spotter", _scoutSkills],
	["87th_ARF_Sniper", _sniperSkills],
	["87th_ARF_DC15S", _scoutSkills],

	// AIRBORNE TROOPERS
	["87th_AB_Officer", _scoutSkills],
	["87th_AB_NCO", _scoutSkills],
	["87th_AB_CLS", _leadSkills],
	["87th_AB_AR", _leadSkills],
	["87th_AB_EOD", _leadSkills],
	["87th_AB_AT", _leadSkills],
	["87th_AB_DC15LE_UGL", _leadSkills],
	["87th_AB_DC15C", _leadSkills],
	["87th_AB_DC15LE", _leadSkills],
	// PARADROPPERS
	["87th_AB_NCO_A", _scoutSkills],
	["87th_AB_NCO_B", _scoutSkills],
	["87th_AB_NCO_C", _scoutSkills],
	["87th_AB_NCO_D", _scoutSkills],

	// CLONE TROOPERS
	["87th_Clone_Pilot", _basicSkills],
	["87th_Clone_Sharpshooter", _sniperSkills],
	["87th_Clone_AR", _basicSkills],
	["87th_Clone_SergeantMajor", _leadSkills],
	["87th_Clone_Sergeant", _leadSkills],
	["87th_Clone_RTO", _basicSkills],
	["87th_Clone_EOD", _basicSkills],
	["87th_Clone_Medic", _basicSkills],
	["87th_Clone_Marksman", _scoutSkills],
	["87th_Clone_Major", _leadSkills],
	["87th_Clone_Lieutenant", _leadSkills],
	["87th_Clone_Jumper", _scoutSkills],
	["87th_Clone_Corporal", _leadSkills],
	["87th_Clone_Commander", _leadSkills],
	["87th_Clone_Captain", _leadSkills],
	["87th_Clone_AT", _basicSkills],
	["87th_Clone_DP23", _basicSkills],
	["87th_Clone_DC15AUGL", _basicSkills],
	["87th_Clone_DC15S", _basicSkills],
	["87th_Clone_DC15A", _basicSkills],

	// CLONE TROOPERS (P1)
	["87th_Clone_P1_Pilot", _basicSkills],
	["87th_Clone_P1_Sharpshooter", _sniperSkills],
	["87th_Clone_P1_AR", _basicSkills],
	["87th_Clone_P1_Sergeant", _leadSkills],
	["87th_Clone_P1_RTO", _basicSkills],
	["87th_Clone_P1_EOD", _basicSkills],
	["87th_Clone_P1_Medic", _basicSkills],
	["87th_Clone_P1_Lieutenant", _leadSkills],
	["87th_Clone_P1_Corporal", _leadSkills],
	["87th_Clone_P1_Commander", _leadSkills],
	["87th_Clone_P1_Captain", _leadSkills],
	["87th_Clone_P1_AT", _basicSkills],
	["87th_Clone_P1_DC15AUGL", _basicSkills],
	["87th_Clone_P1_DC15S", _basicSkills],
	["87th_Clone_P1_DC15A", _basicSkills]
];

[_vcomSkillTable] call EFUNC(common,updateVCOM); // ENABLES SUPPORT FOR VCOM_AI 3.0
GVAR(skillTable) = createHashMapFromArray _vcomSkillTable;