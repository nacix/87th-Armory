#include "script_component.hpp"

params ["_droid"];
TRACE_1("initDroid", _droid);

switch (typeOf _droid) do {
    case CLASS(Droid_B2): {
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
_droid setSkill 0.3;
_droid setVariable ["disableUnitSFX", 1, true]; // Disables SFX on our droid
_droid setUnitPos "UP"; // Forces our droid to stand (at least until it gets overridden from another AI mod)

// Call damage handler script
_droid call FUNC(handleDroidDamage);

// Call script to handle firing events
_droid call FUNC(droidFire);

switch (typeOf _droid) do {
    case CLASS(Droid_B2): { 
        // Set droid idle animation
        [_droid, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];

        // Make call to pathfinding script
        _droid call FUNC(moveB2);
    };
    default {
        // Disable conflicting AI features
        ["MINEDETECTION", "SUPPRESSION", "COVER", "AIMINGERROR"] apply { _droid disableAI _x };

        // Add PFH to await detonator suicide attempt (2s interval)
        _droid call FUNC(handleAnimB1);
    };
};

// Add PFH to await melee opportunity
_droid call FUNC(handleDroidMelee);