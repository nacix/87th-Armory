#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Calls unit init functions on postInit
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset or custom face list <STRING|ARRAY>
 *      1.1: Face ID <STRING>
 *      1.2: RNG Weight <NUMBER>
 * 2: Unit designation <STRING> (Optional | default="CT")
 *
 * Examples:
 * NONE - Argument examples can be found in common\functions\setUnitSkills.sqf
 *
 * Return Value:
 * NONE
 *
 * Public: No
*/

params ["_unit", "_faceProfile", ["_designation", "CT"]];

// Call the paradrop script if our unit is the leader of a drop group
switch (typeOf _unit) do {
	case CLASS(AB_NCO_A): { [_unit, 250] call EFUNC(common,paradrop) };
	case CLASS(AB_NCO_B): { [_unit, 500] call EFUNC(common,paradrop) };
	case CLASS(AB_NCO_C): { [_unit, 750, 65] call EFUNC(common,paradrop) };
	case CLASS(AB_NCO_D): { [_unit, 1000, 70] call EFUNC(common,paradrop) };
};

// Grabs our unit's skills from the skillTable (if available)
private _unitSkills = (GVAR(skillTable)) getOrDefault [typeOf _unit, []];

// Call scripts to set our unit's identity and skillset
[_unit, _faceProfile, _designation] call EFUNC(rep_identities,setIdentity);
[_unit, _unitSkills] call EFUNC(common,setUnitSkills);