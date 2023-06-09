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
        init = QUOTE(call COMPILE_FILE(XEH_postInit); call FUNC(clientInit));
    };
};

class Extended_FiredBIS_EventHandlers {
	class All {
		server_fired_eh = QUOTE(_this call FUNC(adjustGrenadePhysics));
	};
};