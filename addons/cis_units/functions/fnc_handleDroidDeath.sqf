#include "script_component.hpp"

params ["_droid", "_deathAnims", "_deathSounds"];
TRACE_1("handleDroidDeath", _droid);

[_droid, "Killed", {
    params ["_droid", "_killer", "_instigator", "_useEffects"];
    _thisArgs params ["_deathAnims", "_deathSounds"];

    private _arStart = _droid getVariable "WBK_DT_PathFindingObjects";
    if (!isNil "_arStart") then { deleteVehicle _arStart };

    // Pick a random death sound and animation for our droid
    LOG_1("(handleDroidDeath) [%1]: Playing random death sound...", _droid);
    [_droid, selectRandom _deathSounds, 90, 10] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
    private _anim = selectRandom _deathAnims;

    // Reset the move and action states of our droid
    LOG_1("(handleDroidDeath) [%1]: Resetting move state...", _droid);
    [_droid, _anim] remoteExec ["switchMove", 0];
    _droid playActionNow "Disable_Gesture";

    // Set animation coefficients for variants
    switch (_anim) do {
        case "B1_Droid_die_2": { [_droid, 0.8] remoteExec ["setAnimSpeedCoef", 0] };
        case "B1_Droid_die_3": { [_droid, 0.5] remoteExec ["setAnimSpeedCoef", 0] };
    };

    [_droid, {
        private _particlesSpark = "#particlesource" createVehicleLocal (getposATL _this);
        _particlesSpark setParticleParams [
            ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 4, 11, 4], // sprite name
            "", // animation name
            "Billboard", // type
            0.5, 1.4, // timer period and fadeout timer
            [0, 0, 0], // position
            [3, 3, 3], // move velocity
            5, 1, 0.35, 0.80, //r ot vel, weight, volume, rubbing
            [0.08, 0.01], // size transform
            [[1, 1, 1, 0], [0.1, 0.1, 0.1, -4], [0, 0, 0, -4],[1, 1, 1, 1]], // color and transperency
            [1000], // animation phase speed
            0.2, // randomdirection period
            0.9, // randomization intensity
            "", // onTimer
            "", // beforeDestroy
            "", // object
            360, // angle
            false, // on the surface
            0 // bounce
        ];
        _particlesSpark setDropInterval 0.001;
        _particlesSpark attachTo [_this, [0.3, 0, 0.04], "spine2"];

        [{ deleteVehicle _this }, _particlesSpark, 0.1] call CBA_fnc_waitAndExecute;
    }] remoteExecCall ["call", [0, -2] select isDedicated, false];

    [GETVAR(_droid, GVAR(droidAnimPFH), -1)] call CBA_fnc_removePerFrameHandler;
    SETVAR(_droid, GVAR(droidAnimPFH), -1);

    [GETVAR(_droid, GVAR(droidMeleePFH), -1)] call CBA_fnc_removePerFrameHandler;
    SETVAR(_droid, GVAR(droidMeleePFH), -1);

    ["Fired", GETVAR(_droid, GVAR(droidFireEH), -1)] call CBA_fnc_removeEventHandler;
    SETVAR(_droid, GVAR(droidFireEH), -1);

    ["PathCalculated", GETVAR(_droid, GVAR(droidPathEH), -1)] call CBA_fnc_removeEventHandler;
    SETVAR(_droid, GVAR(droidPathEH), -1);

    ["HandleDamage", GETVAR(_droid, GVAR(droidDamageEH), -1)] call CBA_fnc_removeEventHandler;
    SETVAR(_droid, GVAR(droidDamageEH), -1);

    ["Killed", _thisEventHandler] call CBA_fnc_removeEventHandler;
}, [_deathAnims, _deathSounds]] call CBA_fnc_addBISEventHandler;