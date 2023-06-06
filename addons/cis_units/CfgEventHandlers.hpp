class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_InitPost_EventHandlers {
    class TAG_CLASS(Droid_B1_E5) {
        init = QUOTE([ARR_2(_this select 0, 0.4)] call FUNC(initDroid); (_this select 0) setVariable [ARR_3('RNG_disabled',true,true)]);
    };
    class TAG_CLASS(Droid_B2) {
        init = QUOTE([ARR_2(_this select 0, 0.6)] call FUNC(initDroid); (_this select 0) setVariable [ARR_3('RNG_disabled',true,true)]);
    };
    class TAG_CLASS(Droid_BX) {
        init = QUOTE([ARR_2(_this select 0, 0.8)] call FUNC(initDroid); (_this select 0) setVariable [ARR_3('RNG_disabled',true,true)]);
    };
};