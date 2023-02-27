#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Sends a list of our desired unit skill values to VCOM_AI to avoid overrides
 *
 * Arguments:
 * 0: Skill definitions <ARRAY>
 *      0.1: Unit Class <STRING>
 *      0.2: Skill Values <ARRAY>
 *			0.2.1: Skill Value <NUMBER>
 *
 * Return Value:
 * NONE
 *
 * Examples:
 * [_vcomSkillTable] call ax87_clones_fnc_setUnitIdentity;
 *
 * Public: No
*/

params ["_vcomSkillTable"];

if (!isServer) exitWith {};

if (isClass(configFile >> "CfgPatches" >> "vcom_ai")) then {
	[{!(isNil "VCM_SKILL_CLASSNAMES")}, {
		_vcomSkillTable = _this;
		VCM_CLASSNAMESPECIFIC = true;
		publicVariable "VCM_CLASSNAMESPECIFIC";

		{VCM_SKILL_CLASSNAMES pushBack _x} forEach _vcomSkillTable;
		publicVariable "VCM_SKILL_CLASSNAMES";
	}, _vcomSkillTable, 300] call CBA_fnc_waitUntilAndExecute;
};