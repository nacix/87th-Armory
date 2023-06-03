#include "script_component.hpp"

params ["_unit", "_phrase", "_range", "_cooldown"];

// Exit this call if our droid is already speaking
if (!GETVAR(_unit, GVAR(canSpeak), false)) exitWith {};

// Prevent our droid from speaking to stop line-overlap
SETVAR(_unit, GVAR(canSpeak), false);

// Start playing our droid's dialogue
[_unit, _phrase, _range] call CBA_fnc_globalSay3d;

// Allow the droid to speak after their line has finished
[{ _this setVariable ["BX_isTalking", nil] }, _delay] call CBA_fnc_waitAndExecute;