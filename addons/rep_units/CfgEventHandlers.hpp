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

#define SET_RANK(className,grade,rank) \
	class className { \
		initServer = QUOTE([ARR_3(_this select 0, '##grade##', '##rank##')] call FUNC(initUnit)); \
	};

class Extended_InitPost_EventHandlers {
	SET_RANK(JLTS_Clone_P2_DC15A, CT, CT)
	SET_RANK(JLTS_Clone_P2_lieutenant, JCO, CLT)
	SET_RANK(JLTS_Clone_P2_corporal, NCO, CP)
	SET_RANK(JLTS_Clone_P2_AT, SPC, CT)
	SET_RANK(JLTS_Clone_P2_marksman, SPC, CT)
	SET_RANK(JLTS_Clone_P2_medic, SPC, CT)
	SET_RANK(JLTS_Clone_P2_EOD, SPC, CT)
	SET_RANK(JLTS_Clone_P2_AR, SPC, CT)

	SET_RANK(Clone_Captain, SCO, CPT)
	SET_RANK(Clone_Commander, CMDR, CC)
	SET_RANK(Clone_Corporal, NCO, CP)
	SET_RANK(Clone_Jumper, SPC, CT)
	SET_RANK(Clone_Lieutenant, JCO, CLT)
	SET_RANK(Clone_Major, SCO, CMJ)
	SET_RANK(Clone_Sergeant, NCO, CS)
	SET_RANK(Clone_SergeantMajor, SNCO, CSM)

	SET_RANK(Clone_P1_Captain, SCO, CPT)
	SET_RANK(Clone_P1_Commander, CMDR, CC)
	SET_RANK(Clone_P1_Corporal, NCO, CP)
	SET_RANK(Clone_P1_Lieutenant, JCO, CLT)

	SET_RANK(ARF_DC15S, SPC, VCT)
	SET_RANK(ARF_Sniper, SPC, VCT)
	SET_RANK(ARF_Spotter, SPC, VCT)
	SET_RANK(ARF_JTAC, SPC, VCT)
	SET_RANK(ARF_AT, SPC, VCT)
	SET_RANK(ARF_CLS, SPC, VCT)
	SET_RANK(ARF_Major, CMDR, CMJ)

	SET_RANK(AB_DC15C, SPC, SCT)
	SET_RANK(AB_DC15LE, SPC, SCT)
	SET_RANK(AB_DC15LE_UGL, SPC, SCT)
	SET_RANK(AB_AT, SPC, SCT)
	SET_RANK(AB_AR, SPC, SCT)
	SET_RANK(AB_CLS, SPC, SCT)

	SET_RANK(ARC_DC15S, SPC, CS)
	SET_RANK(ARC_Westar, SPC, CS)
	SET_RANK(ARC_GL, SPC, CS)
	SET_RANK(ARC_AT, SPC, CS)
	SET_RANK(ARC_EOD, SPC, CS)
	SET_RANK(ARC_Medic, SPC, CS)
	SET_RANK(ARC_JTAC, SPC, CS)
	SET_RANK(ARC_Sniper, SPC, CS)
	SET_RANK(ARC_Lieutenant, SCO, CLT)

	SET_RANK(RC_DC17M, SPC, RC)
	SET_RANK(RC_NCO, NCO, RC)
	SET_RANK(RC_Tech, SPC, RC)
	SET_RANK(RC_Demo, SPC, RC)
	SET_RANK(RC_Sniper, SPC, RC)

	SET_RANK(Clone_Pilot, CT, CX)
};