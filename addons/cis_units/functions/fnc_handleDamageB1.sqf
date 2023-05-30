#include "script_component.hpp"
/*
 * Author: Anorexican
 *
 * Converts damage inflicted on the B1 unit to more-realistic values
 *
 * Arguments:
 * 0: Same as vanilla 'HandleDamage' EH params (https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HandleDamage)
 * 
 * Return Value:
 * NONE
 *
 * Public: No
*/

params ["_droid", "_selection", "_damage", "_shooter", "_projectile"];
TRACE_5("handleDamageB1", _droid, _selection, _damage, _shooter, _projectile);

// Exit script if the droid is in an execution animation
if (animationState _droid isEqualto "B1_Droid_execution_main") exitWith { LOG_1("(handleDamageB1) [%1]: Terminated. Unit is doing an execution!", _droid) };

// True if the shooter was hostile to our droid
if (side _shooter isNotEqualTo side _droid) then {
    LOG_2("(handleDamageB1) [%1]: Increasing droid's combat awareness towards aggressor [%2]", _droid, _shooter);

    // TODO: Make this switch-case because I like clean
    if (_droid knowsAbout _target < 1.5) then {
        _droid reveal [_shooter, 1.5]; // Moderately reveal the shooter if they arent't already spotted
    } else {
        _droid doMove (getPos _shooter); // Move our droid towards its shooter if they have been spotted
    };
};

// TODO: Re-evaluate the trade-offs of this setup
// True if our droid didn't hurt itself
if (_droid isNotEqualto _shooter) exitWith {
    // TODO: Move this check to an EH 'cause we're not fucking cavemen - also make sure to remove the removeAllEventHandlers because that's actually retarded
    // Remove all damage eventHandlers if our droid is dead
    if (!alive _droid) exitWith {
        LOG_1("(handleDamageB1) [%1]: Terminated. Unit has died! Removing redundant eventHandlers...", _droid);
        _droid removeAllEventHandlers "HandleDamage";
    };

    // True if the droid is not currently speaking
    if (isNil { _droid getVariable "B1Speak" }) then {
        LOG_1("(handleDamageB1) [%1]: Playing damage callout...", _droid);

        // TODO: Remove spawn call
        // Play a random B1 hurt sound
        _droid setVariable ["B1Speak", 1];
        [_droid, selectRandom ["B1_hit_1", "B1_hit_2", "B1_hit_3", "B1_hit_4", "B1_hit_5", "B1_hit_6"], 90] call CBA_fnc_globalSay3d;

        [{ _this setVariable ["B1Speak", nil] }, _droid, 10] call CBA_fnc_waitAndExecute;
        LOG_1("(handleDamageB1) [%1]: Ambient callout complete!", _droid);
    };

    LOG_1("(handleDamageB1) [%1]: Running damage calculations...", _droid);

    // Get the amount of damage caused and the exposiveness of the received projectile
    _damage = _damage - damage _droid;
    
    // Calculate the new difference in damage caused by the projectile
    private _damageTaken = _damage * 0.5;

    // Add our calculated damage to the total damage value of our droid
    private _totalDamage = damage _droid + _damageTaken;

    LOG_5("(handleDamageB1) [%1]: New damage: [%2 (%3% HP)] | Original damage: [%4 (%5)]", _droid, _damageTaken, (1 - _totalDamage) / 100, _damage, _totalDamage - _damageTaken);

    // Return the new damage status of our droid
    _totalDamage;
};