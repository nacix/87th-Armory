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
    class 87th_Droid_B1_E5 {
        init = QUOTE([(_this select 0)] call FUNC(initDroid));
    };
    class 87th_Droid_B2 {
        init = QUOTE([_this select 0] call FUNC(initDroid));
    };
};