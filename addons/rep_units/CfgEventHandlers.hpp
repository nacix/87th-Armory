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

	SET_RANK(87th_Clone_Captain, SCO, CPT)
	SET_RANK(87th_Clone_Commander, CMDR, CC)
	SET_RANK(87th_Clone_Corporal, NCO, CP)
	SET_RANK(87th_Clone_Jumper, SPC, CT)
	SET_RANK(87th_Clone_Lieutenant, JCO, CLT)
	SET_RANK(87th_Clone_Major, SCO, CMJ)
	SET_RANK(87th_Clone_Sergeant, NCO, CS)
	SET_RANK(87th_Clone_SergeantMajor, SNCO, CSM)

	SET_RANK(87th_Clone_P1_Captain, SCO, CPT)
	SET_RANK(87th_Clone_P1_Commander, CMDR, CC)
	SET_RANK(87th_Clone_P1_Corporal, NCO, CP)
	SET_RANK(87th_Clone_P1_Lieutenant, JCO, CLT)

	SET_RANK(87th_ARF_DC15S, SPC, VCT)
	SET_RANK(87th_ARF_Sniper, SPC, VCT)
	SET_RANK(87th_ARF_Spotter, SPC, VCT)
	SET_RANK(87th_ARF_JTAC, SPC, VCT)
	SET_RANK(87th_ARF_AT, SPC, VCT)
	SET_RANK(87th_ARF_CLS, SPC, VCT)
	SET_RANK(87th_ARF_Major, CMDR, CMJ)

	SET_RANK(87th_AB_DC15C, SPC, SCT)
	SET_RANK(87th_AB_DC15LE, SPC, SCT)
	SET_RANK(87th_AB_DC15LE_UGL, SPC, SCT)
	SET_RANK(87th_AB_AT, SPC, SCT)
	SET_RANK(87th_AB_AR, SPC, SCT)
	SET_RANK(87th_AB_CLS, SPC, SCT)

	SET_RANK(87th_ARC_DC15S, SPC, CS)
	SET_RANK(87th_ARC_Westar, SPC, CS)
	SET_RANK(87th_ARC_GL, SPC, CS)
	SET_RANK(87th_ARC_AT, SPC, CS)
	SET_RANK(87th_ARC_EOD, SPC, CS)
	SET_RANK(87th_ARC_Medic, SPC, CS)
	SET_RANK(87th_ARC_JTAC, SPC, CS)
	SET_RANK(87th_ARC_Sniper, SPC, CS)
	SET_RANK(87th_ARC_Lieutenant, SCO, CLT)

	SET_RANK(87th_RC_DC17M, SPC, RC)
	SET_RANK(87th_RC_NCO, NCO, RC)
	SET_RANK(87th_RC_Tech, SPC, RC)
	SET_RANK(87th_RC_Demo, SPC, RC)
	SET_RANK(87th_RC_Sniper, SPC, RC)

	SET_RANK(87th_Clone_Pilot, CT, CX)
};