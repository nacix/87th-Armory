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
TRACE_1("droidFire", _droid);

private _firedEH = _droid addEventHandler ["Fired", {
    private _droid = _this select 0;

    // Terminate this call if our droid is unable to speak
    if (!isNil { GETVAR(_droid, GVAR(canDroidSpeak), nil) }) exitWith { LOG_1("(droidFire) [%1]: Terminated. Unit is already speaking!", _droid) };

    // Set the droid's combat callout based on their class
    switch (true) do {
        case (_droid isKindOf CLASS(Droid_B2)): { [selectRandom ["WBK_b2_firing_1", "WBK_b2_firing_2", "WBK_b2_firing_3", "WBK_b2_firing_4", "WBK_b2_firing_5"], 7] };
        default { [selectRandom ["B1_shooting_1", "B1_shooting_2", "B1_shooting_3", "B1_shooting_4"], random 10] };
    } params ["_combatVoice", "_voiceDelay"];

    [_droid, _combatVoice, 60, _voiceDelay] call FUNC(sayPhrase);
}];

SETVAR(_droid, GVAR(droidFireEH), _firedEH);