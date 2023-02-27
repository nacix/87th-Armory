#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Sets the skill values for a unit at postInit. NOTE: MAY OVERRIDE 3DEN-DEFINED SKILL VALUES
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Skill definitions <ARRAY>
 *      1.1: Unit Class <STRING>
 *      1.2: Skill Values <ARRAY>
 *			1.2.1: Skill Value <NUMBER>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [cursorTarget, ax87_rep_units_skillTable] call ax87_common_fnc_setUnitSkills;
 *
 * Public: No
*/

params ["_unit", "_skillTable"];

_skillTable = _skillTable get (typeOf _unit);
if (!isServer || isPlayer _unit) exitWith {};
{
	[_unit, [_x, _skillTable select _forEachIndex]] remoteExec ["setSkill", 0, _unit];
} forEach SKILLTYPES;