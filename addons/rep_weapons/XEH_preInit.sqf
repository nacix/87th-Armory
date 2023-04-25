#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

[
	QGVAR(enabled),
	"CHECKBOX",
	["Enable", "Toggles whether or not one-handing should be possible"],
	["87th Legion - Sidearms", "[1] - Global Settings"],
	true,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_enabled' (one-handing) set to [%1] on client [%2]",_this,player);
	
		if (_this) then {
			if (GETVAR(player,GVAR(featureCameraEH),-1) == -1) then {
				LOG_1("Client [%1]: Reinitializing one-handing handler and attempting handPos update",player);
				player call FUNC(handleOneHanding);
				[player, true] call FUNC(setHandPos);
			};
		} else {
			LOG_1("Client [%1]: Disabling all one-handing functionality",player);
			if (currentWeapon player isEqualTo handgunWeapon player && GETVAR(player,GVAR(usingOneHand),false)) then {
				LOG_1("Unit [%1]: Preparing to disable one-handing...",player);
				[player, false] call FUNC(setHandPos);
			};
		};
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(allowOneHandWalking),
	"CHECKBOX",
	["Allow Walking", "Toggles whether or not one-handing should be possible while walking"],
	["87th Legion - Sidearms", "[2] - Client Settings"],
	false,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_allowOneHandWalking' set to [%1] on client [%2]",_this,player);
		if ((!GETGVAR(enabled,true) && !GETVAR(player,GVAR(usingOneHand),true)) || vehicle player isNotEqualTo player) exitWith {};

		if (_this) then {
			LOG_2("Client [%1]: Calling handPos with value [%2] (allowOneHandWalking enabled)",player,true);
			SETVAR(player,GVAR(isUnitWalking),false);
			[player, true] call FUNC(setHandPos);
		} else {
			LOG_2("Client [%1]: Calling handPos with value [%2] (allowOneHandWalking disabled)",player,!(isWalking player));
			SETVAR(player,GVAR(isUnitWalking),isWalking player);
			[player, !(isWalking player)] call FUNC(setHandPos);
		};
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(useTagWhitelist),
	"CHECKBOX",
	["Whitelist Mode", "Replaces default mode (blacklist) with a whitelist system. This means any tag NOT listed below will not support one-handing."],
	["87th Legion - Sidearms", "[3] - Tag Settings"],
	true,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_useTagWhitelist' set to [%1] on client [%2]",_this,player);
		private _weapon = currentWeapon player;
		private _wepAddonTag = toLower (_weapon select [0, _weapon find "_"]);
		/*
		if (_wepAddonTag in GVAR(tagList)) then {
			if (_this) then {
				SETVAR(player,GVAR(weaponAllowed),true);
				if (!GETVAR(player,GVAR(usingOneHand),false)) then {
					[player, true] call FUNC(setHandPos);
				};
			} else {
				SETVAR(player,GVAR(weaponAllowed),false);
				if (GETVAR(player,GVAR(usingOneHand),false)) then {
					[player, false] call FUNC(setHandPos);
				};
			};
		};
		*/
	},
	false
] call CBA_fnc_addSetting;
[
	QGVAR(tagList),
	"EDITBOX",
	["Target Tags", "Tags that should be white/blacklisted for one-handing. Separate entries with a comma. Tags can be found at the start of any weapon's ID in the arsenal. Ex: ""rhs"", ""cup"", ""wbk"")"],
	["87th Legion - Sidearms", "[3] - Tag Settings"],
	"wbk",
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_tagList' set to [%1] on client [%2]",_this,player);
		if ((trim _this) isEqualTo "") exitWith { GVAR(tagList) = [""] };

		private _tagArray = ([trim toLower _this, ","] call CBA_fnc_split) apply { trim _x };

		GVAR(tagList) = _tagArray;
	},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(useWeaponWhitelist),
	"CHECKBOX",
	["Whitelist Mode", "Replaces default mode (blacklist) with a whitelist system. This means any weapon NOT listed below will not support one-handing."],
	["87th Legion - Sidearms", "[4] - Weapon Settings"],
	true,
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_useWeaponWhitelist' set to [%1] on client [%2]",_this,player);
		private _weapon = currentWeapon player;
		/*
		if (_weapon in GVAR(weaponList)) then {
			if (_this) then {
				SETVAR(player,GVAR(weaponAllowed),true);
				if (!GETVAR(player,GVAR(usingOneHand),false)) then {
					[player, true] call FUNC(setHandPos);
				};
			} else {
				SETVAR(player,GVAR(weaponAllowed),false);
				if (GETVAR(player,GVAR(usingOneHand),false)) then {
					[player, false] call FUNC(setHandPos);
				};
			};
		};
		*/
	},
	false
] call CBA_fnc_addSetting;
[
	QGVAR(weaponList),
	"EDITBOX",
	["Target Weapons", "Weapons that should be white/blacklisted for one-handing. Separate entries with a comma. A weapon's ID is shown when hovering over it in the arsenal. Ex: ""arifle_MX_F"", ""arifle_MXM_F"""],
	["87th Legion - Sidearms", "[4] - Weapon Settings"],
	"",
	0,
	{
		LOG_2("Setting 'ax87_rep_weapons_weaponList' set to [%1] on client [%2]",_this,player);

		if ((trim _this) isEqualTo "") exitWith { GVAR(weaponList) = [""] };

		private _weaponArray = ([trim toLower _this, ","] call CBA_fnc_split) apply { trim _x };

		GVAR(weaponList) = _weaponArray;
	},
	false
] call CBA_fnc_addSetting;