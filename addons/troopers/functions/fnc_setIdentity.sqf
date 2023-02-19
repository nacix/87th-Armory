#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Selects a clone voice and random clone face then assigns it to the provided unit
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset or custom face list <STRING|ARRAY>
 *      1.1: Face ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 * 2: Unit voice selection(s) (optional; default: "CloneTrooperENG") <STRING|ARRAY>
 *      1.1: Voice ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, "NCO"] call 87th_troopers_fnc_setIdentity; // Selects face from NCO profile with default voice
 * [player, ["WhiteHead_02", 0.5, "AsianHead_A3_02", 0.5]] call 87th_troopers_fnc_setIdentity; // Selects face from array with default voice
 * [player, "WhiteHead_02", "Male02GRE"] call 87th_troopers_fnc_setIdentity; // Sets face and voice to provided strings
 * [player, "WhiteHead_02", ["Male02GRE", 0.5, "Male01GRE", 0.5]] call 87th_troopers_fnc_setIdentity; // Sets face to string and selects voice from array
 *
 * Public: No
 */

params ["_unit", "_faceProfile", ["_voiceProfile", "CloneTrooperENG"]];

private ["_selectedFace", "_selectedVoice"];
private _faceProfileMap = createHashMapFromArray [
    ["CT", [
		"lsd_gar_cloneA_head", 0.8,
		"lsd_gar_cloneC_head", 0.2
    ]],
    ["SPC", [
        "lsd_gar_cloneA_head", 0.2,
        "lsd_gar_cloneC_head", 0.4,
        "lsd_gar_cloneG_head", 0.4,
        "lsd_developer_cloneGambit_head", 0.2
    ]],
    ["NCO", [
        "lsd_gar_cloneA_head", 0.2,
        "lsd_gar_cloneC_head", 0.2,
        "lsd_gar_cloneG_head", 0.2,
        "lsd_developer_cloneKhaos_head", 0.15,
        "lsd_developer_cloneGambit_head", 0.25
    ]],
    ["SNCO", [
        "lsd_gar_cloneA_head", 0.3,
        "lsd_gar_cloneG_head", 0.2,
        "lsd_developer_cloneKhaos_head", 0.2,
        "lsd_developer_cloneGambit_head", 0.30
    ]],
    ["LT", [
        "lsd_gar_cloneA_head", 0.4,
        "lsd_gar_cloneC_head", 0.4,
        "lsd_developer_cloneGambit_head", 0.2
    ]],
    ["CPT", [
        "lsd_gar_cloneA_head", 0.2,
        "lsd_gar_cloneG_head", 0.4,
        "lsd_developer_cloneKhaos_head", 0.1,
        "lsd_developer_cloneGambit_head", 0.2,
        "lsd_developer_cloneVaelin_head", 0.1
    ]],
    ["CMDR", [
        "lsd_developer_cloneMarco_head", 0.5,
		"lsd_developer_cloneVaelin_head", 0.5
    ]]
];

if (typeName _faceProfile == "ARRAY") then {
    _selectedFace = selectRandomWeighted _faceProfile;
};
if (typeName _faceProfile == "STRING" && toUpper _faceProfile in _faceProfileMap) then {
    _selectedFace = selectRandomWeighted (_faceProfileMap get toUpper _faceProfile);
} else {
    _selectedFace = _faceProfile;
};

if (typeName _voiceProfile == "ARRAY") then {
    _selectedVoice = selectRandomWeighted _voiceProfile;
} else {
    _selectedVoice = _voiceProfile;
};

if (isServer) then {
    [_unit, _selectedFace] remoteExec ["setFace", 0, _unit];
    [_unit, _selectedVoice] remoteExec ["setSpeaker", 0, _unit];
};