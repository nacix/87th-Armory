#include "script_component.hpp"
/*
 * Authors: Anorexican & WebKnight
 *
 * Handles initialization of droid units and calls other scripts to handle their behavior.
 *
 * Arguments:
 * 0: The droid <OBJECT>
 * 1: The droid's skill level <NUMBER>
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [cursorTarget] call ax87_cis_units_fnc_initDroid;
 *
 * Public: No
*/

params ["_droid", "_skill"];
TRACE_1("initDroid", _droid);

// Select a random death animation and sound for our droid
switch (true) do {
    case (_droid isKindOf CLASS(Droid_BX)): {
        [["B2_SupperBattleDroid_die"], ["WBK_b2_dying"]]
    };
    case (_droid isKindOf CLASS(Droid_B2)): {
        [["B2_SupperBattleDroid_die"], ["WBK_b2_dying"]]
    };
    default {
        [["B1_Droid_die_1", "B1_Droid_die_2", "B1_Droid_die_3"], ["B1_DeathSound_1", "B1_DeathSound_2", "B1_DeathSound_3", "B1_DeathSound_4", "B1_DeathSound_5", "B1_DeathSound_6", "B1_DeathSound_7", "B1_DeathSound_8"]]
    };
} params ["_deathAnims", "_deathSounds"];

[_droid, _deathAnims, _deathSounds] call FUNC(handleDroidDeath);

// Handles player-controlled droid units
if (isPlayer _droid) exitWith {
	LOG_1("(initDroid) [%1]: This droid is a Player! Skipping AI-specific functions...", _droid);
	_droid setVariable ["disableUnitSFX", 1, true];
};

// Set our droid's damage
SETVAR(_droid, GVAR(droidDamage), 0);

// Set our droid's identity data
LOG_1("(initDroid) [%1]: Setting up droid identity data...", _droid);
_droid allowFleeing 0; // Prevents our droid from retreating
_droid setSpeaker "NoVoice"; // Disables default ArmaMan voice(s)
_droid setSkill _skill;
_droid setVariable ["disableUnitSFX", 1, true];
_droid setUnitPos "UP"; // Forces our droid to stand (at least until it gets overridden from another AI mod)

// Call damage handler script
_droid call FUNC(handleDroidDamage);

if (!(_droid isKindOf CLASS(Droid_BX))) then {
    // Call script to handle firing events
    _droid call FUNC(droidFire);

    // Add PFH to await melee opportunity
    _droid call FUNC(handleDroidMelee);
};

switch (true) do {
    case (_droid isKindOf CLASS(Droid_BX)): {
        _droid call FUNC(bxMeleeHandler);
        // _droid call FUNC(bxMeleeCombat);
        // _droid call FUNC(bxMeleePathing);
    };
    case (_droid isKindOf CLASS(Droid_B2)): {
        [_droid, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
        _droid call FUNC(moveB2);
    };
    default {
        ["MINEDETECTION", "SUPPRESSION", "COVER", "AIMINGERROR"] apply { _droid disableAI _x };
        _droid call FUNC(handleAnimB1);
    };
};