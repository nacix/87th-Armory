#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Handles droid voice callouts when firing at targets
 *
 * Arguments:
 * 0: The droid <OBJECT>
 *
 * Public: No
*/

params ["_droid"];
TRACE_1("fireB1", _droid);

if (!isNil { _droid getVariable "B1Speak" }) exitWith { LOG_1("(fireB1) [%1]: Terminated. Unit is already speaking!", _droid) };

// TODO: Remove spawn call
// Play a random B1 combat sound
LOG_1("(fireB1) [%1]: Playing combat callout...", _droid);
_droid setVariable ["B1Speak", 1];
[_droid, selectRandom ["B1_shooting_1", "B1_shooting_2", "B1_shooting_3", "B1_shooting_4"], 60] call CBA_fnc_globalSay3d;
[{
    LOG_1("(fireB1) [%1]: Combat callout complete!", _droid);
    _this setVariable ["B1Speak", nil];
}, _droid, random 10] call CBA_fnc_waitAndExecute;