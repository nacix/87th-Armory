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

switch (typeOf _unit) do {
	case "87th_AB_NCO_A": { [_unit, 250] call EFUNC(common,paradrop) };
	case "87th_AB_NCO_B": { [_unit, 500] call EFUNC(common,paradrop) };
	case "87th_AB_NCO_C": { [_unit, 750, 65] call EFUNC(common,paradrop) };
	case "87th_AB_NCO_D": { [_unit, 1000, 70] call EFUNC(common,paradrop) };
};

_unitSkills = (GVAR(skillTable)) getOrDefault [typeOf _unit, []];

[_unit, _faceProfile, _designation] call EFUNC(rep_identities,setIdentity);
[_unit, _unitSkills] call EFUNC(common,setUnitSkills);