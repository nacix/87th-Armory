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

    if (!isNil { GETVAR(_droid, GVAR(canDroidSpeak), nil) }) exitWith { LOG_1("(droidFire) [%1]: Terminated. Unit is already speaking!", _droid) };

    switch (typeOf _droid) do {
        case CLASS(Droid_B2): { [selectRandom ["WBK_b2_firing_1", "WBK_b2_firing_2", "WBK_b2_firing_3", "WBK_b2_firing_4", "WBK_b2_firing_5"], 7] };
        default { [selectRandom ["B1_shooting_1", "B1_shooting_2", "B1_shooting_3", "B1_shooting_4"], random 10] };
    } params ["_combatVoice", "_voiceDelay"];

    // TODO: Remove spawn call
    // Play a random droid combat sound
    LOG_1("(droidFire) [%1]: Playing combat callout...", _droid);
    SETVAR(_droid, GVAR(canDroidSpeak), 1);
    [_droid, _combatVoice, 60] call CBA_fnc_globalSay3d;

    // Stop playing the sound when 
    [{
        LOG_1("(droidFire) [%1]: Combat callout complete!", _droid);
        SETVAR(_droid, GVAR(canDroidSpeak), nil);
    }, _droid, _voiceDelay] call CBA_fnc_waitAndExecute;
}];

SETVAR(_droid, GVAR(droidFireEH), _firedEH);