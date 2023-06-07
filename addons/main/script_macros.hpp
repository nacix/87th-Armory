#ifdef __A3_DEBUG__
    #define DEBUG_MODE_FULL
#endif

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))
#define GETMVAR(var1,var2) (missionNamespace GETVAR_SYS(var1,var2))
#define GETUVAR(var1,var2) (uiNamespace GETVAR_SYS(var1,var2))
#define GETPRVAR(var1,var2) (profileNamespace GETVAR_SYS(var1,var2))
#define GETPAVAR(var1,var2) (parsingNamespace GETVAR_SYS(var1,var2))

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define SET_OBJVAR(owner,variable,value) GETVAR(owner,GVAR(variable),value)
#define GET_OBJVAR(owner,variable,default) GETVAR(owner,GVAR(variable),default)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) (if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT})

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QPATHTOF(folder\__PREP__.sqf)

#define TAG_NAME(rawName) QUOTE(TAG_BR rawName)

#define NEW_CLASS(className) class TAG_CLASS(className)
#define TAG_CLASS(className) TAG##_##className
#define CLASS(className) QUOTE(TAG_CLASS(className))

#define CATEGORY(categoryName) QUOTE(TITLE - categoryName)

#define SKILLTYPES ["aimingAccuracy", "aimingShake", "spotDistance", "spotTime", "courage", "commanding", "aimingSpeed", "general", "endurance", "reloadSpeed"]

#define POINTER(unit, weapon) ((unit weaponAccessories weapon) select 1)

#define INVISIBLE(pointer) ((configFile >> "CfgWeapons" >> pointer >> "ItemInfo" >> "Pointer" >> "isIR") call BIS_fnc_getCfgData isEqualTo 1)
#define VISIBLE(pointer) ((configFile >> "CfgWeapons" >> pointer >> "ItemInfo" >> "Pointer" >> "isIR") call BIS_fnc_getCfgData isEqualTo 0)
#define HASLASER(attachment) not isNil {(configFile >> "CfgWeapons" >> attachment >> "ItemInfo" >> "Pointer" >> "isIR") call BIS_fnc_getCfgData}

#define WEAPONS(primaryWeapon,secondaryWeapon,launcherWeapon,binocularWeapon) \
    weapons[]= \
    { \
        #if primaryWeapon \
        #else \
            QUOTE(primaryWeapon), \
        #endif \
        #if secondaryWeapon \
        #else \
            QUOTE(secondaryWeapon), \
        #endif \
        #if launcherWeapon \
        #else \
            QUOTE(launcherWeapon), \
        #endif \
        #if binocularWeapon \
        #else\
            QUOTE(binocularWeapon), \
        #endif \
        "Throw", \
        "Put" \
    }; \
    respawnWeapons[]= \
    { \
        #if primaryWeapon \
        #else \
            QUOTE(primaryWeapon), \
        #endif \
        #if secondaryWeapon \
        #else \
            QUOTE(secondaryWeapon), \
        #endif \
        #if launcherWeapon \
        #else \
            QUOTE(launcherWeapon), \
        #endif \
        #if binocularWeapon \
        #else \
            QUOTE(binocularWeapon), \
        #endif \
        "Throw", \
        "Put" \
    };

#define EQUIPMENT(helmet,vest,back,nvg,comms) \
    linkedItems[]= \
	{ \
        #if helmet \
        #else \
            QUOTE(helmet), \
        #endif \
        #if vest \
        #else \
            QUOTE(vest), \
        #endif \
        #if nvg \
        #else \
            QUOTE(nvg), \
        #endif \
        #if comms  \
        #else \
            QUOTE(comms), \
        #endif \
        "ItemMap", \
        "ItemCompass", \
        "ItemWatch" \
    }; \
    respawnLinkedItems[]= \
    { \
        #if helmet \
        #else \
            QUOTE(helmet), \
        #endif \
        #if vest \
        #else \
            QUOTE(vest), \
        #endif \
        #if nvg \
        #else \
            QUOTE(nvg), \
        #endif \
        #if comms  \
        #else \
            QUOTE(comms), \
        #endif \
        "ItemMap", \
        "ItemCompass", \
        "ItemWatch" \
    }; \
    #if back \
    #else \
        backpack = QUOTE(back);
    #endif

#define PREVIEW(className) editorPreview = QPATHTOF(data\ui\editorPreviews\TAG_CLASS(className).jpg);

#define IDENTITY(factionID,category,uniform,className) \
    PREVIEW(className) \
    faction = CLASS(factionID); \
    editorSubcategory = CLASS(category); \
    uniformClass = QUOTE(uniform);

#define LIST_1(item) \
    QUOTE(item)
#define LIST_2(item) \
    QUOTE(item), \
    QUOTE(item)
#define LIST_3(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_4(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_5(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_6(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_7(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_8(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_9(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_10(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_11(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)
#define LIST_12(item) \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item), \
    QUOTE(item)