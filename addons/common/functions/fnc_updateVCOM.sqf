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

// Exit the function if it isn't running serverside
if (!isServer) exitWith {};

// Checks if VCOM AI is enabled on the server
if (isClass(configFile >> "CfgPatches" >> "vcom_ai")) then {
	// Waits until VCOM has initialized and passes our units' skill data to VCOM
	[{!(isNil "VCM_SKILL_CLASSNAMES")}, {
		_vcomSkillTable = _this;
		VCM_CLASSNAMESPECIFIC = true;
		publicVariable "VCM_CLASSNAMESPECIFIC";

		{VCM_SKILL_CLASSNAMES pushBack _x} forEach _vcomSkillTable;
		publicVariable "VCM_SKILL_CLASSNAMES";
	}, _vcomSkillTable, 300] call CBA_fnc_waitUntilAndExecute;
};