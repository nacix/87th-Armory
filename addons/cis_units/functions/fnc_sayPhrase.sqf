#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Plays the given phrase on the provided unit's 3D position.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: The phrase to play <STRING>
 * 2: The range to play the phrase at <NUMBER>
 * 3: The delay before the unit can speak again <NUMBER>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_sayPhrase;
 *
 * Public: No
*/

params ["_unit", "_phrase", "_range", "_cooldown"];

// Exit this call if our droid is already speaking
if (!GETVAR(_unit, GVAR(canSpeak), false)) exitWith {};

// Prevent our droid from speaking to stop line-overlap
SETVAR(_unit, GVAR(canSpeak), false);

// Start playing our droid's dialogue
[_unit, _phrase, _range] call CBA_fnc_globalSay3d;

// Allow the droid to speak after their line has finished
[{ _this setVariable ["BX_isTalking", nil] }, _delay] call CBA_fnc_waitAndExecute;