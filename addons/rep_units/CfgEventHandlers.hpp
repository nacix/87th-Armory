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
        init = QUOTE(call COMPILE_FILE(XEH_postInit); call FUNC(init));
    };
};

class Extended_InitPost_EventHandlers {
	class JLTS_Clone_P2_DC15A {
		initServer = QUOTE([ARR_2(_this select 0, 'CT')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_lieutenant {
		initServer = QUOTE([ARR_2(_this select 0, 'JCO')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_corporal {
		initServer = QUOTE([ARR_2(_this select 0, 'NCO')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_AT {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_marksman {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_medic {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_EOD {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class JLTS_Clone_P2_AR {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};

	class 87th_Clone_Captain {
		initServer = QUOTE([ARR_3(_this select 0, 'SCO', 'CPT')] call FUNC(initUnit));
	};
	class 87th_Clone_Commander {
		initServer = QUOTE([ARR_3(_this select 0, 'CMDR', 'CMDR')] call FUNC(initUnit));
	};
	class 87th_Clone_Corporal {
		initServer = QUOTE([ARR_3(_this select 0, 'NCO', 'CP')] call FUNC(initUnit));
	};
	class 87th_Clone_Jumper {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class 87th_Clone_Lieutenant {
		initServer = QUOTE([ARR_3(_this select 0, 'JCO', 'CLT')] call FUNC(initUnit));
	};
	class 87th_Clone_Major {
		initServer = QUOTE([ARR_3(_this select 0, 'SCO', 'CMJ')] call FUNC(initUnit));
	};
	class 87th_Clone_Sergeant {
		initServer = QUOTE([ARR_3(_this select 0, 'NCO', 'CS')] call FUNC(initUnit));
	};
	class 87th_Clone_SergeantMajor {
		initServer = QUOTE([ARR_3(_this select 0, 'SNCO', 'CSM')] call FUNC(initUnit));
	};
	class 87th_ARF_DC15S {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class 87th_ARF_Spotter {
		initServer = QUOTE([ARR_3(_this select 0, 'SPC', 'CP')] call FUNC(initUnit));
	};
	class 87th_ARF_Major {
		initServer = QUOTE([ARR_3(_this select 0, 'CMDR', 'CMJ')] call FUNC(initUnit));
	};
	class 87th_AB_DC15C {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class 87th_AB_DC15LE {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class 87th_AB_DC15LE_UGL {
		initServer = QUOTE([ARR_2(_this select 0, 'SPC')] call FUNC(initUnit));
	};
	class 87th_RC_DC17M {
		initServer = QUOTE([ARR_3(_this select 0, 'SPC', 'RC')] call FUNC(initUnit));
	};
	class 87th_RC_NCO {
		initServer = QUOTE([ARR_3(_this select 0, 'NCO', 'RC')] call FUNC(initUnit));
	};
	class 87th_RC_Tech {
		initServer = QUOTE([ARR_3(_this select 0, 'SPC', 'RC')] call FUNC(initUnit));
	};
	class 87th_RC_Demo {
		initServer = QUOTE([ARR_3(_this select 0, 'SPC', 'RC')] call FUNC(initUnit));
	};
	class 87th_RC_Sniper {
		initServer = QUOTE([ARR_3(_this select 0, 'SPC', 'RC')] call FUNC(initUnit));
	};
	class 87th_Clone_Pilot {
		initServer = QUOTE([ARR_3(_this select 0, 'CT', 'CX')] call FUNC(initUnit)); 
	};
};