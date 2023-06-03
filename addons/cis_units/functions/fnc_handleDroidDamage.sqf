#include "script_component.hpp"

params ["_droid"];
TRACE_1("handleDroidDamage", _droid);

// Add EH to handle droid damage events and remove all possible conflicts
_droid removeAllEventHandlers "HandleDamage";
private _damageEH = [_droid, "HandleDamage", {
    params ["_droid", "_selection", "_damage", "_shooter", "_projectile"];
    TRACE_5("handleDroidDamage", _droid, _selection, _damage, _shooter, _projectile);

    // Remove damage handling if our droid is already dead
    if (!alive _droid) exitWith {
        LOG_1("(handleDamage) [%1]: Terminated. Unit has died! Removing redundant eventHandlers...", _droid);
        ["HandleDamage", _thisEventHandler] call CBA_fnc_removeEventHandler;
    };

    // Exit this call if the shooter was a friendly AI
    if (side _shooter isEqualTo side _droid && !isPlayer _shooter) exitWith {
        LOG_2("(handleDroidDamage) [%1]: Termininating call with value 0. The shooter [%2] is a friendly AI!", _droid, _shooter);
        0;
    };

    LOG_2("(handleDroidDamage) [%1]: Increasing droid's combat awareness towards aggressor [%2]", _droid, _shooter);
    if (_droid knowsAbout _shooter < 1.5) then {
        _droid reveal [_shooter, 1.5]; // Moderately reveal the shooter if they arent't already spotted
    } else {
        _droid doMove (getPos _shooter); // Move our droid towards its shooter if they have been spotted
    };

    private _damageMultiplier = switch (true) do {
        case (_droid isKindOf CLASS(Droid_BX)): { GVAR(damageMultiplierBX) };
        case (_droid isKindOf CLASS(Droid_B2)): { GVAR(damageMultiplierB2) };
        default { GVAR(damageMultiplierB1) };
    };

    LOG_1("(handleDroidDamage) [%1]: Running damage calculations...", _droid);

    // Calculate the new difference in damage caused by the projectile
    private _damageTaken = _damage * _damageMultiplier;

    // Add our calculated damage to the total damage value of our droid
    private _totalDamage = GETVAR(_droid, GVAR(droidDamage), 0) + _damageTaken;

    // Register the new damage status of our droid and kill it if it's reached the fatal threshold (1)
    LOG_3("(handleDroidDamage) [%1]: Damage received: [%2 (%3 / 1.0)]]", _droid, _damageTaken, _totalDamage);
    if (_totalDamage > 1) exitWith {
        LOG_1("(handleDroidDamage) [%1]: The droid has been killed! It has exceeded the fatal damage threshold (1)!", _droid);
        _droid setDamage 1;
    };
    SETVAR(_droid, GVAR(droidDamage), _totalDamage);

    if (_damageTaken > 0) then {
        private _injurySounds = switch (true) do {
            case (_droid isKindOf CLASS(Droid_BX)): { ["wbk_b2_incGrenade_1"] };
            case (_droid isKindOf CLASS(Droid_B2)): { ["wbk_b2_incGrenade_1"] };
            default { ["B1_hit_1", "B1_hit_2", "B1_hit_3", "B1_hit_4", "B1_hit_5", "B1_hit_6"] };
        };

        // Exit script if the droid is in an execution animation
        if (animationState _droid isEqualto "B1_Droid_execution_main" || animationState _droid isEqualTo "B2_SupperBattleDroid_melee") exitWith { LOG_1("(handleDroidDamage) [%1]: Terminated. Unit is doing an execution!", _droid) };

        // Queue-up an injury sound on our droid
        [_droid, selectRandom _injurySounds, 90, 10] call FUNC(sayPhrase);
    };

    0; // Return 0 to prevent interference from other damage handlers
}] call CBA_fnc_addBISEventHandler;

SETVAR(_droid, GVAR(droidDamageEH), _damageEH);