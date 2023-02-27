#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Selects a random clone face then assigns it to the provided unit. Also assigns a rank and designation.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset or custom face list <STRING|ARRAY>
 *      1.1: Face ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 * 2: Unit designation <STRING> (Optional | default="CT")
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [player, "NCO"] call ax87_clones_fnc_setUnitIdentity; // Selects face from NCO profile with default voice
 * [player, ["WhiteHead_02", 0.5, "AsianHead_A3_02", 0.5]] call ax87_clones_fnc_setUnitIdentity; // Selects face from array with default designation
 * [player, "WhiteHead_02", "RC"] call ax87_clones_fnc_setUnitIdentity; // Applies face and sets designation to "RC"
 *
 * Public: No
*/

params ["_unit", "_faceProfile", ["_designation", "CT"]];

if (!isServer || isPlayer _unit) exitWith {};

private ["_selectedFace", "_number", "_name", "_rank"];
private _faceProfileMap = EGVAR(rep_units,faceProfileMap);

switch (typeName _faceProfile) do {
    case "ARRAY": {_selectedFace = selectRandomWeighted _faceProfile};
    case ("STRING"): {
        if (toUpper _faceProfile in _faceProfileMap) then {_selectedFace = selectRandomWeighted (_faceProfileMap get toUpper _faceProfile)}
    };
    default {_selectedFace = _faceProfile};
};

if (rank _unit == "PRIVATE") then {
    switch (_designation) do {
        case "CP": {_rank = "CORPORAL"};
        case "CS";
        case "CSM": {_rank = "SERGEANT"};
        case "CLT": {_rank = "LIEUTENANT"};
        case "CPT": {_rank = "CAPTAIN"};
        case "CMJ": {_rank = "MAJOR"}; // Maybe we should separate these
        case "CMDR": {_rank = "COLONEL"};
        default {_rank = "PRIVATE"};
    };
};

_designation = _designation + " - ";
_number = str ([1000, 9999] call BIS_fnc_randomInt);
_name = _designation + _number;

[_unit, _selectedFace] remoteExec ["setFace", 0, _unit];
[_unit, [_name, _designation, _number]] remoteExec ["setName", 0, _unit];
[_unit, _rank] remoteExec ["setRank", 0, _unit];