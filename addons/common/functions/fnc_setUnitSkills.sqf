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

// Exit the function if our provided unit isn't valid
if (!isServer || isPlayer _unit || count _skillTable <= 0) exitWith {};

// Sets each of the unit's skills using their provided skillTable and our global array of skill categories
{
	_unit setSkill [_x, _skillTable select _forEachIndex];
} forEach SKILLTYPES;