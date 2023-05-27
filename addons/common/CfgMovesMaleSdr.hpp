class CfgMovesBasic;

class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";

	class Default;
	class TransAnimBase;
	class acinpercmrunsnonwnondb;
	class acinpercmrunsnonwnondbl;
	class acinpercmrunsnonwnondbr;
	class acinpercmrunsnonwnondf;
	class acinpercmrunsnonwnondf_amovpercmstpsnonwnondnon;
	class acinpercmrunsnonwnondfl;
	class acinpercmrunsnonwnondfr;
	class acinpercmrunsnonwnondl;
	class acinpercmrunsnonwnondr;
	class acinpercmstpsnonwnondnon;
	class acinpercmstpsnonwnondnon_agony;
	class acinpknlmstpsnonwnondnon_acinpercmrunsnonwnondnon;
	class acinpknlmstpsnonwnondnon_amovpknlmstpsnonwnondnon;
	class acinpknlmstpsraswrfldnon;
	class acinpknlmwlksnonwnondb_agony;
	class acinpknlmwlksnonwnondb_amovpercmstpsnonwnondnon;
	class acinpknlmwlksnonwnondb_death;
	class acinpknlmwlksraswrfldb;
	class amovpercmstpsnonwnondnon_acinpknlmwlksnonwnondb_1;
	class amovpercmstpsnonwnondnon_acinpknlmwlksnonwnondb_2;
	class amovpercmstpsoptwbindnon;
	class amovpknlmstpsoptwbindnon;
	class transanimbase_noik;
	class AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground;
	class AmovPknlMstpSrasWrflDnon;
	class AmovPercMstpSrasWrflDnon;
	
	class AmovPknlMstpSlowWpstDnon;
	class AmovPknlMstpSlowWpstDnon_turnL;
	class AmovPknlMstpSlowWpstDnon_turnR;

	class StandBase;

	class SprintBaseDf;
	class SprintBaseDfl;
	class SprintBaseDfr;
	class SprintCivilBaseDf;
	class SprintCivilBaseDfl;
	class SprintCivilBaseDfr;

	class AidlPpneMstpSrasWpstDnon_G0S;

	class BlendAnims
	{
		AX87_combat_arms[]=
		{
			"weapon",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1,
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandRing",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"Spine",
			0.1,
			"Spine1",
			0.1,
			"Spine2",
			0.89999998,
			"Spine3",
			0.89999998
		};
	};

	class States
	{
		class AmovPercMstpSrasWpstDnon: StandBase
		{
			variantsPlayer[]=
			{
				"AidlPercMstpSrasWpstDnon_G01_player",
				0.333,
				"AidlPercMstpSrasWpstDnon_G02_player",
				0.333,
				"AidlPercMstpSrasWpstDnon_G03_player",
				0.33399999
			};
			variantAfter[] = {15,15,15};
			actions = "PistolStandActions";
			duty = -0.40000001;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon";
			disableWeapons = 0;
			showHandGun = 1;
			speed = 1e+010;
			static = 1;
			relSpeedMin = 0.5;
			relSpeedMax = 1.1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			weaponIK = 2;
			enableOptics = 2;
			headBobStrength = 0.054726001;
			interpolationSpeed = 4;
			canBlendStep = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AovrPercMstpSrasWpstDf",
				0.025,
				"AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon",
				0.0099999998,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.02,
				"PistolMagazineReloadStand",
				0.1,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_SaluteIn",
				0.02,
				"AwopPercMstpSgthWpstDnon_Part1",
				0.1,
				"AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1",
				0.0099999998,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon_gear",
				0.02,
				"Acts_starterPistol_in",
				0.001
			};
			InterpolateTo[]=
			{
				"amovpercmstpslowwpstdnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1",
				0.0099999998,
				"AmovPercMwlkSrasWpstDf",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.02,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMrunSrasWpstDbl",
				0.02,
				"AmovPercMrunSrasWpstDb",
				0.02,
				"AmovPercMrunSrasWpstDbr",
				0.02,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDl",
				0.02,
				"AmovPercMevaSrasWpstDr",
				0.02,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWpstDf",
				0.02,
				"AmovPercMtacSrasWpstDfl",
				0.02,
				"AmovPercMtacSrasWpstDl",
				0.02,
				"AmovPercMtacSrasWpstDbl",
				0.02,
				"AmovPercMtacSrasWpstDb",
				0.02,
				"AmovPercMtacSrasWpstDbr",
				0.02,
				"AmovPercMtacSrasWpstDr",
				0.02,
				"AmovPercMtacSrasWpstDfr",
				0.02,
				"Helper_SwitchToCarrynon_pst",
				0.2,
				"HaloFreeFall_non",
				10.2,
				"AmovPercMstpSrasWpstDnon_falling",
				0.02,
				"AinvPercMstpSrasWrflDnon",
				0.050000001,
				"AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon_Putdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"LadderCivilOn_top",
				1,
				"LadderCivilOn_bottom",
				1,
				"AfalPercMstpSrasWpstDnon",
				0.025,
				"Campaign_Base",
				0.5,
				"CutSceneAnimationBase",
				0.5,
				"Acts_WarmupBase",
				0.1,
				"Acts_WarmupBaseKneel",
				0.1
			};
		};
		class AidlPercMstpSrasWpstDnon_G0S: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AidlPercMstpSrasWpstDnon_G01",
				0.02,
				"AidlPercMstpSrasWpstDnon_G02",
				0.02,
				"AidlPercMstpSrasWpstDnon_G03",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"AidlPercMstpSrasWpstDnon_G0S",
				0.2
			};
		};
		class AidlPercMstpSrasWpstDnon_AI: AidlPercMstpSrasWpstDnon_G0S
		{
			variantsAI[]=
			{
				"AidlPercMstpSrasWpstDnon_G01",
				0.333,
				"AidlPercMstpSrasWpstDnon_G02",
				0.333,
				"AidlPercMstpSrasWpstDnon_G03",
				0.33399999
			};
		};
		class AidlPercMstpSrasWpstDnon_G01: AidlPercMstpSrasWpstDnon_G0S
		{
			speed = -15;
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G01";
			ConnectTo[]=
			{
				"AidlPercMstpSrasWpstDnon_G0S",
				0.02
			};
			InterpolateTo[]=
			{
				"AidlPercMstpSrasWpstDnon_G0S",
				0.2,
				"Unconscious",
				0.0099999998,
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
		};
		class AidlPercMstpSrasWpstDnon_G02: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G02";
		};
		class AidlPercMstpSrasWpstDnon_G03: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G03";
		};
		class AidlPercMstpSrasWpstDnon_G01_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G01_player";
		};
		class AidlPercMstpSrasWpstDnon_G02_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G02_player";
		};
		class AidlPercMstpSrasWpstDnon_G03_player: AidlPercMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\ras\pst\AidlPercMstpSrasWpstDnon_G03_player";
		};
		class AovrPercMstpSrasWpstDf: AidlPercMstpSrasWpstDnon_G0S
		{
			stamina = 0;
			looped = 0;
			speed = 0.347368;
			file = "\A3\anims_f\Data\Anim\Sdr\ovr\erc\stp\ras\pst\AovrPercMstpSrasWpstDf";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			static = 1;
			relSpeedMin = 0.5;
			relSpeedMax = 1;
			duty = 1;
			canBlendStep = 0;
			enableOptics = 0;
			headBobStrength = 0.23;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_falling: AmovPercMstpSrasWpstDnon
		{
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AdvePercMstpSnonWnonDnon",
				0.02,
				"AswmPercMstpSnonWnonDnon",
				0.029999999,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup";
			speed = -0.2;
			actions = "PistolAdjustFStandActions";
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			adjstance = "u";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown";
			speed = -0.2;
			actions = "PistolAdjustBStandActions";
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			adjstance = "d";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft";
			speed = -0.30000001;
			actions = "PistolAdjustLStandActions";
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			adjstance = "l";
			soundEnabled = 1;
			soundOverride = "adjust_stand_side";
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright";
			speed = -0.30000001;
			actions = "PistolAdjustRStandActions";
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			adjstance = "r";
			soundEnabled = 1;
			soundOverride = "adjust_stand_side";
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDup: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDup";
			speed = 0.037500001;
			actions = "PistolAdjustFStandActions";
			aimPrecision = 1;
			adjstance = "u";
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDup_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPercMstpSrasWpstDup",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"AadjPercMstpSrasWpstDup_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDup_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDup_AmovPercMstpSrasWpstDnon";
			speed = -0.2;
			limitgunmovement = 1;
			adjstance = "m";
			soundEnabled = 1;
			soundOverride = "adjust_short";
			soundEdge[] = {0.0099999998};
		};
		class AadjPercMstpSrasWpstDdown: AadjPercMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDdown";
			speed = 0.032432001;
			actions = "PistolAdjustBStandActions";
			adjstance = "d";
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPercMstpSrasWpstDdown",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"AadjPercMstpSrasWpstDdown_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDDown_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDdown_AmovPercMstpSrasWpstDnon";
			speed = -0.2;
			actions = "PistolStandActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundEnabled = 1;
			soundOverride = "adjust_short";
			soundEdge[] = {0.0099999998};
		};
		class AadjPercMstpSrasWpstDleft: AadjPercMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDleft";
			speed = 0.037795;
			actions = "PistolAdjustLStandActions";
			adjstance = "l";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_AdjL.p3d";
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDleft_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPercMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon",
				0.02,
				"AadjPercMstpSrasWpstDleft",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"AadjPercMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstdleft_AmovPercMstpSrasWpstDnon";
			speed = -0.2;
			actions = "PistolStandActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundEnabled = 1;
			soundOverride = "adjust_stand_side";
			soundEdge[] = {0.0099999998};
		};
		class AadjPercMstpSrasWpstDright: AadjPercMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDright";
			speed = 0.037795;
			actions = "PistolAdjustRStandActions";
			adjstance = "r";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_AdjR.p3d";
			ConnectTo[]=
			{
				"AadjPercMstpSrasWpstDright_AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPercMstpSrasWpstDright_AmovPercMstpSrasWpstDnon",
				0.02,
				"AadjPercMstpSrasWpstDright",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright_AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"AadjPercMstpSrasWpstDright_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDright_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Erc\stp\ras\pst\AadjPercMstpSrasWpstDright_AmovPercMstpSrasWpstDnon";
			speed = -0.2;
			actions = "PistolStandActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AmovPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon
		{
			duty = -0.60000002;
			variantsPlayer[]=
			{
				"AidlPercMstpSnonWnonDnon_G01",
				0.333,
				"AidlPercMstpSnonWnonDnon_G02",
				0.333,
				"AidlPercMstpSnonWnonDnon_G03",
				0.33399999
			};
			actions = "PistolLowStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon";
			showWeaponAim = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			headBobStrength = 0.23;
			disableWeaponsLong = 1;
			weaponLowered = 1;
			enableOptics = 0;
			ConnectTo[]=
			{
				"AovrPercMstpSlowWpstDf",
				0.0099999998,
				"AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1",
				0.0099999998,
				"AmovPercMstpSlowWpstDnon_turnL",
				0.5,
				"AmovPercMstpSlowWpstDnon_turnR",
				0.5,
				"AmovPercMstpSlowWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1",
				0.0099999998,
				"AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSlowWpstDnon_turnL",
				0.5,
				"AmovPercMstpSlowWpstDnon_turnR",
				0.5,
				"AmovPercMwlkSlowWpstDf",
				0.02,
				"AmovPercMwlkSlowWpstDfl",
				0.02,
				"AmovPercMwlkSlowWpstDl",
				0.02,
				"AmovPercMwlkSlowWpstDbl",
				0.02,
				"AmovPercMwlkSlowWpstDb",
				0.02,
				"AmovPercMwlkSlowWpstDbr",
				0.02,
				"AmovPercMwlkSlowWpstDr",
				0.02,
				"AmovPercMwlkSlowWpstDfr",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.02,
				"AmovPercMtacSlowWpstDfl",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.02,
				"AmovPercMtacSlowWpstDbl",
				0.02,
				"AmovPercMtacSlowWpstDb",
				0.02,
				"AmovPercMtacSlowWpstDbr",
				0.02,
				"AmovPercMtacSlowWpstDr",
				0.02,
				"AmovPercMtacSlowWpstDfr",
				0.02,
				"AmovPercMrunSlowWpstDf",
				0.02,
				"AmovPercMrunSlowWpstDfl",
				0.02,
				"AmovPercMrunSlowWpstDl",
				0.02,
				"AmovPercMrunSlowWpstDbl",
				0.02,
				"AmovPercMrunSlowWpstDb",
				0.02,
				"AmovPercMrunSlowWpstDbr",
				0.02,
				"AmovPercMrunSlowWpstDr",
				0.02,
				"AmovPercMrunSlowWpstDfr",
				0.02,
				"AmovPercMevaSlowWpstDf",
				0.02,
				"AmovPercMevaSlowWpstDfl",
				0.02,
				"AmovPercMevaSlowWpstDfr",
				0.02,
				"Unconscious",
				0.1,
				"Helper_SwitchToCarrynon_pst",
				0.2,
				"LadderCivilOn_top",
				1,
				"LadderCivilOn_bottom",
				1,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",
				0.02
			};
		};
		class AidlPercMstpSlowWpstDnon_G0S: AmovPercMstpSlowWpstDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AidlPercMstpSlowWpstDnon_G01",
				0.02,
				"AidlPercMstpSlowWpstDnon_G02",
				0.02,
				"AidlPercMstpSlowWpstDnon_G03",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"AidlPercMstpSlowWpstDnon_G0S",
				0.2
			};
		};
		class AidlPercMstpSlowWpstDnon_AI: AidlPercMstpSlowWpstDnon_G0S
		{
			variantsAI[]=
			{
				"AidlPercMstpSlowWpstDnon_G01",
				0.333,
				"AidlPercMstpSlowWpstDnon_G02",
				0.333,
				"AidlPercMstpSlowWpstDnon_G03",
				0.33399999
			};
		};
		class AmovPercMstpSlowWpstDnon_turnL: AidlPercMstpSlowWpstDnon_G0S
		{
			duty = -0.40000001;
			file = "a3\anims_f\data\anim\sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_aiturn90r";
			speed = 0.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSlowWpstDnon_turnR: AidlPercMstpSlowWpstDnon_G0S
		{
			duty = -0.40000001;
			file = "a3\anims_f\data\anim\sdr\mov\erc\stp\non\non\amovpercmstpsnonwnondnon_aiturn90l";
			speed = 0.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AidlPercMstpSlowWpstDnon_G01: AidlPercMstpSlowWpstDnon_G0S
		{
			speed = -15;
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_G01";
			ConnectTo[]=
			{
				"AidlPercMstpSlowWpstDnon_G0S",
				0.02
			};
			InterpolateTo[]=
			{
				"AidlPercMstpSlowWpstDnon_G0S",
				0.2,
				"Unconscious",
				0.0099999998,
				"AmovPercMstpSlowWpstDnon",
				0.02
			};
		};
		class AidlPercMstpSlowWpstDnon_G02: AidlPercMstpSlowWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_G02";
		};
		class AidlPercMstpSlowWpstDnon_G03: AidlPercMstpSlowWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\erc\stp\low\pst\AidlPercMstpSlowWpstDnon_G03";
		};
		class AovrPercMstpSlowWpstDf: AovrPercMstpSrasWpstDf
		{
			ConnectTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			speed = 1.66667;
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon";
			interpolationRestart = 2;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AidlPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\low\pst\AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.7647099;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_turnL: AmovPercMstpSrasWpstDnon
		{
			duty = -0.2;
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AIturn90L";
			speed = 1.3;
			aimPrecision = 3;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_turn.p3d";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_turnR: AmovPercMstpSrasWpstDnon
		{
			duty = -0.2;
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AIturn90R";
			speed = 1.3;
			aimPrecision = 3;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_turn.p3d";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			aimPrecision = 0.5;
			variantsPlayer[]=
			{
				"AidlPknlMstpSrasWpstDnon_G01_player",
				0.333,
				"AidlPknlMstpSrasWpstDnon_G02_player",
				0.333,
				"AidlPknlMstpSrasWpstDnon_G03_player",
				0.33399999
			};
			actions = "PistolKneelActions";
			duty = -0.60000002;
			visibleSize = 0.30012199;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wpst.p3d";
			ConnectTo[]=
			{
				"AidlPknlMstpSrasWpstDnon_AI",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon_gear",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"PistolMagazineReloadKneel",
				0.1,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon",
				0.02,
				"AwopPknlMstpSgthWpstDnon_Part1",
				0.1,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon_gear",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AidlPknlMstpSrasWpstDnon_AI",
				0.02,
				"AinvPknlMstpSlayWpstDnon_medicIn",
				0.02,
				"AinvPknlMstpSlayWpstDnon_medicOtherIn",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPknlMwlkSrasWpstDf",
				0.02,
				"AmovPknlMwlkSrasWpstDfl",
				0.02,
				"AmovPknlMwlkSrasWpstDl",
				0.02,
				"AmovPknlMwlkSrasWpstDbl",
				0.02,
				"AmovPknlMwlkSrasWpstDb",
				0.02,
				"AmovPknlMwlkSrasWpstDbr",
				0.02,
				"AmovPknlMwlkSrasWpstDr",
				0.02,
				"AmovPknlMwlkSrasWpstDfr",
				0.02,
				"AmovPknlMrunSrasWpstDf",
				0.02,
				"AmovPknlMrunSrasWpstDfl",
				0.02,
				"AmovPknlMrunSrasWpstDl",
				0.02,
				"AmovPknlMrunSrasWpstDbl",
				0.02,
				"AmovPknlMrunSrasWpstDb",
				0.02,
				"AmovPknlMrunSrasWpstDbr",
				0.02,
				"AmovPknlMrunSrasWpstDr",
				0.02,
				"AmovPknlMrunSrasWpstDfr",
				0.02,
				"Unconscious",
				0.0099999998,
				"AovrPercMstpSrasWpstDf",
				0.029999999,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2",
				0.2,
				"AmovPknlMstpSrasWpstDnon_relax",
				0.2,
				"AinvPercMstpSrasWrflDnon",
				0.050000001,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon_Putdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AfalPknlMstpSrasWpstDnon",
				0.025,
				"Campaign_Base",
				0.0099999998
			};
		};
		class AidlPknlMstpSrasWpstDnon_G0S: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AidlPknlMstpSrasWpstDnon_G01",
				0.02,
				"AidlPknlMstpSrasWpstDnon_G02",
				0.02,
				"AidlPknlMstpSrasWpstDnon_G03",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"AidlPknlMstpSrasWpstDnon_G0S",
				0.2
			};
		};
		class AidlPknlMstpSrasWpstDnon_AI: AidlPknlMstpSrasWpstDnon_G0S
		{
			variantsAI[]=
			{
				"AidlPknlMstpSrasWpstDnon_G01",
				0.333,
				"AidlPknlMstpSrasWpstDnon_G02",
				0.333,
				"AidlPknlMstpSrasWpstDnon_G03",
				0.33399999
			};
		};
		class AidlPknlMstpSrasWpstDnon_G01: AidlPknlMstpSrasWpstDnon_G0S
		{
			speed = -15;
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G01";
			ConnectTo[]=
			{
				"AidlPknlMstpSrasWpstDnon_G0S",
				0.02
			};
			InterpolateTo[]=
			{
				"AidlPknlMstpSrasWpstDnon_G0S",
				0.2,
				"Unconscious",
				0.0099999998,
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
		};
		class AidlPknlMstpSrasWpstDnon_G02: AidlPknlMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G02";
		};
		class AidlPknlMstpSrasWpstDnon_G03: AidlPknlMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G03";
		};
		class AidlPknlMstpSrasWpstDnon_G01_player: AidlPknlMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G01_player";
		};
		class AidlPknlMstpSrasWpstDnon_G02_player: AidlPknlMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G02_player";
		};
		class AidlPknlMstpSrasWpstDnon_G03_player: AidlPknlMstpSrasWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\ras\pst\AidlPknlMstpSrasWpstDnon_G03_player";
		};
		class AmovPknlMstpSrasWpstDnon_relax: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				10.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDup: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDup";
			speed = 2.6666701;
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			ConnectTo[]=
			{
				"AadjPcrhMstpSrasWpstDup",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDup_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDdown: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDdown";
			speed = 2.8800001;
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			ConnectTo[]=
			{
				"AadjPcrhMstpSrasWpstDdown",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDdown_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDleft: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDleft";
			speed = 2.25;
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			ConnectTo[]=
			{
				"AadjPcrhMstpSrasWpstDleft",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDleft_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDright: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDright";
			speed = 2.1818199;
			limitgunmovement = 1;
			aimprecision = 1;
			looped = 0;
			ConnectTo[]=
			{
				"AadjPcrhMstpSrasWpstDright",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDright_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDup: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDup";
			aimprecision = 1;
			speed = 0.058823001;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDup_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDup_AmovPcrhMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDup_AmovPcrhMstpSrasWpstDnon";
			speed = 1.6381;
			limitgunmovement = 1;
			looped = 0;
			InterpolateTo[]=
			{
				"AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDup",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDdown: AadjPcrhMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDdown";
			speed = 0.037500001;
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDdown_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDDown_AmovPcrhMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDdown_AmovPcrhMstpSrasWpstDnon";
			speed = 2;
			limitgunmovement = 1;
			looped = 0;
			InterpolateTo[]=
			{
				"AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDdown",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDleft: AadjPcrhMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDleft";
			speed = 0.035036001;
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDleft_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDleft_AmovPcrhMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstdleft_AmovPcrhMstpSrasWpstDnon";
			speed = 1.4;
			limitgunmovement = 1;
			looped = 0;
			InterpolateTo[]=
			{
				"AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDleft",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDright: AadjPcrhMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDright";
			speed = 0.036641002;
			InterpolateTo[]=
			{
				"AadjPcrhMstpSrasWpstDright_AmovPcrhMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPcrhMstpSrasWpstDright_AmovPcrhMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\crh\stp\ras\pst\AadjPcrhMstpSrasWpstDright_AmovPcrhMstpSrasWpstDnon";
			speed = 2.1619101;
			limitgunmovement = 1;
			looped = 0;
			InterpolateTo[]=
			{
				"AmovPcrhMstpSrasWpstDnon_AadjPcrhMstpSrasWpstDright",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup";
			speed = -0.2;
			actions = "PistolAdjustFKneelActions";
			limitgunmovement = 1;
			aimprecision = 0.5;
			looped = 0;
			adjstance = "u";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown";
			speed = -0.2;
			limitgunmovement = 1;
			actions = "PistolAdjustBKneelActions";
			aimprecision = 0.5;
			looped = 0;
			adjstance = "d";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft";
			speed = -0.30000001;
			limitgunmovement = 1;
			actions = "PistolAdjustLKneelActions";
			aimprecision = 0.5;
			looped = 0;
			adjstance = "l";
			soundOverride = "adjust_stand_side";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright";
			speed = -0.30000001;
			limitgunmovement = 1;
			actions = "PistolAdjustRKneelActions";
			aimprecision = 0.5;
			looped = 0;
			adjstance = "r";
			soundOverride = "adjust_stand_side";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02
			};
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPknlMstpSrasWpstDup: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDup";
			speed = 0.058823001;
			actions = "PistolAdjustFKneelActions";
			aimprecision = 0.5;
			adjstance = "u";
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDup",
				0.02,
				"AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDup",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDup",
				0.02,
				"AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"AadjPknlMstpSrasWpstDup_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPknlMstpSrasWpstDup_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDup_AmovPknlMstpSrasWpstDnon";
			speed = -0.2;
			actions = "PistolKneelActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AadjPknlMstpSrasWpstDdown: AadjPknlMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDdown";
			speed = 0.048485;
			actions = "PistolAdjustBKneelActions";
			adjstance = "d";
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPknlMstpSrasWpstDdown_AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPknlMstpSrasWpstDdown_AadjPpneMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDdown",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDdown_AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDright",
				0.02,
				"AadjPknlMstpSrasWpstDdown_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDdown_AadjPpneMstpSrasWpstDup",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPknlMstpSrasWpstDDown_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDdown_AmovPknlMstpSrasWpstDnon";
			speed = -0.2;
			actions = "PistolKneelActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundOverride = "adjust_short";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AadjPknlMstpSrasWpstDleft: AadjPknlMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDleft";
			speed = 0.045283001;
			actions = "PistolAdjustLKneelActions";
			adjstance = "l";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_AdjL.p3d";
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDleft_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDleft",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDleft_AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"AadjPknlMstpSrasWpstDleft_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPknlMstpSrasWpstDleft_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstdleft_AmovPknlMstpSrasWpstDnon";
			speed = -0.40000001;
			actions = "PistolKneelActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AadjPknlMstpSrasWpstDright: AadjPknlMstpSrasWpstDup
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDright";
			speed = 0.034042999;
			actions = "PistolAdjustRKneelActions";
			adjstance = "r";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_AdjR.p3d";
			ConnectTo[]=
			{
				"AadjPknlMstpSrasWpstDright_AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDright",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPknlMstpSrasWpstDright_AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"AadjPknlMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AadjPknlMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			interpolationrestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Adj\Knl\stp\ras\pst\AadjPknlMstpSrasWpstDright_AmovPknlMstpSrasWpstDnon";
			speed = -0.40000001;
			actions = "PistolKneelActions";
			limitgunmovement = 1;
			adjstance = "m";
			soundOverride = "adjust_stand_side";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AmovPknlMstpSlowWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			duty = -0.80000001;
			variantAfter[] = {8,8,8};
			variantsPlayer[]=
			{
				"AidlPknlMstpSnonWnonDnon_G03",
				0.333,
				"AidlPknlMstpSnonWnonDnon_G02",
				0.333,
				"AidlPknlMstpSnonWnonDnon_G01",
				0.33399999
			};
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon";
			disableWeaponsLong = 1;
			showWeaponAim = 0;
			actions = "PistolLowKneelActions";
			weaponLowered = 1;
			enableOptics = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.0099999998,
				"AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_turnL",
				0.5,
				"AmovPknlMstpSlowWpstDnon_turnR",
				0.5,
				"AmovPknlMstpSlowWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon_turnL",
				0.5,
				"AmovPknlMstpSlowWpstDnon_turnR",
				0.5,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDf",
				0.02,
				"AmovPknlMrunSlowWpstDf",
				0.02,
				"AmovPknlMrunSlowWpstDfl",
				0.02,
				"AmovPknlMrunSlowWpstDl",
				0.02,
				"AmovPknlMrunSlowWpstDbl",
				0.02,
				"AmovPknlMrunSlowWpstDb",
				0.02,
				"AmovPknlMrunSlowWpstDbr",
				0.02,
				"AmovPknlMrunSlowWpstDr",
				0.02,
				"AmovPknlMrunSlowWpstDfr",
				0.02,
				"AmovPknlMwlkSlowWpstDfl",
				0.02,
				"AmovPknlMwlkSlowWpstDl",
				0.02,
				"AmovPknlMwlkSlowWpstDbl",
				0.02,
				"AmovPknlMwlkSlowWpstDb",
				0.02,
				"AmovPknlMwlkSlowWpstDbr",
				0.02,
				"AmovPknlMwlkSlowWpstDr",
				0.02,
				"AmovPknlMwlkSlowWpstDfr",
				0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2",
				0.2,
				"Unconscious",
				0.1,
				"AidlPknlMstpSlowWpstDnon_AI",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon",
				0.02
			};
			camShakeFire = 1;
		};
		class AidlPknlMstpSlowWpstDnon_G0S: AmovPknlMstpSlowWpstDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			variantAfter[] = {30,30,30};
			ConnectTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AidlPknlMstpSlowWpstDnon_G01",
				0.02,
				"AidlPknlMstpSlowWpstDnon_G02",
				0.02,
				"AidlPknlMstpSlowWpstDnon_G03",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"AidlPknlMstpSlowWpstDnon_G0S",
				0.2
			};
		};
		class AidlPknlMstpSlowWpstDnon_AI: AidlPknlMstpSlowWpstDnon_G0S
		{
			variantsAI[]=
			{
				"AidlPknlMstpSlowWpstDnon_G03",
				0.333,
				"AidlPknlMstpSlowWpstDnon_G02",
				0.333,
				"AidlPknlMstpSlowWpstDnon_G01",
				0.33399999
			};
		};
		class AidlPknlMstpSlowWpstDnon_G01: AidlPknlMstpSlowWpstDnon_G0S
		{
			speed = -8;
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\low\pst\AidlPknlMstpSlowWpstDnon_G01";
			ConnectTo[]=
			{
				"AidlPknlMstpSlowWpstDnon_G0S",
				0.02
			};
			InterpolateTo[]=
			{
				"AidlPknlMstpSlowWpstDnon_G0S",
				0.2,
				"Unconscious",
				0.0099999998,
				"AmovPknlMstpSlowWpstDnon",
				0.02
			};
		};
		class AidlPknlMstpSlowWpstDnon_G02: AidlPknlMstpSlowWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\low\pst\AidlPknlMstpSlowWpstDnon_G02";
		};
		class AidlPknlMstpSlowWpstDnon_G03: AidlPknlMstpSlowWpstDnon_G01
		{
			file = "\A3\anims_f\Data\Anim\Sdr\idl\knl\stp\low\pst\AidlPknlMstpSlowWpstDnon_G03";
		};
		class AmovPknlMstpSlowWpstDnon_turnL: AidlPknlMstpSlowWpstDnon_G0S
		{
			duty = -0.60000002;
			variantsPlayer[] = {};
			file = "a3\anims_f\data\anim\sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_aiturn90l";
			speed = 1.2;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.02
			};
		};
		class AmovPknlMstpSlowWpstDnon_turnR: AidlPknlMstpSlowWpstDnon_G0S
		{
			duty = -0.80000001;
			variantsPlayer[] = {};
			file = "a3\anims_f\data\anim\sdr\mov\knl\stp\non\non\amovpknlmstpsnonwnondnon_aiturn90l";
			speed = 1.2;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.02
			};
		};
		class AmovPknlMwlkSlowWpstDf: AidlPknlMstpSlowWpstDnon_G0S
		{
			aimPrecision = 2;
			duty = 0.1;
			static = 1;
			relSpeedMin = 0.80000001;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDf";
			speed = 0.44999999;
			actions = "PistolLowKneelActionsWlkF";
			enableOptics = 0;
			soundEnabled = 1;
			soundEdge[] = {0.15000001,0.40000001,0.64999998,0.89999998};
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDf",
				0.025,
				"AmovPercMwlkSlowWpstDf",
				0.025,
				"AmovPknlMwlkSlowWpstDfr",
				0.025,
				"AmovPknlMwlkSlowWpstDfl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDf",
				0.02,
				"AmovPknlMtacSlowWpstDf",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDfl: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDfl";
			actions = "PistolLowKneelActionsWlkFl";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDfl",
				0.025,
				"AmovPknlMrunSlowWpstDfl",
				0.025,
				"AmovPknlMwlkSlowWpstDf",
				0.025,
				"AmovPknlMwlkSlowWpstDl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDfl",
				0.02,
				"AmovPknlMtacSlowWpstDfl",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDl: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDl";
			speed = 0.29703;
			actions = "PistolLowKneelActionsWlkL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDl",
				0.025,
				"AmovPknlMrunSlowWpstDl",
				0.025,
				"AmovPknlMwlkSlowWpstDfl",
				0.025,
				"AmovPknlMwlkSlowWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDl",
				0.02,
				"AmovPknlMtacSlowWpstDl",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDbl: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDbl";
			speed = 0.29703;
			actions = "PistolLowKneelActionsWlkBl";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDbl",
				0.025,
				"AmovPknlMrunSlowWpstDbl",
				0.025,
				"AmovPknlMwlkSlowWpstDl",
				0.025,
				"AmovPknlMwlkSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDbl",
				0.02,
				"AmovPknlMtacSlowWpstDbl",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDb: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDb";
			speed = 0.29703;
			actions = "PistolLowKneelActionsWlkB";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDb",
				0.025,
				"AmovPknlMrunSlowWpstDb",
				0.025,
				"AmovPknlMwlkSlowWpstDbr",
				0.025,
				"AmovPknlMwlkSlowWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDb",
				0.02,
				"AmovPknlMtacSlowWpstDb",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDbr: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDbr";
			speed = 0.29703;
			actions = "PistolLowKneelActionsWlkBr";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDbr",
				0.025,
				"AmovPknlMrunSlowWpstDbr",
				0.025,
				"AmovPknlMwlkSlowWpstDr",
				0.025,
				"AmovPknlMwlkSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDbr",
				0.02,
				"AmovPknlMtacSlowWpstDbr",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDr: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDr";
			speed = 0.30000001;
			actions = "PistolLowKneelActionsWlkR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDr",
				0.025,
				"AmovPknlMwlkSlowWpstDfr",
				0.025,
				"AmovPknlMwlkSlowWpstDbr",
				0.025,
				"AmovPknlMrunSlowWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDr",
				0.02,
				"AmovPknlMtacSlowWpstDr",
				0.025
			};
		};
		class AmovPknlMwlkSlowWpstDfr: AmovPknlMwlkSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\wlk\low\pst\AmovPknlMwlkSlowWpstDfr";
			actions = "PistolLowKneelActionsWlkFr";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDfr",
				0.025,
				"AmovPknlMwlkSlowWpstDf",
				0.025,
				"AmovPknlMwlkSlowWpstDr",
				0.025,
				"AmovPknlMrunSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDfr",
				0.02,
				"AmovPknlMtacSlowWpstDfr",
				0.025
			};
		};
		class AmovPknlMtacSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			stamina = -0.1;
			duty = 0.2;
			speed = 0.75;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDf";
			headBobStrength = 0.124378;
			actions = "PistolLowKneelActionsTacF";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDfl",
				0.0099999998,
				"AmovPknlMtacSlowWpstDfr",
				0.0099999998,
				"AmovPknlMrunSlowWpstDf",
				0.02,
				"AmovPknlMwlkSlowWpstDf",
				0.02,
				"AovrPercMstpSlowWpstDf",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDf",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.02
			};
			aimPrecision = 2;
		};
		class AmovPknlMtacSlowWpstDfl: AmovPknlMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDfl";
			actions = "PistolLowKneelActionsTacFL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDf",
				0.0099999998,
				"AmovPknlMtacSlowWpstDfr",
				0.02,
				"AmovPknlMtacSlowWpstDl",
				0.0099999998,
				"AmovPknlMrunSlowWpstDfl",
				0.02,
				"AmovPknlMwlkSlowWpstDfl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDfl",
				0.02,
				"AmovPknlMevaSrasWpstDfl",
				0.02,
				"AmovPercMtacSlowWpstDfl",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDl: AmovPknlMtacSlowWpstDf
		{
			speed = 0.779221;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDl";
			actions = "PistolLowKneelActionsTacL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDbl",
				0.0099999998,
				"AmovPknlMtacSlowWpstDfl",
				0.0099999998,
				"AmovPknlMrunSlowWpstDl",
				0.02,
				"AmovPknlMwlkSlowWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDl",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDb: AmovPknlMtacSlowWpstDf
		{
			speed = 0.81081098;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDb";
			actions = "PistolLowKneelActionsTacB";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDbl",
				0.0099999998,
				"AmovPknlMtacSlowWpstDbr",
				0.0099999998,
				"AmovPknlMrunSlowWpstDb",
				0.02,
				"AmovPknlMwlkSlowWpstDb",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDb",
				0.02,
				"AmovPercMtacSlowWpstDb",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDbl: AmovPknlMtacSlowWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDbl";
			actions = "PistolLowKneelActionsTacBL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDl",
				0.0099999998,
				"AmovPknlMtacSlowWpstDb",
				0.0099999998,
				"AmovPknlMrunSlowWpstDbl",
				0.02,
				"AmovPknlMwlkSlowWpstDbl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDbl",
				0.02,
				"AmovPercMtacSlowWpstDbl",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDbr: AmovPknlMtacSlowWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDbr";
			actions = "PistolLowKneelActionsTacBR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDb",
				0.0099999998,
				"AmovPknlMtacSlowWpstDr",
				0.0099999998,
				"AmovPknlMrunSlowWpstDbr",
				0.02,
				"AmovPknlMwlkSlowWpstDbr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDbr",
				0.02,
				"AmovPercMtacSlowWpstDbr",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDr: AmovPknlMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDr";
			actions = "PistolLowKneelActionsTacR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDfr",
				0.0099999998,
				"AmovPknlMtacSlowWpstDbr",
				0.0099999998,
				"AmovPknlMrunSlowWpstDr",
				0.02,
				"AmovPknlMwlkSlowWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDr",
				0.02,
				"AmovPercMtacSlowWpstDr",
				0.02
			};
		};
		class AmovPknlMtacSlowWpstDfr: AmovPknlMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\low\pst\AmovPknlMtacSlowWpstDfr";
			actions = "PistolLowKneelActionsTacFR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMtacSlowWpstDf",
				0.0099999998,
				"AmovPknlMtacSlowWpstDfl",
				0.02,
				"AmovPknlMtacSlowWpstDr",
				0.0099999998,
				"AmovPknlMrunSlowWpstDfr",
				0.02,
				"AmovPknlMwlkSlowWpstDfr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMrunSrasWpstDfr",
				0.02,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPercMtacSlowWpstDfr",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDf: AmovPknlMwlkSlowWpstDf
		{
			stamina = -0.1;
			aimPrecision = 3;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDf";
			duty = 0.30000001;
			soundEdge[] = {0.25,0.5,0.75,1};
			interpolationSpeed = 2.5;
			headBobStrength = 0.054726001;
			soundOverride = "run";
			showWeaponAim = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			limitGunMovement = 0.5;
			speed = 0.666667;
			actions = "PistolLowKneelActionsRunF";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDf",
				0.025,
				"AmovPknlMrunSlowWpstDfl",
				0.025,
				"AmovPknlMrunSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDf",
				0.2,
				"AmovPknlMtacSlowWpstDf",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDfl: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDfl";
			actions = "PistolLowKneelActionsRunFl";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDfl",
				0.025,
				"AmovPknlMrunSlowWpstDl",
				0.025,
				"AmovPknlMrunSlowWpstDf",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDfl",
				0.2,
				"AmovPknlMtacSlowWpstDfl",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDl: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDl";
			speed = 0.625;
			actions = "PistolLowKneelActionsRunL";
			soundEdge[] = {0.30000001,0.80000001};
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDl",
				0.025,
				"AmovPknlMrunSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDl",
				0.025,
				"AmovPknlMrunSlowWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDl",
				0.2,
				"AmovPknlMtacSlowWpstDl",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDbl: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDbl";
			speed = 0.545865;
			actions = "PistolLowKneelActionsRunBl";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDbl",
				0.025,
				"AmovPknlMrunSlowWpstDl",
				0.025,
				"AmovPknlMrunSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDbl",
				0.2,
				"AmovPknlMtacSlowWpstDbl",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDb: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDb";
			speed = 0.545865;
			actions = "PistolLowKneelActionsRunB";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDb",
				0.025,
				"AmovPknlMrunSlowWpstDbl",
				0.025,
				"AmovPknlMrunSlowWpstDbr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDb",
				0.2,
				"AmovPknlMtacSlowWpstDb",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDbr: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDbr";
			speed = 0.545865;
			actions = "PistolLowKneelActionsRunBr";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDbr",
				0.025,
				"AmovPknlMrunSlowWpstDr",
				0.025,
				"AmovPknlMrunSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDbr",
				0.2,
				"AmovPknlMtacSlowWpstDbr",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDr: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDr";
			speed = 0.714286;
			actions = "PistolLowKneelActionsRunR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDbr",
				0.025,
				"AmovPknlMrunSlowWpstDfr",
				0.025,
				"AmovPknlMwlkSlowWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDr",
				0.2,
				"AmovPknlMtacSlowWpstDr",
				0.02
			};
		};
		class AmovPknlMrunSlowWpstDfr: AmovPknlMrunSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDfr";
			actions = "PistolLowKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AmovPknlMstpSlowWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDf",
				0.025,
				"AmovPknlMrunSlowWpstDr",
				0.025,
				"AmovPknlMwlkSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMwlkSrasWpstDfr",
				0.2,
				"AmovPknlMtacSlowWpstDf",
				0.02
			};
		};
		class AmovPknlMstpSlowWpstDnon_gear_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			speed = 2.3076899;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\low\pst\AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon";
			looped = 0;
			canBlendStep = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_gear_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSlowWpstDnon
		{
			variantsPlayer[] = {};
			leftHandIKCurve[] = {0.61000001,0,0.81,1};
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_gear_AmovPknlMstpSrasWpstDnon";
			speed = 1.5;
			actions = "PistolKneelActions";
			canBlendStep = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPknlMstpSnonWnonDnon_gear",
				0.050000001,
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon_gear: AmovPknlMstpSlowWpstDnon
		{
			variantsPlayer[] = {};
			leftHandIKCurve[] = {0.31,1,0.44999999,0};
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon_gear";
			speed = 2.8;
			actions = "PistolKneelActions_gear";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_gear",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPknlMstpSnonWnonDnon_gear",
				0.050000001,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_gear: AmovPknlMstpSlowWpstDnon
		{
			variantsPlayer[] = {};
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_gear";
			speed = 10;
			actions = "PistolKneelActions_gear";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_gear_AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPknlMstpSnonWnonDnon_gear",
				0.050000001,
				"AinvPknlMstpSrasWrflDnon",
				0.0099999998,
				"Unconscious",
				0.1,
				"AmovPknlMstpSrasWpstDnon_explo",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_explo: AmovPknlMstpSrasWpstDnon_gear
		{
			actions = "PistolKneelActions_explo";
			speed = -3;
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_gear_AmovPercMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_gear
		{
			leftHandIKCurve[] = {0.61000001,0,0.81,1};
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_gear_AmovPercMstpSrasWpstDnon";
			speed = 1.5;
			actions = "PistolStandActions_gear";
			canBlendStep = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPercMstpSnonWnonDnon_gear",
				0.050000001,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon_gear: AmovPknlMstpSrasWpstDnon_gear
		{
			leftHandIKCurve[] = {0.31,1,0.44999999,0};
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon_gear";
			speed = 2.8;
			actions = "PistolStandActions_gear";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_gear",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPercMstpSnonWnonDnon_gear",
				0.050000001,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_gear: AmovPknlMstpSrasWpstDnon_gear
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_gear";
			actions = "PistolStandActions_gear";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_gear_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWrflDnon_gear",
				0.050000001,
				"AmovPercMstpSnonWnonDnon_gear",
				0.050000001,
				"AinvPercMstpSrasWrflDnon",
				0.050000001,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon_gear: AmovPknlMstpSrasWpstDnon_gear
		{
			speed = 6;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon";
			looped = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_gear",
				0.02,
				"AmovPercMstpSrasWpstDnon_gear",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_turnL: AmovPknlMstpSrasWpstDnon
		{
			duty = -0.40000001;
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AIturn90L";
			speed = 1.3;
			aimPrecision = 4;
			boundingSphere = 4;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_turn.p3d";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_turnR: AmovPknlMstpSrasWpstDnon
		{
			duty = -0.40000001;
			boundingSphere = 8;
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AIturn90R";
			speed = 1.3;
			aimPrecision = 4;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_turn.p3d";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			headBobStrength = 0.02;
			actions = "PistolStandActionsWlkF";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDf";
			soundEdge[] = {0.25,0.5,0.75,1};
			static = 1;
			relSpeedMin = 0.80000001;
			speed = 0.46348301;
			Walkcycles = 2;
			visibleSize = 0.80012101;
			duty = -0.30000001;
			soundOverride = "Walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			aimPrecision = 2;
			interpolationSpeed = 5.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.025,
				"AmovPercMwlkSrasWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDf",
				0.025,
				"AmovPknlMwlkSrasWpstDf",
				0.029999999,
				"AmovPercMevaSrasWpstDf",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"AmovPercMtacSrasWpstDf",
				0.2,
				"AmovPercMwlkSlowWpstDf",
				0.02,
				"AmovPercMrunSlowWpstDf",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDfl: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolStandActionsWlkFL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDfl";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.025,
				"AmovPercMwlkSrasWpstDl",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.025,
				"AmovPknlMwlkSrasWpstDfl",
				0.029999999,
				"AmovPercMevaSrasWpstDfl",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"AmovPercMtacSrasWpstDfl",
				0.2,
				"AmovPercMwlkSlowWpstDfl",
				0.02,
				"AmovPercMrunSlowWpstDfl",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDl: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolStandActionsWlkL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDl";
			speed = 0.400049;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.025,
				"AmovPercMwlkSrasWpstDbl",
				0.025,
				"AmovPercMrunSrasWpstDl",
				0.025,
				"AmovPknlMwlkSrasWpstDl",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDl",
				0.2,
				"AmovPercMwlkSlowWpstDl",
				0.02,
				"AmovPercMrunSlowWpstDl",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDb: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolStandActionsWlkB";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDb";
			speed = 0.81642699;
			soundEdge[] = {0.5,1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_Db.p3d";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.025,
				"AmovPercMwlkSrasWpstDbr",
				0.025,
				"AmovPercMrunSrasWpstDb",
				0.025,
				"AmovPknlMwlkSrasWpstDb",
				0.029999999,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWpstDb",
				0.2,
				"AmovPercMwlkSlowWpstDb",
				0.02,
				"AmovPercMrunSlowWpstDb",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDbl: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolStandActionsWlkBL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDbl";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.025,
				"AmovPercMwlkSrasWpstDb",
				0.025,
				"AmovPercMrunSrasWpstDbl",
				0.025,
				"AmovPknlMwlkSrasWpstDbl",
				0.029999999,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWpstDbl",
				0.2,
				"AmovPercMwlkSlowWpstDbl",
				0.02,
				"AmovPercMrunSlowWpstDbl",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDbr: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolStandActionsWlkBR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDbr";
			limitGunMovement = 1;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.025,
				"AmovPercMwlkSrasWpstDr",
				0.025,
				"AmovPercMrunSrasWpstDbr",
				0.025,
				"AmovPknlMwlkSrasWpstDbr",
				0.029999999,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWpstDbr",
				0.2,
				"AmovPercMwlkSlowWpstDbr",
				0.02,
				"AmovPercMrunSlowWpstDbr",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDr: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolStandActionsWlkR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDr";
			speed = 0.40634099;
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.025,
				"AmovPercMwlkSrasWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDr",
				0.025,
				"AmovPknlMwlkSrasWpstDr",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDr",
				0.2,
				"AmovPercMwlkSlowWpstDr",
				0.02,
				"AmovPercMrunSlowWpstDr",
				0.2
			};
		};
		class AmovPercMwlkSrasWpstDfr: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolStandActionsWlkFR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\ras\pst\AmovPercMwlkSrasWpstDfr";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.025,
				"AmovPercMwlkSrasWpstDr",
				0.025,
				"AmovPercMrunSrasWpstDfr",
				0.025,
				"AmovPknlMwlkSrasWpstDfr",
				0.029999999,
				"AmovPercMevaSrasWpstDfr",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"AmovPercMtacSrasWpstDfr",
				0.2,
				"AmovPercMwlkSlowWpstDfr",
				0.02,
				"AmovPercMrunSlowWpstDfr",
				0.2
			};
		};
		class AmovPercMwlkSlowWpstDf: AmovPercMwlkSrasWpstDf
		{
			duty = -0.5;
			actions = "PistolLowStandActionsWlkF";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDf";
			speed = 0.35;
			showWeaponAim = 0;
			disableWeapons = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			disableWeaponsLong = 1;
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDfl",
				0.025,
				"AmovPercMwlkSlowWpstDfr",
				0.025,
				"AmovPknlMwlkSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDf",
				0.025,
				"AmovPercMevaSlowWpstDf",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDf",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDfl: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkFl";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfl";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDf",
				0.025,
				"AmovPercMwlkSlowWpstDl",
				0.025,
				"AmovPknlMwlkSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDfl",
				0.025,
				"AmovPercMevaSlowWpstDfl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDfl",
				0.02,
				"AmovPercMtacSlowWpstDfl",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDl: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDl";
			speed = 0.47619;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDl",
				0.025,
				"AmovPercMwlkSlowWpstDfl",
				0.025,
				"AmovPercMwlkSlowWpstDbl",
				0.025,
				"AmovPercMrunSlowWpstDl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDl",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDbl: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkBl";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbl";
			speed = 0.337079;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDbl",
				0.025,
				"AmovPercMwlkSlowWpstDl",
				0.025,
				"AmovPercMwlkSlowWpstDb",
				0.025,
				"AmovPercMrunSlowWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDbl",
				0.2,
				"AmovPercMtacSlowWpstDbl",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDb: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkB";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDb";
			speed = 0.337079;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDb",
				0.025,
				"AmovPercMwlkSlowWpstDbl",
				0.025,
				"AmovPercMwlkSlowWpstDbr",
				0.025,
				"AmovPercMrunSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDb",
				0.02,
				"AmovPercMtacSlowWpstDb",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDbr: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkBr";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDbr";
			speed = 0.337079;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDbr",
				0.025,
				"AmovPercMwlkSlowWpstDb",
				0.025,
				"AmovPercMwlkSlowWpstDr",
				0.025,
				"AmovPercMrunSlowWpstDbr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDbr",
				0.02,
				"AmovPercMtacSlowWpstDbr",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDr: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDr";
			speed = 0.47619;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDr",
				0.025,
				"AmovPercMwlkSlowWpstDbr",
				0.025,
				"AmovPercMwlkSlowWpstDfr",
				0.025,
				"AmovPercMrunSlowWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDr",
				0.02,
				"AmovPercMtacSlowWpstDr",
				0.025
			};
		};
		class AmovPercMwlkSlowWpstDfr: AmovPercMwlkSlowWpstDf
		{
			actions = "PistolLowStandActionsWlkFr";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\Wlk\non\non\AmovPercMwlkSnonWnonDfr";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.015,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSlowWpstDfr",
				0.025,
				"AmovPercMwlkSlowWpstDf",
				0.025,
				"AmovPercMwlkSlowWpstDr",
				0.025,
				"AmovPercMrunSlowWpstDfr",
				0.025,
				"AmovPercMevaSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDfr",
				0.02,
				"AmovPercMtacSlowWpstDfr",
				0.025
			};
		};
		class AmovPercMtacSlowWpstDf: AmovPercMwlkSlowWpstDf
		{
			stamina = -0.1;
			duty = 0;
			speed = 1.2485;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDf";
			headBobStrength = 0.124378;
			actions = "PistolLowStandActionsTacF";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDfl",
				0.0099999998,
				"AmovPercMtacSlowWpstDfr",
				0.0099999998,
				"AmovPercMrunSlowWpstDf",
				0.02,
				"AmovPercMwlkSlowWpstDf",
				0.02,
				"AovrPercMstpSlowWpstDf",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPercMevaSlowWpstDf",
				0.02,
				"AmovPknlMtacSlowWpstDf",
				0.02
			};
			aimPrecision = 2;
		};
		class AmovPercMtacSlowWpstDfl: AmovPercMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfl";
			actions = "PistolLowStandActionsTacFL";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.0099999998,
				"AmovPercMtacSlowWpstDfr",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.0099999998,
				"AmovPercMrunSlowWpstDfl",
				0.02,
				"AmovPercMwlkSlowWpstDfl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMevaSlowWpstDfl",
				0.02,
				"AmovPknlMtacSlowWpstDfl",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDl: AmovPercMtacSlowWpstDf
		{
			speed = 0.70946;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDl";
			actions = "PistolLowStandActionsTacL";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDbl",
				0.0099999998,
				"AmovPercMtacSlowWpstDfl",
				0.0099999998,
				"AmovPercMrunSlowWpstDl",
				0.02,
				"AmovPercMwlkSlowWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPknlMtacSlowWpstDl",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDb: AmovPercMtacSlowWpstDf
		{
			speed = 0.669421;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDb";
			actions = "PistolLowStandActionsTacB";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDbl",
				0.0099999998,
				"AmovPercMtacSlowWpstDbr",
				0.0099999998,
				"AmovPercMrunSlowWpstDb",
				0.02,
				"AmovPercMwlkSlowWpstDb",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDb",
				0.02,
				"AmovPknlMtacSlowWpstDb",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDbl: AmovPercMtacSlowWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbl";
			actions = "PistolLowStandActionsTacBL";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.0099999998,
				"AmovPercMtacSlowWpstDb",
				0.0099999998,
				"AmovPercMrunSlowWpstDbl",
				0.02,
				"AmovPercMwlkSlowWpstDbl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDbl",
				0.02,
				"AmovPknlMtacSlowWpstDbl",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDbr: AmovPercMtacSlowWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbr";
			actions = "PistolLowStandActionsTacBR";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDb",
				0.0099999998,
				"AmovPercMtacSlowWpstDr",
				0.0099999998,
				"AmovPercMrunSlowWpstDbr",
				0.02,
				"AmovPercMwlkSlowWpstDbr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDbr",
				0.02,
				"AmovPknlMtacSlowWpstDbr",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDr: AmovPercMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDr";
			actions = "PistolLowStandActionsTacR";
			speed = 0.625;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDfr",
				0.0099999998,
				"AmovPercMtacSlowWpstDbr",
				0.0099999998,
				"AmovPercMrunSlowWpstDr",
				0.02,
				"AmovPercMwlkSlowWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPknlMtacSlowWpstDr",
				0.02
			};
		};
		class AmovPercMtacSlowWpstDfr: AmovPercMtacSlowWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfr";
			actions = "PistolLowStandActionsTacFR";
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.0099999998,
				"AmovPercMtacSlowWpstDfl",
				0.02,
				"AmovPercMtacSlowWpstDr",
				0.0099999998,
				"AmovPercMrunSlowWpstDfr",
				0.02,
				"AmovPercMwlkSlowWpstDfr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSlowWpstDfr",
				0.02,
				"AmovPknlMtacSlowWpstDfr",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDf: AmovPercMwlkSrasWpstDf
		{
			stamina = -0.1;
			duty = 0.2;
			speed = 0.85059202;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDf";
			headBobStrength = 0.124378;
			actions = "PistolStandActionsTacF";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDfl",
				0.0099999998,
				"AmovPercMtacSrasWpstDfr",
				0.0099999998,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.02,
				"AovrPercMstpSrasWpstDf",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPknlMtacSrasWpstDf",
				0.02
			};
			aimPrecision = 4;
			soundOverride = "Run";
		};
		class AmovPercMtacSrasWpstDfl: AmovPercMtacSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDfl";
			actions = "PistolStandActionsTacFL";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDf",
				0.0099999998,
				"AmovPercMtacSrasWpstDfr",
				0.02,
				"AmovPercMtacSrasWpstDl",
				0.0099999998,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPknlMtacSrasWpstDfl",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDl: AmovPercMtacSrasWpstDf
		{
			speed = 1.67255;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDl";
			actions = "PistolStandActionsTacL";
			soundEdge[] = {0.30000001,0.80000001};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDbl",
				0.0099999998,
				"AmovPercMtacSrasWpstDfl",
				0.0099999998,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDl",
				0.02,
				"AmovPknlMtacSrasWpstDl",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDb: AmovPercMtacSrasWpstDf
		{
			speed = 0.81566602;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDb";
			actions = "PistolStandActionsTacB";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_Db.p3d";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDbl",
				0.0099999998,
				"AmovPercMtacSrasWpstDbr",
				0.0099999998,
				"AmovPercMrunSrasWpstDb",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDb",
				0.02,
				"AmovPknlMtacSrasWpstDb",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDbl: AmovPercMtacSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDbl";
			actions = "PistolStandActionsTacBL";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDl",
				0.0099999998,
				"AmovPercMtacSrasWpstDb",
				0.0099999998,
				"AmovPercMrunSrasWpstDbl",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDbl",
				0.02,
				"AmovPknlMtacSrasWpstDbl",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDbr: AmovPercMtacSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDbr";
			actions = "PistolStandActionsTacBR";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDb",
				0.0099999998,
				"AmovPercMtacSrasWpstDr",
				0.0099999998,
				"AmovPercMrunSrasWpstDbr",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDbr",
				0.02,
				"AmovPknlMtacSrasWpstDbr",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDr: AmovPercMtacSrasWpstDf
		{
			speed = 1.45696;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDr";
			actions = "PistolStandActionsTacR";
			soundEdge[] = {0.22,0.80000001};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDfr",
				0.0099999998,
				"AmovPercMtacSrasWpstDbr",
				0.0099999998,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDr",
				0.02,
				"AmovPknlMtacSrasWpstDr",
				0.02
			};
		};
		class AmovPercMtacSrasWpstDfr: AmovPercMtacSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\tac\ras\pst\AmovPercMtacSrasWpstDfr";
			actions = "PistolStandActionsTacFR";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMtacSrasWpstDf",
				0.0099999998,
				"AmovPercMtacSrasWpstDfl",
				0.02,
				"AmovPercMtacSrasWpstDr",
				0.0099999998,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMrunSlowWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AmovPknlMtacSrasWpstDfr",
				0.02
			};
		};
		class AmovPercMrunSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			stamina = -0.1;
			aimPrecision = 4;
			variantsPlayer[] = {};
			soundEdge[] = {0,0.428571,1};
			actions = "PistolStandActionsRunF";
			visibleSize = 0.90012097;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDf";
			speed = 1.2485;
			duty = 0.15000001;
			soundOverride = "run";
			showWeaponAim = 0;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			static = 1;
			relSpeedMin = 0.5;
			relSpeedMax = 1.1;
			limitGunMovement = 0.5;
			Walkcycles = 2;
			interpolationSpeed = 3.05;
			headBobStrength = 0.094526999;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDf",
				0.029999999,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDf",
				0.2,
				"AmovPercMrunSlowWpstDf",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDf: AmovPercMrunSrasWpstDf
		{
			stamina = -0.1;
			aimPrecision = 3;
			actions = "PistolLowStandActionsRunF";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDf",
				0.025,
				"AmovPknlMrunSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDfr",
				0.025,
				"AmovPercMevaSlowWpstDf",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDf",
				0.2,
				"AmovPercMtacSrasWpstDf",
				0.02,
				"AmovPercMtacSlowWpstDf",
				0.025,
				"AmovPercMrunSrasWpstDf",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDfl: AmovPercMrunSrasWpstDf
		{
			actions = "PistolStandActionsRunFL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfl";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDf",
				0.025,
				"AmovPercMrunSrasWpstDl",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.029999999,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDfl",
				0.2,
				"AmovPercMrunSlowWpstDfl",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDfl: AmovPercMrunSrasWpstDfl
		{
			actions = "PistolLowStandActionsRunFl";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMwlkSlowWpstDfl",
				0.025,
				"AmovPknlMrunSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDl",
				0.025,
				"AmovPercMevaSlowWpstDfl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDfl",
				0.2,
				"AmovPercMtacSrasWpstDfl",
				0.02,
				"AmovPercMtacSlowWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDl: AmovPercMrunSrasWpstDf
		{
			actions = "PistolStandActionsRunL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDl";
			speed = 0.70946;
			soundEdge[] = {0.5,1};
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDbl",
				0.025,
				"AmovPknlMrunSrasWpstDl",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDl",
				0.2,
				"AmovPercMevaSrasWpstDl",
				0.02,
				"AmovPercMrunSlowWpstDl",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDl: AmovPercMrunSrasWpstDl
		{
			actions = "PistolLowStandActionsRunL";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDl",
				0.025,
				"AmovPercMwlkSlowWpstDl",
				0.025,
				"AmovPercMrunSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDl",
				0.2,
				"AmovPercMtacSrasWpstDl",
				0.02,
				"AmovPercMtacSlowWpstDl",
				0.025,
				"AmovPercMrunSrasWpstDl",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDb: AmovPercMrunSrasWpstDf
		{
			actions = "PistolStandActionsRunB";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDb";
			speed = 0.75;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_Db.p3d";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.025,
				"AmovPercMrunSrasWpstDbl",
				0.025,
				"AmovPercMrunSrasWpstDbr",
				0.025,
				"AmovPknlMrunSrasWpstDb",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDb",
				0.2,
				"AmovPercMrunSlowWpstDb",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDb: AmovPercMrunSrasWpstDb
		{
			actions = "PistolLowStandActionsRunB";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDb",
				0.025,
				"AmovPercMwlkSlowWpstDb",
				0.025,
				"AmovPercMrunSlowWpstDbl",
				0.025,
				"AmovPercMrunSlowWpstDbr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDb",
				0.2,
				"AmovPercMtacSrasWpstDb",
				0.02,
				"AmovPercMtacSlowWpstDb",
				0.025,
				"AmovPercMrunSrasWpstDb",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDbl: AmovPercMrunSrasWpstDb
		{
			actions = "PistolStandActionsRunBL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbl";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.025,
				"AmovPercMrunSrasWpstDl",
				0.025,
				"AmovPercMrunSrasWpstDb",
				0.025,
				"AmovPknlMrunSrasWpstDbl",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDbl",
				0.2,
				"AmovPercMrunSlowWpstDbl",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDbl: AmovPercMrunSrasWpstDbl
		{
			actions = "PistolLowStandActionsRunBl";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDbl",
				0.025,
				"AmovPercMwlkSlowWpstDbl",
				0.025,
				"AmovPercMrunSlowWpstDl",
				0.025,
				"AmovPercMrunSlowWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDbl",
				0.2,
				"AmovPercMtacSrasWpstDbl",
				0.02,
				"AmovPercMtacSlowWpstDbl",
				0.025,
				"AmovPercMrunSrasWpstDbl",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDbr: AmovPercMrunSrasWpstDb
		{
			actions = "PistolStandActionsRunBR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDbr";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.025,
				"AmovPercMrunSrasWpstDb",
				0.025,
				"AmovPercMrunSrasWpstDr",
				0.025,
				"AmovPknlMrunSrasWpstDbr",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDbr",
				0.2,
				"AmovPercMrunSlowWpstDbr",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDbr: AmovPercMrunSrasWpstDbr
		{
			actions = "PistolLowStandActionsRunBr";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDbr",
				0.025,
				"AmovPercMwlkSlowWpstDbr",
				0.025,
				"AmovPercMrunSlowWpstDb",
				0.025,
				"AmovPercMrunSlowWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDbr",
				0.2,
				"AmovPercMtacSrasWpstDbr",
				0.02,
				"AmovPercMtacSlowWpstDbr",
				0.025,
				"AmovPercMrunSrasWpstDbr",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDr: AmovPercMrunSrasWpstDf
		{
			actions = "PistolStandActionsRunR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDr";
			speed = 0.68;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.025,
				"AmovPercMrunSrasWpstDbr",
				0.025,
				"AmovPercMrunSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDr",
				0.029999999,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDr",
				0.2,
				"AmovPercMevaSrasWpstDr",
				0.02,
				"AmovPercMrunSlowWpstDr",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDr: AmovPercMrunSrasWpstDr
		{
			actions = "PistolLowStandActionsRunR";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDr",
				0.025,
				"AmovPercMwlkSlowWpstDr",
				0.025,
				"AmovPercMrunSlowWpstDbr",
				0.025,
				"AmovPercMrunSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDr",
				0.2,
				"AmovPercMtacSrasWpstDr",
				0.02,
				"AmovPercMtacSlowWpstDr",
				0.025,
				"AmovPercMrunSlowWpstDr",
				0.2
			};
		};
		class AmovPercMrunSrasWpstDfr: AmovPercMrunSrasWpstDf
		{
			actions = "PistolStandActionsRunFR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\run\non\non\AmovPercMrunSnonWnonDfr";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDf",
				0.025,
				"AmovPercMrunSrasWpstDr",
				0.025,
				"AmovPknlMrunSrasWpstDfr",
				0.029999999,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1,
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1,
				"Unconscious",
				0.1,
				"AmovPercMtacSrasWpstDfr",
				0.2,
				"AmovPercMrunSlowWpstDfr",
				0.2
			};
		};
		class AmovPercMrunSlowWpstDfr: AmovPercMrunSrasWpstDfr
		{
			actions = "PistolLowStandActionsRunFr";
			weaponLowered = 1;
			enableOptics = 0;
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AmovPknlMrunSlowWpstDfr",
				0.025,
				"AmovPercMwlkSlowWpstDfr",
				0.025,
				"AmovPercMrunSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDr",
				0.025,
				"AmovPercMevaSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPercMwlkSrasWpstDfr",
				0.2,
				"AmovPercMtacSrasWpstDfr",
				0.02,
				"AmovPercMtacSlowWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDfr",
				0.2
			};
		};
		class AmovPknlMwlkSrasWpstDf: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			visibleSize = 0.46153799;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDf";
			soundEdge[] = {0.25,0.5,0.75,1};
			speed = 0.40938899;
			duty = 0.15000001;
			soundOverride = "Walk";
			leaningFactorBeg = 0.75;
			leaningFactorEnd = 0.75;
			soundEnabled = 1;
			aimPrecision = 3;
			actions = "PistolKneelActionsWlkF";
			Walkcycles = 2;
			interpolationSpeed = 5.5;
			headBobStrength = 0.094526999;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.029999999,
				"AmovPknlMwlkSrasWpstDfl",
				0.025,
				"AmovPknlMwlkSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDf",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"AovrPercMstpSrasWpstDf",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDf",
				0.2,
				"AmovPknlMrunSlowWpstDf",
				0.2,
				"AmovPknlMwlkSlowWpstDf",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDfl: AmovPknlMwlkSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDfl";
			actions = "PistolKneelActionsWlkFL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDf",
				0.025,
				"AmovPknlMwlkSrasWpstDl",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDfl",
				0.2,
				"AmovPknlMrunSlowWpstDfl",
				0.2,
				"AmovPknlMwlkSlowWpstDfl",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDl: AmovPknlMwlkSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDl";
			speed = 0.357366;
			actions = "PistolKneelActionsWlkL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDfl",
				0.025,
				"AmovPknlMwlkSrasWpstDbl",
				0.025,
				"AmovPknlMrunSrasWpstDl",
				0.025,
				"AmovPknlMevaSrasWpstDl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDl",
				0.2,
				"AmovPknlMrunSlowWpstDl",
				0.2,
				"AmovPknlMwlkSlowWpstDl",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDb: AmovPknlMwlkSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDb";
			speed = 0.36780101;
			actions = "PistolKneelActionsWlkB";
			headBobStrength = 0.084577002;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_Db.p3d";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.029999999,
				"AmovPknlMwlkSrasWpstDbl",
				0.025,
				"AmovPknlMwlkSrasWpstDbr",
				0.025,
				"AmovPknlMrunSrasWpstDb",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPknlMtacSrasWpstDb",
				0.2,
				"AmovPknlMrunSlowWpstDb",
				0.2,
				"AmovPknlMwlkSlowWpstDb",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDbl: AmovPknlMwlkSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDbl";
			actions = "PistolKneelActionsWlkBL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDl",
				0.025,
				"AmovPknlMwlkSrasWpstDb",
				0.025,
				"AmovPknlMrunSrasWpstDbl",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPknlMtacSrasWpstDbl",
				0.2,
				"AmovPknlMrunSlowWpstDbl",
				0.2,
				"AmovPknlMwlkSlowWpstDbl",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDbr: AmovPknlMwlkSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDbr";
			actions = "PistolKneelActionsWlkBR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDb",
				0.025,
				"AmovPknlMwlkSrasWpstDr",
				0.025,
				"AmovPknlMrunSrasWpstDbr",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPknlMtacSrasWpstDbr",
				0.2,
				"AmovPknlMrunSlowWpstDbr",
				0.2,
				"AmovPknlMwlkSlowWpstDbr",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDr: AmovPknlMwlkSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDr";
			speed = 0.34758401;
			actions = "PistolKneelActionsWlkBR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDbr",
				0.025,
				"AmovPknlMwlkSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDr",
				0.025,
				"AmovPknlMevaSrasWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDr",
				0.2,
				"AmovPknlMrunSlowWpstDr",
				0.2,
				"AmovPknlMwlkSlowWpstDr",
				0.02
			};
		};
		class AmovPknlMwlkSrasWpstDfr: AmovPknlMwlkSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\Wlk\ras\pst\AmovPknlMwlkSrasWpstDfr";
			actions = "PistolKneelActionsWlkFR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDf",
				0.025,
				"AmovPknlMwlkSrasWpstDr",
				0.025,
				"AmovPknlMrunSrasWpstDfr",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDfr",
				0.2,
				"AmovPknlMrunSlowWpstDfr",
				0.2,
				"AmovPknlMwlkSlowWpstDfr",
				0.02
			};
		};
		class AmovPknlMrunSrasWpstDf: AidlPknlMstpSrasWpstDnon_G0S
		{
			stamina = -0.1;
			aimPrecision = 5;
			soundEdge[] = {0.25,0.5,0.75,1};
			visibleSize = 0.60012197;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDf";
			speed = 0.666667;
			duty = 0.30000001;
			soundOverride = "run";
			showWeaponAim = 0;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Mrun_Slow_Wrfl.p3d";
			static = 1;
			relSpeedMin = 0.5;
			relSpeedMax = 1.1;
			limitGunMovement = 0.5;
			actions = "PistolKneelActionsRunF";
			Walkcycles = 2;
			interpolationSpeed = 3.05;
			headBobStrength = 0.054726001;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDf",
				0.029999999,
				"AmovPknlMwlkSrasWpstDf",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.025,
				"AmovPknlMrunSrasWpstDfr",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.0099999998,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPknlMtacSrasWpstDf",
				0.2,
				"AmovPknlMrunSlowWpstDf",
				0.025
			};
		};
		class AmovPknlMstpSlowWpstDnon_AmovPknlMrunSrasWpstDf: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\low\pst\AmovPknlMstpSlowWpstDnon_AmovPknlMrunSlowWpstDf";
			speed = 1;
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMrunSrasWpstDfl: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDfl";
			actions = "PistolKneelActionsRunFL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDfl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDfl",
				0.025,
				"AmovPknlMrunSrasWpstDf",
				0.025,
				"AmovPknlMrunSrasWpstDl",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.0099999998,
				"AmovPknlMevaSrasWpstDfl",
				0.02,
				"AmovPknlMtacSrasWpstDfl",
				0.2,
				"AmovPknlMrunSlowWpstDfl",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDl: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDl";
			speed = 0.625;
			actions = "PistolKneelActionsRunL";
			soundEdge[] = {0.5,1};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDl",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.025,
				"AmovPknlMevaSrasWpstDl",
				0.025,
				"AmovPknlMrunSrasWpstDbl",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDl",
				0.2,
				"AmovPknlMrunSlowWpstDl",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDb: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDb";
			speed = 0.666667;
			actions = "PistolKneelActionsRunB";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_Db.p3d";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDb",
				0.029999999,
				"AmovPknlMwlkSrasWpstDb",
				0.025,
				"AmovPknlMrunSrasWpstDbl",
				0.025,
				"AmovPknlMrunSrasWpstDbr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDb",
				0.2,
				"AmovPknlMrunSlowWpstDb",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDbl: AmovPknlMrunSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDbl";
			actions = "PistolKneelActionsRunBL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDbl",
				0.029999999,
				"AmovPknlMwlkSrasWpstDbl",
				0.025,
				"AmovPknlMrunSrasWpstDl",
				0.025,
				"AmovPknlMrunSrasWpstDb",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDbl",
				0.2,
				"AmovPknlMrunSlowWpstDbl",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDbr: AmovPknlMrunSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDbr";
			actions = "PistolKneelActionsRunBR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDbr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDbr",
				0.025,
				"AmovPknlMrunSrasWpstDb",
				0.025,
				"AmovPknlMrunSrasWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDbr",
				0.2,
				"AmovPknlMrunSlowWpstDbr",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDr: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDr";
			speed = 0.714286;
			actions = "PistolKneelActionsRunR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDr",
				0.025,
				"AmovPknlMrunSrasWpstDbr",
				0.025,
				"AmovPknlMrunSrasWpstDfr",
				0.025,
				"AmovPknlMevaSrasWpstDr",
				0.025,
				"Unconscious",
				0.1,
				"AmovPknlMtacSrasWpstDr",
				0.2,
				"AmovPknlMrunSlowWpstDr",
				0.025
			};
		};
		class AmovPknlMrunSrasWpstDfr: AmovPknlMrunSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\run\non\non\AmovPknlMrunSnonWnonDfr";
			actions = "PistolKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.029999999,
				"AmovPknlMwlkSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDf",
				0.025,
				"AmovPknlMrunSrasWpstDr",
				0.025,
				"AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf",
				0.0099999998,
				"Unconscious",
				0.0099999998,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPknlMtacSrasWpstDfr",
				0.2,
				"AmovPknlMrunSlowWpstDfr",
				0.025
			};
		};
		class AmovPknlMtacSrasWpstDf: AmovPknlMwlkSrasWpstDf
		{
			stamina = -0.1;
			aimPrecision = 5;
			limitgunmovement = 1;
			speed = 0.767223;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDf";
			camShakeFire = 1.15;
			duty = 0.40000001;
			headBobStrength = 0.164179;
			soundoverride = "walk";
			actions = "PistolKneelActionsTacF";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMtacSrasWpstDfl",
				0.02,
				"AmovPknlMtacSrasWpstDfr",
				0.02,
				"AmovPknlMwlkSrasWpstDf",
				0.02,
				"AovrPercMstpSrasWpstDf",
				0.02,
				"AmovPknlMrunSrasWpstDf",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDf",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPercMtacSrasWpstDf",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDfl: AmovPknlMtacSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDfl";
			actions = "PistolKneelActionsTacFL";
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDl",
				0.02,
				"AmovPknlMtacSrasWpstDf",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDfl",
				0.02,
				"AmovPknlMrunSrasWpstDfl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDfl",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPercMtacSrasWpstDfl",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDl: AmovPknlMtacSrasWpstDf
		{
			speed = 1.50659;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDl";
			actions = "PistolKneelActionsTacL";
			soundEdge[] = {0.5,1};
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDbl",
				0.02,
				"AmovPknlMtacSrasWpstDfl",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDl",
				0.02,
				"AmovPercMtacSrasWpstDl",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDb: AmovPknlMtacSrasWpstDf
		{
			speed = 0.65519702;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDb";
			actions = "PistolKneelActionsTacB";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wrfl_Db.p3d";
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDbl",
				0.02,
				"AmovPknlMtacSrasWpstDbr",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDb",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDb",
				0.02,
				"AmovPercMtacSrasWpstDb",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDbl: AmovPknlMtacSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDbl";
			actions = "PistolKneelActionsTacBL";
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDl",
				0.02,
				"AmovPknlMtacSrasWpstDb",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDbl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDbl",
				0.02,
				"AmovPercMtacSrasWpstDbl",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDbr: AmovPknlMtacSrasWpstDb
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDbr";
			actions = "PistolKneelActionsTacBR";
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDb",
				0.02,
				"AmovPknlMtacSrasWpstDr",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDbr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDbr",
				0.02,
				"AmovPercMtacSrasWpstDbr",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDr: AmovPknlMtacSrasWpstDf
		{
			speed = 1.3986;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDr";
			actions = "PistolKneelActionsTacR";
			soundEdge[] = {0.5,1};
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDbr",
				0.02,
				"AmovPknlMtacSrasWpstDfr",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDr",
				0.02,
				"AmovPercMtacSrasWpstDr",
				0.02
			};
		};
		class AmovPknlMtacSrasWpstDfr: AmovPknlMtacSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\tac\ras\pst\AmovPknlMtacSrasWpstDfr";
			actions = "PistolKneelActionsTacFR";
			InterpolateTo[]=
			{
				"AmovPknlMtacSrasWpstDf",
				0.02,
				"AmovPknlMtacSrasWpstDr",
				0.02,
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMwlkSrasWpstDfr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMtacSlowWpstDfr",
				0.02,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPercMtacSrasWpstDfr",
				0.02
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon: TransAnimBase
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon";
			speed = 1.03448;
			showHandGun = 1;
			showWeaponAim = 0;
			disableWeapons = 1;
			actions = "PistolLowKneelActions";
			interpolationRestart = 2;
			visibleSize = 0.30000001;
			ConnectTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1,
				"AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02
			};
		};
		class AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\low\pst\AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon";
			actions = "PistolKneelActions";
			showWeaponAim = 1;
			disableWeapons = 0;
			speed = 2.3076899;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon: TransAnimBase
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon";
			actions = "PistolKneelActions";
			disableWeaponsLong = 1;
			showWeaponAim = 0;
			enableBinocular = 1;
			enableOptics = -1;
			limitGunMovement = 0.1;
			showHandGun = 1;
			speed = 0.96774203;
			soundOverride = "handgun_to_unarmed";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon_end: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon_end";
			showHandGun = 0;
			soundEnabled = 0;
			speed = 1.30435;
			ConnectTo[]=
			{
				"AmovPknlMstpSnonWnonDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon";
			showHandGun = 0;
			speed = 1.7647099;
			soundOverride = "unarmed_to_handgun";
			ConnectTo[]=
			{
				"AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon_end",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end: AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end";
			showHandGun = 1;
			speed = 1.07143;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			static = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\low\pst\AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon";
			actions = "PistolStandActions";
			speed = 2.7272699;
			soundEnabled = 1;
			soundOverride = "lift_handgun";
			soundEdge[] = {0.0099999998};
			showHandGun = 1;
			interpolationRestart = 2;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon: TransAnimBase
		{
			static = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon";
			actions = "PistolLowStandActions";
			soundEnabled = 1;
			soundOverride = "low_handgun";
			soundEdge[] = {0.0099999998};
			speed = 1.30435;
			showWeaponAim = 0;
			disableWeapons = 1;
			showHandGun = 1;
			interpolationRestart = 2;
			ConnectTo[]=
			{

			};
			InterpolateTo[]=
			{
				"amovpercmstpslowwpstdnon",
				0.05,
				"AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			actions = "PistolStandActions_inv";
			enableOptics = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_gin";
			speed = 1.8;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			HeadBobMode = 5;
			HeadBobStrength = -1;
			leftHandIKCurve[] = {0.1,1,0.30000001,0};
			ConnectTo[]=
			{
				"AinvPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AinvPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",
				0.025,
				"Unconscious",
				0.0099999998
			};
		};
		class AinvPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon
		{
			variantsPlayer[]=
			{
				"AinvPercMstpSrasWpstDnon_G01",
				1
			};
			variantAfter[] = {7,7,7};
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_G";
			speed = 10;
			looped = 1;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKCurve[] = {0};
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			weaponLowered = 1;
		};
		class AinvPercMstpSrasWpstDnon_G01: AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_gloop";
			speed = -6.9499998;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			looped = 1;
			leftHandIKCurve[] = {0};
		};
		class AinvPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.44999999;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			enableOptics = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_gout";
			speed = 1.25;
			leftHandIKBeg = 0;
			HeadBobMode = 5;
			HeadBobStrength = -1;
			leftHandIKCurve[] = {0.80000001,0,1,1};
		};
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			actions = "PistolKneelActions_inv";
			enableOptics = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_gin";
			speed = 1.8;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			HeadBobMode = 5;
			HeadBobStrength = -1;
			leftHandIKCurve[] = {0.1,1,0.30000001,0};
			ConnectTo[]=
			{
				"AinvPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AinvPknlMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSnonWnonDnon",
				0.025,
				"Unconscious",
				0.0099999998
			};
		};
		class AinvPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon
		{
			variantsPlayer[]=
			{
				"AinvPknlMstpSrasWpstDnon_G01",
				1
			};
			variantAfter[] = {6,6,6};
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_G";
			speed = 10;
			looped = 1;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKCurve[] = {0};
			disableWeaponsLong = 1;
			canPullTrigger = 0;
			weaponLowered = 1;
		};
		class AinvPknlMstpSrasWpstDnon_G01: AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_gloop";
			speed = -6;
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			looped = 1;
			leftHandIKCurve[] = {0};
		};
		class AinvPknlMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.44999999;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			enableOptics = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_gout";
			speed = 1.25;
			leftHandIKBeg = 0;
			HeadBobMode = 5;
			HeadBobStrength = -1;
			leftHandIKCurve[] = {0.80000001,0,1,1};
		};
		class AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon_Putdown: AmovPercMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_in";
			speed = 1.8;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			disableWeapons = 1;
			leftHandIKCurve[] = {0,1,0.30000001,0};
			ConnectTo[]=
			{
				"AinvPercMstpSrasWpstDnon_Putdown_AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AinvPercMstpSrasWpstDnon_Putdown_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.44999999;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\erc\stp\ras\pst\AinvPercMstpSrasWpstDnon_out";
			speed = 0.73170698;
			disableWeapons = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {0.80000001,0,1,1};
		};
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon_Putdown: AmovPknlMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_in";
			speed = 1.42857;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			disableWeapons = 1;
			leftHandIKCurve[] = {0,1,0.30000001,0};
			ConnectTo[]=
			{
				"AinvPknlMstpSrasWpstDnon_Putdown_AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AinvPknlMstpSrasWpstDnon_Putdown_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.44999999;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\ras\pst\AinvPknlMstpSrasWpstDnon_out";
			speed = 0.83333302;
			leftHandIKBeg = 0;
			disableWeapons = 1;
			leftHandIKCurve[] = {0.80000001,0,1,1};
		};
		class AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			aimPrecision = 2;
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			minPlayTime = 0.34999999;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon";
			speed = -0.34999999;
			interpolationRestart = 1;
			duty = 0.2;
			headBobStrength = 0;
			reverse = "AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon";
			soundOverride = "adjust_stand_to_kneel";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon: AmovPknlMstpSlowWpstDnon
		{
			aimPrecision = 2;
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			minPlayTime = 0.34999999;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\low\pst\AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon";
			speed = 1.11111;
			disableWeapons = 1;
			interpolationRestart = 1;
			reverse = "AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon";
		};
		class AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			aimPrecision = 2;
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			minPlayTime = 0.34999999;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon";
			speed = -0.37;
			interpolationRestart = 1;
			duty = 0.40000001;
			headBobStrength = 0;
			reverse = "AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon";
			soundOverride = "adjust_kneel_to_stand";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon: AmovPercMstpSlowWpstDnon
		{
			static = 1;
			relSpeedMin = 0.80000001;
			variantsPlayer[] = {};
			variantsAI[] = {};
			looped = 0;
			minPlayTime = 0.34999999;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\low\pst\AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon";
			speed = 0.96774203;
			disableWeapons = 1;
			reverse = "AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon";
		};
		class AmovPknlMstpSrasWpstDnon_AmovPercMsprSrasWpstDf: TransAnimBase
		{
			aimPrecision = 2;
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPercMsprSlowWpstDf";
			speed = 3.71;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			enableDirectControl = 0;
			soundOverride = "standup";
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			duty = 0.5;
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.875;
			disableWeapons = 1;
			interpolationRestart = 2;
			soundOverride = "rifle_to_handgun";
			leftHandIKCurve[] = {0.759,1,0.92900002,0};
			rightHandIKCurve[] = {0.17,1,0.29800001,0};
			weaponIK = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end",
				0.0049999999
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\rfl\AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.666;
			soundEnabled = 0;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			weaponIK = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			duty = 1;
			visibleSize = 0.35012501;
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon";
			soundOverride = "rifle_to_handgun";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end
		{
			duty = 1;
			actions = "PistolKneelActions";
			visibleSize = 0.35012501;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\rfl\AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon: TransAnimBase
		{
			duty = 0.5;
			actions = "RifleStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon";
			speed = 1.23288;
			disableWeapons = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			enableOptics = 2;
			soundOverride = "handgun_to_rifle";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end";
			speed = 0.69767398;
			showHandGun = 0;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			interpolationSpeed = 20;
			soundEnabled = 0;
			rightHandIKCurve[] = {0.30000001,0,0.40000001,1};
			leftHandIKCurve[] = {0.40599999,0,0.49200001,1};
			weaponIK = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWrflDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon
		{
			duty = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon";
			visibleSize = 0.35012501;
			actions = "RifleKneelActions";
			soundOverride = "handgun_to_rifle";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end
		{
			duty = 1;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end";
			visibleSize = 0.35012501;
			soundEnabled = 0;
			actions = "RifleKneelActions";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWrflDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			duty = 0.5;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon";
			disableWeapons = 1;
			actions = "PistolStandActions";
			speed = 0.90310001;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			soundOverride = "launcher_to_handgun";
			rightHandIKCurve[] = {0.639,1,0.778,0};
			leftHandIKCurve[] = {0.81900001,1,0.917,0};
			weaponIK = 4;
			enableOptics = 2;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end: TransAnimBase
		{
			duty = 0.5;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\lnr\AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end";
			disableWeapons = 1;
			actions = "PistolStandActions";
			showHandGun = 1;
			speed = 1.0813;
			interpolationRestart = 2;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			enableOptics = 2;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon: TransAnimBase
		{
			duty = 0.5;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon";
			disableWeapons = 1;
			actions = "LauncherStandActions";
			showHandGun = 1;
			speed = 1.4344;
			interpolationRestart = 2;
			weaponIK = 2;
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			enableOptics = 2;
			soundOverride = "handgun_to_launcher";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end: TransAnimBase
		{
			duty = 0.5;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end";
			disableWeapons = 1;
			soundEnabled = 0;
			actions = "LauncherStandActions";
			speed = 0.43131;
			interpolationRestart = 2;
			rightHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {0.414,0,0.493,1};
			leftHandIKCurve[] = {0.132,0,0.257,1};
			leftHandIKEnd = 0;
			leftHandIKBeg = 0;
			enableOptics = 2;
			weaponIK = 4;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWlnrDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon",
				0.02
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon
		{
			duty = 1;
			actions = "LauncherKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon";
			visibleSize = 0.35012099;
			soundOverride = "handgun_to_launcher";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end
		{
			duty = 1;
			actions = "LauncherKneelActions";
			soundEnabled = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end";
			visibleSize = 0.35012099;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWlnrDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon: TransAnimBase
		{
			actions = "CivilStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon";
			speed = 1.03448;
			disableWeapons = 1;
			showHandgun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			InterpolationSpeed = 2.5;
			enableOptics = 2;
			soundOverride = "handgun_to_unarmed";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end",
				0.001
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end";
			speed = 1.25;
			soundEnabled = 0;
			showHandGun = 0;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon",
				0.02,
				"AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon: AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon
		{
			duty = 1;
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon";
			visibleSize = 0.35012099;
			soundOverride = "launcher_to_handgun";
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end: AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end
		{
			duty = 1;
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\stp\ras\lnr\AmovPknlMstpSrasWlnrDnon_AmovPknlMstpSrasWpstDnon_end";
			visibleSize = 0.35012099;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWlnrDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon: TransAnimBase_noIK
		{
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.66667;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			canPullTrigger = 0;
			soundEdge[] = {0.0099999998};
			soundOverride = "binoc_to_handgun";
			ConnectTo[]=
			{
				"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end",
				0.0099999998,
				"Unconscious",
				0.0099999998
			};
		};
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\opt\bin\AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.15385;
		};
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon: TransAnimBase
		{
			visibleSize = 0.35012501;
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\opt\bin\AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon";
			speed = 1.66667;
			showItemInHand = 1;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			canPullTrigger = 0;
			soundEdge[] = {0.0099999998};
			soundOverride = "binoc_to_handgun";
			ConnectTo[]=
			{
				"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end",
				0.0099999998,
				"Unconscious",
				0.0099999998
			};
		};
		class AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end: AmovPknlMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\opt\bin\AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 1.15385;
			showItemInHand = 0;
		};
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.7647099;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			InterpolationSpeed = 2.5;
			canPullTrigger = 0;
			enableOptics = 2;
			soundOverride = "unarmed_to_handgun";
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.07143;
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMevaSrasWpstDf: SprintCivilBaseDf
		{
			actions = "PistolStandEvasiveActionsF";
			limitGunMovement = 0.1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			showHandGun = 1;
			duty = 0.80000001;
			visibleSize = 1;
			static = 1;
			enableOptics = 0;
			speed = 1.666666;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDf";
			weaponIK = 2;
			headBobStrength = 0.233831;
			ConnectTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMwlkSrasWpstDf",
				0.025,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"Unconscious",
				0.1
			};
			disableWeaponsLong = 1;
		};
		class AmovPknlMevaSrasWpstDf: AmovPercMevaSrasWpstDf
		{
			aimPrecision = 8;
			duty = 1;
			relSpeedMin = 0.5;
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\spr\non\non\AmovPknlMevaSnonWnonDf";
			speed = 1.875;
			actions = "PistolKneelEvasiveActionsF";
			headBobStrength = 0.21393;
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPknlMrunSlowWpstDf",
				0.025,
				"AmovPknlMrunSrasWpstDf",
				0.025,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMevaSrasWpstDf",
				0.025,
				"AmovPercMevaSlowWpstDf",
				0.025,
				"AmovPknlMevaSrasWpstDfl",
				0.025,
				"AmovPknlMevaSrasWpstDfr",
				0.025,
				"Unconscious",
				0.1
			};
			soundEdge[] = {0,0.40000001,0.80000001};
		};
		class AmovPercMevaSlowWpstDf: AmovPercMevaSrasWpstDf
		{
			actions = "PistolLowStandActions";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSlowWpstDnon",
				0.025,
				"AmovPercMwlkSlowWpstDf",
				0.025,
				"AmovPercMrunSlowWpstDf",
				0.025,
				"AmovPercMevaSlowWpstDfl",
				0.025,
				"AmovPercMevaSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMevaSrasWpstDfl: AmovPercMevaSrasWpstDf
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			actions = "PistolStandEvasiveActionsFL";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDfl";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSrasWpstDnon",
				0.025,
				"AmovPercMwlkSrasWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AmovPknlMevaSrasWpstDfl",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMevaSrasWpstDfl: AmovPknlMevaSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\spr\non\non\AmovPknlMevaSnonWnonDfl";
			actions = "PistolKneelEvasiveActionsFL";
			InterpolateTo[]=
			{
				"AmovPknlMrunSlowWpstDfl",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.025,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPknlMevaSrasWpstDf",
				0.025,
				"AmovPercMevaSrasWpstDfl",
				0.025,
				"AmovPercMevaSlowWpstDfl",
				0.025,
				"AmovPknlMevaSrasWpstDfr",
				0.025,
				"AmovPercMevaSrasWpstDfl",
				0.025,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMevaSlowWpstDfl: AmovPercMevaSrasWpstDfl
		{
			actions = "PistolLowStandActions";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSlowWpstDnon",
				0.025,
				"AmovPercMwlkSlowWpstDfl",
				0.025,
				"AmovPercMrunSlowWpstDfl",
				0.025,
				"AmovPercMevaSlowWpstDf",
				0.025,
				"AmovPercMevaSlowWpstDfr",
				0.025,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMevaSrasWpstDfr: AmovPercMevaSrasWpstDf
		{
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			actions = "PistolStandEvasiveActionsFR";
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\Erc\spr\non\non\AmovPercMsprSnonWnonDfr";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSrasWpstDnon",
				0.025,
				"AmovPercMwlkSrasWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDr",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AmovPknlMevaSrasWpstDfr: AmovPknlMevaSrasWpstDf
		{
			file = "\A3\anims_f\Data\Anim\Sdr\Mov\knl\spr\non\non\AmovPknlMevaSnonWnonDfr";
			actions = "PistolKneelEvasiveActionsFR";
			headBobStrength = 0.20398;
			InterpolateTo[]=
			{
				"AmovPknlMrunSlowWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDfr",
				0.025,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPknlMevaSrasWpstDf",
				0.025,
				"AmovPercMevaSrasWpstDfr",
				0.025,
				"AmovPercMevaSlowWpstDfr",
				0.025,
				"AmovPknlMevaSrasWpstDfl",
				0.025,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMevaSlowWpstDfr: AmovPercMevaSrasWpstDfr
		{
			actions = "PistolLowStandActions";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSlowWpstDnon",
				0.025,
				"AmovPercMwlkSlowWpstDfr",
				0.025,
				"AmovPercMrunSlowWpstDfr",
				0.025,
				"AmovPercMevaSlowWpstDf",
				0.025,
				"AmovPercMevaSlowWpstDfl",
				0.025,
				"Unconscious",
				0.1
			};
		};
		class AmovPercMevaSrasWpstDr: AmovPercMrunSrasWpstDr
		{
			actions = "PistolStandEvasiveActionsR";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSrasWpstDnon",
				0.025,
				"AmovPercMwlkSrasWpstDfr",
				0.025,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPknlMevaSrasWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02
			};
		};
		class AmovPercMevaSrasWpstDl: AmovPercMrunSrasWpstDl
		{
			actions = "PistolStandEvasiveActionsL";
			InterpolateTo[]=
			{
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSrasWpstDnon",
				0.025,
				"AmovPercMwlkSrasWpstDfl",
				0.025,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"AmovPknlMevaSrasWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02
			};
		};
		class AmovPknlMevaSrasWpstDr: AmovPknlMrunSrasWpstDr
		{
			actions = "PistolKneelEvasiveActionsR";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.025,
				"AmovPknlMwlkSrasWpstDfr",
				0.025,
				"AmovPknlMrunSrasWpstDr",
				0.02,
				"AmovPknlMrunSrasWpstDfr",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPknlMevaSrasWpstDfl",
				0.02,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDr",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright",
				0.02
			};
		};
		class AmovPknlMevaSrasWpstDl: AmovPknlMrunSrasWpstDl
		{
			actions = "PistolKneelEvasiveActionsL";
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.025,
				"AmovPknlMwlkSrasWpstDfl",
				0.025,
				"AmovPknlMrunSrasWpstDfl",
				0.02,
				"AmovPknlMrunSrasWpstDl",
				0.02,
				"AmovPknlMevaSrasWpstDf",
				0.02,
				"AmovPknlMevaSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDl",
				0.02,
				"Unconscious",
				0.1,
				"AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft",
				0.02
			};
		};
		class AmovPsitMstpSnonWpstDnon_ground: AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground
		{
			variantAfter[] = {10,15,25};
			variantsPlayer[]=
			{
				"AmovPsitMstpSnonWpstDnon_ground",
				0.75,
				"AmovPsitMstpSnonWpstDnon_smoking",
				0.25
			};
			file = "\A3\anims_f\Data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_ground";
			speed = 1e+010;
			looped = 1;
			equivalentTo = "AmovPsitMstpSnonWpstDnon_ground";
			ConnectTo[]=
			{
				"AmovPsitMstpSnonWpstDnon_smoking",
				0.02,
				"AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998,
				"Acts_AidlPsitMstpSsurWnonDnon_loop",
				0.1
			};
		};
		class AmovPsitMstpSnonWpstDnon_smoking: AmovPsitMstpSnonWpstDnon_ground
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\sit\stp\low\rfl\AmovPsitMstpSlowWrflDnon_Smoking";
			speed = 0.039999999;
			ConnectTo[]=
			{
				"AmovPsitMstpSnonWpstDnon_ground",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AmovPsitMstpSnonWpstDnon_AmovPercMstpSnonWpstDnon_ground: AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground
		{
			actions = "PistolStandActions";
			canBlendStep = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\sit\stp\non\non\AmovPsitMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_ground";
			ConnectTo[]=
			{
				"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon",
				0.02
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSnonWpstDnon_AmovPsitMstpSnonWpstDnon_ground",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AwopPercMstpSgthWpstDnon_Part1: Default
		{
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part1";
			speed = 1.875;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = 0.60000002;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			headBobMode = 2;
			ConnectTo[]=
			{
				"AwopPercMstpSgthWpstDnon_Part2",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AwopPercMstpSgthWpstDnon_Part2: AwopPercMstpSgthWpstDnon_Part1
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part2";
			speed = 0.58499998;
			showHandGun = 0;
			ConnectTo[]=
			{
				"AwopPercMstpSgthWpstDnon_Part3",
				0.02
			};
		};
		class AwopPercMstpSgthWpstDnon_Part3: AwopPercMstpSgthWpstDnon_Part2
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part3";
			speed = 1.98;
			ConnectTo[]=
			{
				"AwopPercMstpSgthWpstDnon_Part4",
				0.02
			};
		};
		class AwopPercMstpSgthWpstDnon_Part4: AwopPercMstpSgthWpstDnon_Part3
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part4";
			speed = 0.64499998;
			ConnectTo[]=
			{
				"AwopPercMstpSgthWpstDnon_Part5",
				0.02
			};
		};
		class AwopPercMstpSgthWpstDnon_Part5: AwopPercMstpSgthWpstDnon_Part4
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\gth\pst\AwopPercMstpSgthWpstDnon_part5";
			speed = 2.1900001;
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.1
			};
		};
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart: Default
		{
			actions = "CivilStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart";
			speed = 1.6900001;
			soundOverride = "run";
			looped = 0;
			duty = 0.60000002;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			canPullTrigger = 0;
			headBobMode = 2;
			weaponIK = 2;
			ConnectTo[]=
			{
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow: AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthStart
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
			speed = 0.73000002;
			ConnectTo[]=
			{
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1
			};
		};
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm: AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthThrow
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm";
			speed = 1.1799999;
			ConnectTo[]=
			{
				"AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1
			};
		};
		class AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd: AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthArm
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\run\low\pst\AmovPercMrunSlowWpstDf_AmovPercMstpSrasWpstDnon_gthEnd";
			speed = 1.35;
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.1
			};
		};
		class AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1: Default
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AwopPercMrunSgthWnonDf_1";
			speed = 1.85;
			soundOverride = "Walk";
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = 0.60000002;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			headBobMode = 2;
			ConnectTo[]=
			{
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart: Default
		{
			actions = "CivilStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart";
			speed = 1.33;
			looped = 0;
			duty = 0.60000002;
			soundOverride = "wlk";
			headBobMode = 2;
			weaponIK = 2;
			ConnectTo[]=
			{
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow: AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthStart
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow";
			speed = 0.68000001;
			ConnectTo[]=
			{
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm",
				0.1
			};
		};
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm: AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthThrow
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm";
			speed = 1.17;
			ConnectTo[]=
			{
				"AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd",
				0.1
			};
		};
		class AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd: AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthArm
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\wlk\ras\pst\AmovPercMwlkSrasWpstDf_AmovPercMstpSrasWpstDnon_gthEnd";
			speed = 1.35;
			showHandGun = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.1
			};
		};
		class AwopPknlMstpSgthWpstDnon_Part1: Default
		{
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part1";
			speed = 1.875;
			looped = 0;
			showHandGun = 1;
			soundEnabled = 0;
			duty = 0.60000002;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wpst.p3d";
			headBobMode = 2;
			ConnectTo[]=
			{
				"AwopPknlMstpSgthWpstDnon_Part2",
				0.02
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AwopPknlMstpSgthWpstDnon_Part2: AwopPknlMstpSgthWpstDnon_Part1
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part2";
			speed = 0.58499998;
			showHandGun = 0;
			ConnectTo[]=
			{
				"AwopPknlMstpSgthWpstDnon_Part3",
				0.02
			};
		};
		class AwopPknlMstpSgthWpstDnon_Part3: AwopPknlMstpSgthWpstDnon_Part2
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part3";
			speed = 1.98;
			ConnectTo[]=
			{
				"AwopPknlMstpSgthWpstDnon_Part4",
				0.02
			};
		};
		class AwopPknlMstpSgthWpstDnon_Part4: AwopPknlMstpSgthWpstDnon_Part3
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part4";
			speed = 0.64499998;
			ConnectTo[]=
			{
				"AwopPknlMstpSgthWpstDnon_Part5",
				0.02
			};
		};
		class AwopPknlMstpSgthWpstDnon_Part5: AwopPknlMstpSgthWpstDnon_Part4
		{
			file = "\A3\anims_f\Data\Anim\Sdr\wop\knl\stp\gth\pst\AwopPknlMstpSgthWpstDnon_part5";
			speed = 2.1900001;
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.1
			};
		};
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon: TransAnimBase_noIK
		{
			actions = "BinocStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon";
			speed = 1.03448;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			weaponIK = 0;
			showHandGun = 1;
			canPullTrigger = 0;
			soundEdge[] = {0.0099999998};
			soundOverride = "handgun_to_binoc";
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end",
				0.0099999998,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end: AmovPercMstpSoptWbinDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end";
			speed = 1.25;
			showItemInHand = 1;
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
		};
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon: TransAnimBase
		{
			visibleSize = 0.35012501;
			actions = "BinocKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon";
			speed = 1.03448;
			disableWeapons = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			interpolationRestart = 2;
			showHandGun = 1;
			canPullTrigger = 0;
			soundEnabled = 1;
			soundOverride = "handgun_to_binoc";
			soundEdge[] = {0.0099999998};
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end",
				0.02
			};
			InterpolateTo[]=
			{
				"AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end",
				0.0099999998,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end: AmovPknlMstpSoptWbinDnon
		{
			static = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			soundOverride = 0;
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end";
			speed = 1.25;
			showItemInHand = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
		class AinvPknlMstpSlayWpstDnon_medic: AmovPknlMstpSrasWpstDnon
		{
			actions = "HealSelfPistolActionBase";
			interpolationRestart = 1;
			aiming = "empty";
			aimingBody = "empty";
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medic";
			speed = -6;
			limitGunMovement = 0;
			disableWeapons = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			variantsAI[] = {};
			variantsPlayer[] = {};
			weaponsIK = 0;
			soundOverride = "healselfpistolkneel";
			soundEnabled = 1;
			canReload = 0;
			soundEdge[] = {0.0099999998};
			rightHandIKCurve[] = {0};
			leftHandIKCurve[] = {0};
			looped = 0;
			canBlendStep = 0;
			ConnectTo[]=
			{
				"AinvPknlMstpSlayWpstDnon_medicOut",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
			relSpeedMin = 0.99667197;
			relSpeedMax = 0.99667197;
		};
		class AinvPknlMstpSlayWpstDnon_medicIn: AinvPknlMstpSlayWpstDnon_medic
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medic_in";
			speed = -0.5;
			soundOverride = "healselfpistolkneelin";
			ConnectTo[]=
			{
				"AinvPknlMstpSlayWpstDnon_medic",
				0.1
			};
		};
		class AinvPknlMstpSlayWpstDnon_medicOut: AmovPknlMstpSrasWpstDnon
		{
			variantsAI[] = {};
			variantsPlayer[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.80000001;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medic_out";
			speed = -0.5;
			soundOverride = "healselfpistolkneelout";
		};
		class AinvPknlMstpSlayWpstDnon_medicOther: AmovPknlMstpSrasWpstDnon
		{
			actions = "HealSelfPistolActionBase";
			interpolationRestart = 1;
			aiming = "empty";
			aimingBody = "empty";
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medicOther_mid";
			speed = 0.15385;
			limitGunMovement = 0;
			disableWeapons = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			variantsAI[] = {};
			variantsPlayer[] = {};
			weaponsIK = 0;
			showHandGun = 0;
			canReload = 0;
			soundOverride = "healselfpistolkneel";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
			looped = 0;
			canBlendStep = 0;
			ConnectTo[]=
			{
				"AinvPknlMstpSlayWpstDnon_medicOtherOut",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AinvPknlMstpSlayWpstDnon_medicOtherIn: AinvPknlMstpSlayWpstDnon_medic
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medicOther";
			speed = 2;
			soundOverride = "healselfpistolkneelin";
			ConnectTo[]=
			{
				"AinvPknlMstpSlayWpstDnon_medicOther",
				0.1
			};
		};
		class AinvPknlMstpSlayWpstDnon_medicOtherOut: AmovPknlMstpSrasWpstDnon
		{
			variantsAI[] = {};
			variantsPlayer[] = {};
			looped = 0;
			canBlendStep = 0;
			minPlayTime = 0.80000001;
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\lay\pst\AinvPknlMstpSlayWpstDnon_medicOther_end";
			speed = 1.875;
			soundOverride = "healselfpistolkneelout";
		};
		class AadjPercMwlkSrasWpstDf_left: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolAdjustLStandActionsWlkF";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDf_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfl_left: AmovPercMwlkSrasWpstDfl
		{
			actions = "PistolAdjustLStandActionsWlkFl";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDfl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDl_left: AmovPercMwlkSrasWpstDl
		{
			actions = "PistolAdjustLStandActionsWlkL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbl_left: AmovPercMwlkSrasWpstDbl
		{
			actions = "PistolAdjustLStandActionsWlkBL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDbl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDb_left: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolAdjustLStandActionsWlkB";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDb_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbr_left: AmovPercMwlkSrasWpstDbr
		{
			actions = "PistolAdjustLStandActionsWlkBr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDbr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDr_left: AmovPercMwlkSrasWpstDr
		{
			actions = "PistolAdjustLStandActionsWlkR";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfr_left: AmovPercMwlkSrasWpstDfr
		{
			actions = "PistolAdjustLStandActionsWlkFr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\wlk\ras\pst\AadjPercMwlkSrasWpstDfr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDf_left: AmovPercMtacSrasWpstDf
		{
			actions = "PistolAdjustLStandActionsTacF";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDf_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfl_left: AmovPercMtacSrasWpstDfl
		{
			actions = "PistolAdjustLStandActionsTacFl";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDfl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDl_left: AadjPercMtacSrasWpstDfl_left
		{
			actions = "PistolAdjustLStandActionsTacL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbl_left: AmovPercMtacSrasWpstDbl
		{
			actions = "PistolAdjustLStandActionsTacBL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDbl_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDb_left: AmovPercMtacSrasWpstDb
		{
			actions = "PistolAdjustLStandActionsTacB";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDb_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbr_left: AmovPercMtacSrasWpstDbr
		{
			actions = "PistolAdjustLStandActionsTacBr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDbr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDr_left: AmovPercMtacSrasWpstDr
		{
			actions = "PistolAdjustLStandActionsTacR";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfr_left: AmovPercMtacSrasWpstDfr
		{
			actions = "PistolAdjustLStandActionsTacFr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\tac\ras\pst\AadjPercMtacSrasWpstDfr_left";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDf_left: AmovPercMrunSrasWpstDf
		{
			actions = "PistolAdjustLStandActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfl_left: AmovPercMrunSrasWpstDfl
		{
			actions = "PistolAdjustLStandActionsRunFl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDl_left: AmovPercMrunSrasWpstDl
		{
			actions = "PistolAdjustLStandActionsRunL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbl_left: AmovPercMrunSrasWpstDbl
		{
			actions = "PistolAdjustLStandActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDb_left: AmovPercMrunSrasWpstDb
		{
			actions = "PistolAdjustLStandActionsRunB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbr_left: AmovPercMrunSrasWpstDbr
		{
			actions = "PistolAdjustLStandActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDr_left: AmovPercMrunSrasWpstDr
		{
			actions = "PistolAdjustLStandActionsRunR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfr_left: AmovPercMrunSrasWpstDfr
		{
			actions = "PistolAdjustLStandActionsRunFr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDf_left: AmovPercMevaSrasWpstDf
		{
			actions = "PistolAdjustLStandEvasiveActionsf";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfl_left: AmovPercMevaSrasWpstDfl
		{
			actions = "PistolAdjustLStandEvasiveActionsfl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfr_left: AmovPercMevaSrasWpstDfr
		{
			actions = "PistolAdjustLStandEvasiveActionsfr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDf_right: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolAdjustRStandActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfl_right: AmovPercMwlkSrasWpstDfl
		{
			actions = "PistolAdjustRStandActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDl_right: AmovPercMwlkSrasWpstDl
		{
			actions = "PistolAdjustRStandActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbl_right: AmovPercMwlkSrasWpstDbl
		{
			actions = "PistolAdjustRStandActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDb_right: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolAdjustRStandActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbr_right: AmovPercMwlkSrasWpstDbr
		{
			actions = "PistolAdjustRStandActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDr_right: AmovPercMwlkSrasWpstDr
		{
			actions = "PistolAdjustRStandActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfr_right: AmovPercMwlkSrasWpstDfr
		{
			actions = "PistolAdjustRStandActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDf_right: AmovPercMtacSrasWpstDf
		{
			actions = "PistolAdjustRStandActionsTacF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfl_right: AmovPercMtacSrasWpstDfl
		{
			actions = "PistolAdjustRStandActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDl_right: AmovPercMtacSrasWpstDl
		{
			actions = "PistolAdjustRStandActionsTacL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbl_right: AmovPercMtacSrasWpstDbl
		{
			actions = "PistolAdjustRStandActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDb_right: AmovPercMtacSrasWpstDb
		{
			actions = "PistolAdjustRStandActionsTacB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbr_right: AmovPercMtacSrasWpstDbr
		{
			actions = "PistolAdjustRStandActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDr_right: AmovPercMtacSrasWpstDr
		{
			actions = "PistolAdjustRStandActionsTacR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfr_right: AmovPercMtacSrasWpstDfr
		{
			actions = "PistolAdjustRStandActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDf_right: AmovPercMrunSrasWpstDf
		{
			actions = "PistolAdjustRStandActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfl_right: AmovPercMrunSrasWpstDfl
		{
			actions = "PistolAdjustRStandActionsRunFl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDl_right: AmovPercMrunSrasWpstDl
		{
			actions = "PistolAdjustRStandActionsRunL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbl_right: AmovPercMrunSrasWpstDbl
		{
			actions = "PistolAdjustRStandActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDb_right: AmovPercMrunSrasWpstDb
		{
			actions = "PistolAdjustRStandActionsRunB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbr_right: AmovPercMrunSrasWpstDbr
		{
			actions = "PistolAdjustRStandActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDr_right: AmovPercMrunSrasWpstDr
		{
			actions = "PistolAdjustRStandActionsRunR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfr_right: AmovPercMrunSrasWpstDfr
		{
			actions = "PistolAdjustRStandActionsRunFr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDf_right: AmovPercMevaSrasWpstDf
		{
			actions = "PistolAdjustRStandEvasiveActionsf";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfl_right: AmovPercMevaSrasWpstDfl
		{
			actions = "PistolAdjustRStandEvasiveActionsfl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfr_right: AmovPercMevaSrasWpstDfr
		{
			actions = "PistolAdjustRStandEvasiveActionsfr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDf_down: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolAdjustBStandActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfl_down: AmovPercMwlkSrasWpstDfl
		{
			actions = "PistolAdjustBStandActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDl_down: AmovPercMwlkSrasWpstDl
		{
			actions = "PistolAdjustBStandActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbl_down: AmovPercMwlkSrasWpstDbl
		{
			actions = "PistolAdjustBStandActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDb_down: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolAdjustBStandActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbr_down: AmovPercMwlkSrasWpstDbr
		{
			actions = "PistolAdjustBStandActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDr_down: AmovPercMwlkSrasWpstDr
		{
			actions = "PistolAdjustBStandActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfr_down: AmovPercMwlkSrasWpstDfr
		{
			actions = "PistolAdjustBStandActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDf_down: AmovPercMtacSrasWpstDf
		{
			actions = "PistolAdjustBStandActionsTacF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfl_down: AmovPercMtacSrasWpstDfl
		{
			actions = "PistolAdjustBStandActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDl_down: AmovPercMtacSrasWpstDl
		{
			actions = "PistolAdjustBStandActionsTacL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbl_down: AmovPercMtacSrasWpstDbl
		{
			actions = "PistolAdjustBStandActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDb_down: AmovPercMtacSrasWpstDb
		{
			actions = "PistolAdjustBStandActionsTacB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbr_down: AmovPercMtacSrasWpstDbr
		{
			actions = "PistolAdjustBStandActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDr_down: AmovPercMtacSrasWpstDr
		{
			actions = "PistolAdjustBStandActionsTacR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfr_down: AmovPercMtacSrasWpstDfr
		{
			actions = "PistolAdjustBStandActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDf_down: AmovPercMrunSrasWpstDf
		{
			actions = "PistolAdjustBStandActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfl_down: AmovPercMrunSrasWpstDfl
		{
			actions = "PistolAdjustBStandActionsRunFl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDl_down: AmovPercMrunSrasWpstDl
		{
			actions = "PistolAdjustBStandActionsRunL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbl_down: AmovPercMrunSrasWpstDbl
		{
			actions = "PistolAdjustBStandActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDb_down: AmovPercMrunSrasWpstDb
		{
			actions = "PistolAdjustBStandActionsRunB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbr_down: AmovPercMrunSrasWpstDbr
		{
			actions = "PistolAdjustBStandActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDr_down: AmovPercMrunSrasWpstDr
		{
			actions = "PistolAdjustBStandActionsRunR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfr_down: AmovPercMrunSrasWpstDfr
		{
			actions = "PistolAdjustBStandActionsRunFr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDf_down: AmovPercMevaSrasWpstDf
		{
			actions = "PistolAdjustBStandEvasiveActionsf";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfl_down: AmovPercMevaSrasWpstDfl
		{
			actions = "PistolAdjustBStandEvasiveActionsfl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfr_down: AmovPercMevaSrasWpstDfr
		{
			actions = "PistolAdjustBStandEvasiveActionsfr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDf_up: AmovPercMwlkSrasWpstDf
		{
			actions = "PistolAdjustFStandActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfl_up: AmovPercMwlkSrasWpstDfl
		{
			actions = "PistolAdjustFStandActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDl_up: AmovPercMwlkSrasWpstDl
		{
			actions = "PistolAdjustFStandActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbl_up: AmovPercMwlkSrasWpstDbl
		{
			actions = "PistolAdjustFStandActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDb_up: AmovPercMwlkSrasWpstDb
		{
			actions = "PistolAdjustFStandActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDbr_up: AmovPercMwlkSrasWpstDbr
		{
			actions = "PistolAdjustFStandActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDr_up: AmovPercMwlkSrasWpstDr
		{
			actions = "PistolAdjustFStandActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMwlkSrasWpstDfr_up: AmovPercMwlkSrasWpstDfr
		{
			actions = "PistolAdjustFStandActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDf_up: AmovPercMtacSrasWpstDf
		{
			actions = "PistolAdjustFStandActionsTacF";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfl_up: AmovPercMtacSrasWpstDfl
		{
			actions = "PistolAdjustFStandActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDl_up: AmovPercMtacSrasWpstDl
		{
			actions = "PistolAdjustFStandActionsTacL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbl_up: AmovPercMtacSrasWpstDbl
		{
			actions = "PistolAdjustFStandActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDb_up: AmovPercMtacSrasWpstDb
		{
			actions = "PistolAdjustFStandActionsTacB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDbr_up: AmovPercMtacSrasWpstDbr
		{
			actions = "PistolAdjustFStandActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDr_up: AmovPercMtacSrasWpstDr
		{
			actions = "PistolAdjustFStandActionsTacR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMtacSrasWpstDfr_up: AmovPercMtacSrasWpstDfr
		{
			actions = "PistolAdjustFStandActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDf_up: AmovPercMrunSrasWpstDf
		{
			actions = "PistolAdjustFStandActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfl_up: AmovPercMrunSrasWpstDfl
		{
			actions = "PistolAdjustFStandActionsRunFl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDl_up: AmovPercMrunSrasWpstDl
		{
			actions = "PistolAdjustFStandActionsRunL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbl_up: AmovPercMrunSrasWpstDbl
		{
			actions = "PistolAdjustFStandActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDb_up: AmovPercMrunSrasWpstDb
		{
			actions = "PistolAdjustFStandActionsRunB";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDbr_up: AmovPercMrunSrasWpstDbr
		{
			actions = "PistolAdjustFStandActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDr_up: AmovPercMrunSrasWpstDr
		{
			actions = "PistolAdjustFStandActionsRunR";
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMrunSrasWpstDfr_up: AmovPercMrunSrasWpstDfr
		{
			actions = "PistolAdjustFStandActionsRunFr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDf_up: AmovPercMevaSrasWpstDf
		{
			actions = "PistolAdjustFStandEvasiveActionsf";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfl_up: AmovPercMevaSrasWpstDfl
		{
			actions = "PistolAdjustFStandEvasiveActionsfl";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPercMevaSrasWpstDfr_up: AmovPercMevaSrasWpstDfr
		{
			actions = "PistolAdjustFStandEvasiveActionsfr";
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AadjPercMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDf_left: AmovPknlMwlkSrasWpstDf
		{
			actions = "PistolAdjustLKneelActionsWlkF";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDf_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfl_left: AmovPknlMwlkSrasWpstDfl
		{
			actions = "PistolAdjustLKneelActionsWlkFl";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDfl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDl_left: AmovPknlMwlkSrasWpstDl
		{
			actions = "PistolAdjustLKneelActionsWlkL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbl_left: AmovPknlMwlkSrasWpstDbl
		{
			actions = "PistolAdjustLKneelActionsWlkBL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDbl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDb_left: AmovPknlMwlkSrasWpstDb
		{
			actions = "PistolAdjustLKneelActionsWlkB";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDb_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbr_left: AmovPknlMwlkSrasWpstDbr
		{
			actions = "PistolAdjustLKneelActionsWlkBr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDbr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDr_left: AmovPknlMwlkSrasWpstDr
		{
			actions = "PistolAdjustLKneelActionsWlkR";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfr_left: AmovPknlMwlkSrasWpstDfr
		{
			actions = "PistolAdjustLKneelActionsWlkFr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\wlk\ras\pst\AadjPknlMwlkSrasWpstDfr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDf_left: AmovPknlMtacSrasWpstDf
		{
			actions = "PistolAdjustLKneelActionsTacF";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDf_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfl_left: AmovPknlMtacSrasWpstDfl
		{
			actions = "PistolAdjustLKneelActionsTacFl";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDfl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDl_left: AmovPknlMtacSrasWpstDl
		{
			actions = "PistolAdjustLKneelActionsTacL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDl_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbl_left: AmovPknlMtacSrasWpstDbl
		{
			actions = "PistolAdjustLKneelActionsTacBL";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDbl_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbl_left",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDb_left: AmovPknlMtacSrasWpstDb
		{
			actions = "PistolAdjustLKneelActionsTacB";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDb_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDb_left",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbr_left: AmovPknlMtacSrasWpstDbr
		{
			actions = "PistolAdjustLKneelActionsTacBr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDbr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbr_left",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDr_left: AmovPknlMtacSrasWpstDr
		{
			actions = "PistolAdjustLKneelActionsTacR";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDr_left",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfr_left: AmovPknlMtacSrasWpstDfr
		{
			actions = "PistolAdjustLKneelActionsTacFr";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\knl\tac\ras\pst\AadjPknlMtacSrasWpstDfr_left";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDf_left: AmovPknlMrunSrasWpstDf
		{
			actions = "PistolAdjustLKneelActionsRunF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AadjPercMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfl_left: AmovPknlMrunSrasWpstDfl
		{
			actions = "PistolAdjustLKneelActionsRunFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AadjPercMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDl_left: AmovPknlMrunSrasWpstDl
		{
			actions = "PistolAdjustLKneelActionsRunL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDl_left",
				0.02,
				"AadjPknlMtacSrasWpstDl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbl_left: AmovPknlMrunSrasWpstDbl
		{
			actions = "PistolAdjustLKneelActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbl_left",
				0.02,
				"AadjPknlMrunSrasWpstDl_left",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_left",
				0.02,
				"AadjPknlMtacSrasWpstDbl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDb_left: AmovPknlMrunSrasWpstDb
		{
			actions = "PistolAdjustLKneelActionsRunB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDb_left",
				0.02,
				"AadjPknlMrunSrasWpstDbl_left",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDb_left",
				0.02,
				"AadjPknlMtacSrasWpstDb_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbr_left: AmovPknlMrunSrasWpstDbr
		{
			actions = "PistolAdjustLKneelActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbr_left",
				0.02,
				"AadjPknlMrunSrasWpstDb_left",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_left",
				0.02,
				"AadjPknlMtacSrasWpstDbr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDr_left: AmovPknlMrunSrasWpstDr
		{
			actions = "PistolAdjustLKneelActionsRunR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDr_left",
				0.02,
				"AadjPknlMrunSrasWpstDbr_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDr_left",
				0.02,
				"AadjPknlMtacSrasWpstDr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfr_left: AmovPknlMrunSrasWpstDfr
		{
			actions = "PistolAdjustLKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AadjPercMrunSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDr_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDf_left: AmovPknlMevaSrasWpstDf
		{
			actions = "PistolAdjustLKneelEvasiveActionsf";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDf_left",
				0.02,
				"AadjPknlMevaSrasWpstDfr_left",
				0.02,
				"AadjPknlMevaSrasWpstDfl_left",
				0.02,
				"AadjPknlMwlkSrasWpstDf_left",
				0.02,
				"AadjPknlMtacSrasWpstDf_left",
				0.02,
				"AadjPknlMrunSrasWpstDf_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfl_left: AmovPknlMevaSrasWpstDfl
		{
			actions = "PistolAdjustLKneelEvasiveActionsfl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfl_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_left",
				0.02,
				"AadjPknlMtacSrasWpstDfl_left",
				0.02,
				"AadjPknlMrunSrasWpstDfl_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfr_left: AmovPknlMevaSrasWpstDfr
		{
			actions = "PistolAdjustLKneelEvasiveActionsfr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDleft",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfr_left",
				0.02,
				"AadjPknlMevaSrasWpstDf_left",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_left",
				0.02,
				"AadjPknlMtacSrasWpstDfr_left",
				0.02,
				"AadjPknlMrunSrasWpstDfr_left",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDf_right: AmovPknlMwlkSrasWpstDf
		{
			actions = "PistolAdjustRKneelActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfl_right: AmovPknlMwlkSrasWpstDfl
		{
			actions = "PistolAdjustRKneelActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDl_right: AmovPknlMwlkSrasWpstDl
		{
			actions = "PistolAdjustRKneelActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbl_right: AmovPknlMwlkSrasWpstDbl
		{
			actions = "PistolAdjustRKneelActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDb_right: AmovPknlMwlkSrasWpstDb
		{
			actions = "PistolAdjustRKneelActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbr_right: AmovPknlMwlkSrasWpstDbr
		{
			actions = "PistolAdjustRKneelActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDr_right: AmovPknlMwlkSrasWpstDr
		{
			actions = "PistolAdjustRKneelActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfr_right: AmovPknlMwlkSrasWpstDfr
		{
			actions = "PistolAdjustRKneelActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDf_right: AmovPknlMtacSrasWpstDf
		{
			actions = "PistolAdjustRKneelActionsTacF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfl_right: AmovPknlMtacSrasWpstDfl
		{
			actions = "PistolAdjustRKneelActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDl_right: AmovPknlMtacSrasWpstDl
		{
			actions = "PistolAdjustRKneelActionsTacL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDl_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbl_right: AmovPknlMtacSrasWpstDbl
		{
			actions = "PistolAdjustRKneelActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbl_right",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDb_right: AmovPknlMtacSrasWpstDb
		{
			actions = "PistolAdjustRKneelActionsTacB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDb_right",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbr_right: AmovPknlMtacSrasWpstDbr
		{
			actions = "PistolAdjustRKneelActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbr_right",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDr_right: AmovPknlMtacSrasWpstDr
		{
			actions = "PistolAdjustRKneelActionsTacR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDr_right",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfr_right: AmovPknlMtacSrasWpstDfr
		{
			actions = "PistolAdjustRKneelActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDf_right: AmovPknlMrunSrasWpstDf
		{
			actions = "PistolAdjustRKneelActionsRunF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AadjPercMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfl_right: AmovPknlMrunSrasWpstDfl
		{
			actions = "PistolAdjustRKneelActionsRunFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AadjPercMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDl_right: AmovPknlMrunSrasWpstDl
		{
			actions = "PistolAdjustRKneelActionsRunL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDl_right",
				0.02,
				"AadjPknlMtacSrasWpstDl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbl_right: AmovPknlMrunSrasWpstDbl
		{
			actions = "PistolAdjustRKneelActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbl_right",
				0.02,
				"AadjPknlMrunSrasWpstDl_right",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_right",
				0.02,
				"AadjPknlMtacSrasWpstDbl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDb_right: AmovPknlMrunSrasWpstDb
		{
			actions = "PistolAdjustRKneelActionsRunB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDb_right",
				0.02,
				"AadjPknlMrunSrasWpstDbl_right",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDb_right",
				0.02,
				"AadjPknlMtacSrasWpstDb_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbr_right: AmovPknlMrunSrasWpstDbr
		{
			actions = "PistolAdjustRKneelActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbr_right",
				0.02,
				"AadjPknlMrunSrasWpstDb_right",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_right",
				0.02,
				"AadjPknlMtacSrasWpstDbr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDr_right: AmovPknlMrunSrasWpstDr
		{
			actions = "PistolAdjustRKneelActionsRunR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDr_right",
				0.02,
				"AadjPknlMrunSrasWpstDbr_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDr_right",
				0.02,
				"AadjPknlMtacSrasWpstDr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfr_right: AmovPknlMrunSrasWpstDfr
		{
			actions = "PistolAdjustRKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AadjPercMrunSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDr_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDf_right: AmovPknlMevaSrasWpstDf
		{
			actions = "PistolAdjustRKneelEvasiveActionsf";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDf_right",
				0.02,
				"AadjPknlMevaSrasWpstDfr_right",
				0.02,
				"AadjPknlMevaSrasWpstDfl_right",
				0.02,
				"AadjPknlMwlkSrasWpstDf_right",
				0.02,
				"AadjPknlMtacSrasWpstDf_right",
				0.02,
				"AadjPknlMrunSrasWpstDf_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfl_right: AmovPknlMevaSrasWpstDfl
		{
			actions = "PistolAdjustRKneelEvasiveActionsfl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfl_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_right",
				0.02,
				"AadjPknlMtacSrasWpstDfl_right",
				0.02,
				"AadjPknlMrunSrasWpstDfl_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfr_right: AmovPknlMevaSrasWpstDfr
		{
			actions = "PistolAdjustRKneelEvasiveActionsfr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDright",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfr_right",
				0.02,
				"AadjPknlMevaSrasWpstDf_right",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_right",
				0.02,
				"AadjPknlMtacSrasWpstDfr_right",
				0.02,
				"AadjPknlMrunSrasWpstDfr_right",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDf_down: AmovPknlMwlkSrasWpstDf
		{
			actions = "PistolAdjustBKneelActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfl_down: AmovPknlMwlkSrasWpstDfl
		{
			actions = "PistolAdjustBKneelActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDl_down: AmovPknlMwlkSrasWpstDl
		{
			actions = "PistolAdjustBKneelActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbl_down: AmovPknlMwlkSrasWpstDbl
		{
			actions = "PistolAdjustBKneelActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDb_down: AmovPknlMwlkSrasWpstDb
		{
			actions = "PistolAdjustBKneelActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbr_down: AmovPknlMwlkSrasWpstDbr
		{
			actions = "PistolAdjustBKneelActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDr_down: AmovPknlMwlkSrasWpstDr
		{
			actions = "PistolAdjustBKneelActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfr_down: AmovPknlMwlkSrasWpstDfr
		{
			actions = "PistolAdjustBKneelActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDf_down: AmovPknlMtacSrasWpstDf
		{
			actions = "PistolAdjustBKneelActionsTacF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfl_down: AmovPknlMtacSrasWpstDfl
		{
			actions = "PistolAdjustBKneelActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDl_down: AmovPknlMtacSrasWpstDl
		{
			actions = "PistolAdjustBKneelActionsTacL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDl_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbl_down: AmovPknlMtacSrasWpstDbl
		{
			actions = "PistolAdjustBKneelActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbl_down",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDb_down: AmovPknlMtacSrasWpstDb
		{
			actions = "PistolAdjustBKneelActionsTacB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDb_down",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbr_down: AmovPknlMtacSrasWpstDbr
		{
			actions = "PistolAdjustBKneelActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbr_down",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDr_down: AmovPknlMtacSrasWpstDr
		{
			actions = "PistolAdjustBKneelActionsTacR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDr_down",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfr_down: AmovPknlMtacSrasWpstDfr
		{
			actions = "PistolAdjustBKneelActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDf_down: AmovPknlMrunSrasWpstDf
		{
			actions = "PistolAdjustBKneelActionsRunF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPercMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfl_down: AmovPknlMrunSrasWpstDfl
		{
			actions = "PistolAdjustBKneelActionsRunFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPercMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDl_down: AmovPknlMrunSrasWpstDl
		{
			actions = "PistolAdjustBKneelActionsRunL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDl_down",
				0.02,
				"AadjPknlMtacSrasWpstDl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbl_down: AmovPknlMrunSrasWpstDbl
		{
			actions = "PistolAdjustBKneelActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbl_down",
				0.02,
				"AadjPknlMrunSrasWpstDl_down",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_down",
				0.02,
				"AadjPknlMtacSrasWpstDbl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDb_down: AmovPknlMrunSrasWpstDb
		{
			actions = "PistolAdjustBKneelActionsRunB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDb_down",
				0.02,
				"AadjPknlMrunSrasWpstDbl_down",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDb_down",
				0.02,
				"AadjPknlMtacSrasWpstDb_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbr_down: AmovPknlMrunSrasWpstDbr
		{
			actions = "PistolAdjustBKneelActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbr_down",
				0.02,
				"AadjPknlMrunSrasWpstDb_down",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_down",
				0.02,
				"AadjPknlMtacSrasWpstDbr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDr_down: AmovPknlMrunSrasWpstDr
		{
			actions = "PistolAdjustBKneelActionsRunR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDr_down",
				0.02,
				"AadjPknlMrunSrasWpstDbr_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDr_down",
				0.02,
				"AadjPknlMtacSrasWpstDr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfr_down: AmovPknlMrunSrasWpstDfr
		{
			actions = "PistolAdjustBKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AadjPercMrunSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDr_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDf_down: AmovPknlMevaSrasWpstDf
		{
			actions = "PistolAdjustBKneelEvasiveActionsf";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDf_down",
				0.02,
				"AadjPknlMevaSrasWpstDfr_down",
				0.02,
				"AadjPknlMevaSrasWpstDfl_down",
				0.02,
				"AadjPknlMwlkSrasWpstDf_down",
				0.02,
				"AadjPknlMtacSrasWpstDf_down",
				0.02,
				"AadjPknlMrunSrasWpstDf_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfl_down: AmovPknlMevaSrasWpstDfl
		{
			actions = "PistolAdjustBKneelEvasiveActionsfl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfl_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_down",
				0.02,
				"AadjPknlMtacSrasWpstDfl_down",
				0.02,
				"AadjPknlMrunSrasWpstDfl_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfr_down: AmovPknlMevaSrasWpstDfr
		{
			actions = "PistolAdjustBKneelEvasiveActionsfr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDdown",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfr_down",
				0.02,
				"AadjPknlMevaSrasWpstDf_down",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_down",
				0.02,
				"AadjPknlMtacSrasWpstDfr_down",
				0.02,
				"AadjPknlMrunSrasWpstDfr_down",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDf_up: AmovPknlMwlkSrasWpstDf
		{
			actions = "PistolAdjustFKneelActionsWlkF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfl_up: AmovPknlMwlkSrasWpstDfl
		{
			actions = "PistolAdjustFKneelActionsWlkFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDl_up: AmovPknlMwlkSrasWpstDl
		{
			actions = "PistolAdjustFKneelActionsWlkL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbl_up: AmovPknlMwlkSrasWpstDbl
		{
			actions = "PistolAdjustFKneelActionsWlkBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDb_up: AmovPknlMwlkSrasWpstDb
		{
			actions = "PistolAdjustFKneelActionsWlkB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDbr_up: AmovPknlMwlkSrasWpstDbr
		{
			actions = "PistolAdjustFKneelActionsWlkBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDr_up: AmovPknlMwlkSrasWpstDr
		{
			actions = "PistolAdjustFKneelActionsWlkR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMwlkSrasWpstDfr_up: AmovPknlMwlkSrasWpstDfr
		{
			actions = "PistolAdjustFKneelActionsWlkFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDf_up: AmovPknlMtacSrasWpstDf
		{
			actions = "PistolAdjustFKneelActionsTacF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfl_up: AmovPknlMtacSrasWpstDfl
		{
			actions = "PistolAdjustFKneelActionsTacFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDl_up: AmovPknlMtacSrasWpstDl
		{
			actions = "PistolAdjustFKneelActionsTacL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDl_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbl_up: AmovPknlMtacSrasWpstDbl
		{
			actions = "PistolAdjustFKneelActionsTacBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbl_up",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDb_up: AmovPknlMtacSrasWpstDb
		{
			actions = "PistolAdjustFKneelActionsTacB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDb_up",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDbr_up: AmovPknlMtacSrasWpstDbr
		{
			actions = "PistolAdjustFKneelActionsTacBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDbr_up",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDr_up: AmovPknlMtacSrasWpstDr
		{
			actions = "PistolAdjustFKneelActionsTacR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDr_up",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMtacSrasWpstDfr_up: AmovPknlMtacSrasWpstDfr
		{
			actions = "PistolAdjustFKneelActionsTacFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDf_up: AmovPknlMrunSrasWpstDf
		{
			actions = "PistolAdjustFKneelActionsRunF";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AadjPercMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfl_up: AmovPknlMrunSrasWpstDfl
		{
			actions = "PistolAdjustFKneelActionsRunFl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AadjPercMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDl_up: AmovPknlMrunSrasWpstDl
		{
			actions = "PistolAdjustFKneelActionsRunL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDl_up",
				0.02,
				"AadjPknlMtacSrasWpstDl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbl_up: AmovPknlMrunSrasWpstDbl
		{
			actions = "PistolAdjustFKneelActionsRunBL";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbl_up",
				0.02,
				"AadjPknlMrunSrasWpstDl_up",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbl_up",
				0.02,
				"AadjPknlMtacSrasWpstDbl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDb_up: AmovPknlMrunSrasWpstDb
		{
			actions = "PistolAdjustFKneelActionsRunB";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDb_up",
				0.02,
				"AadjPknlMrunSrasWpstDbl_up",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDb_up",
				0.02,
				"AadjPknlMtacSrasWpstDb_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDbr_up: AmovPknlMrunSrasWpstDbr
		{
			actions = "PistolAdjustFKneelActionsRunBr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDbr_up",
				0.02,
				"AadjPknlMrunSrasWpstDb_up",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDbr_up",
				0.02,
				"AadjPknlMtacSrasWpstDbr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDr_up: AmovPknlMrunSrasWpstDr
		{
			actions = "PistolAdjustFKneelActionsRunR";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMrunSrasWpstDr_up",
				0.02,
				"AadjPknlMrunSrasWpstDbr_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDr_up",
				0.02,
				"AadjPknlMtacSrasWpstDr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMrunSrasWpstDfr_up: AmovPknlMrunSrasWpstDfr
		{
			actions = "PistolAdjustFKneelActionsRunFr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AadjPercMrunSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDr_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDf_up: AmovPknlMevaSrasWpstDf
		{
			actions = "PistolAdjustFKneelEvasiveActionsf";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDf_up",
				0.02,
				"AadjPknlMevaSrasWpstDfr_up",
				0.02,
				"AadjPknlMevaSrasWpstDfl_up",
				0.02,
				"AadjPknlMwlkSrasWpstDf_up",
				0.02,
				"AadjPknlMtacSrasWpstDf_up",
				0.02,
				"AadjPknlMrunSrasWpstDf_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfl_up: AmovPknlMevaSrasWpstDfl
		{
			actions = "PistolAdjustFKneelEvasiveActionsfl";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfl_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfl_up",
				0.02,
				"AadjPknlMtacSrasWpstDfl_up",
				0.02,
				"AadjPknlMrunSrasWpstDfl_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AadjPknlMevaSrasWpstDfr_up: AmovPknlMevaSrasWpstDfr
		{
			actions = "PistolAdjustFKneelEvasiveActionsfr";
			InterpolateTo[]=
			{
				"AadjPknlMstpSrasWpstDup",
				0.02,
				"AmovPercMsprSlowWpstDf_AmovPpneMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon",
				0.02,
				"AadjPercMevaSrasWpstDfr_up",
				0.02,
				"AadjPknlMevaSrasWpstDf_up",
				0.02,
				"AadjPknlMwlkSrasWpstDfr_up",
				0.02,
				"AadjPknlMtacSrasWpstDfr_up",
				0.02,
				"AadjPknlMrunSrasWpstDfr_up",
				0.02,
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			actions = "PistolStandTakeActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.8;
			disableWeapons = 1;
			looped = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end: AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\erc\stp\ras\pst\AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end";
			speed = 1.15;
			showHandGun = 0;
			limitGunMovement = 0;
			ConnectTo[]=
			{
				"AinvPknlMstpSnonWnonDnon_1",
				0.0099999998
			};
		};
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon";
			speed = 1.04;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[]=
			{
				"AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			actions = "PistolStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end";
			speed = 1.97;
			showHandgun = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wnon.p3d";
			canPullTrigger = 0;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02
			};
		};
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon: AmovPknlMstpSrasWpstDnon
		{
			static = 1;
			variantsPlayer[] = {};
			actions = "PistolKneelTakeActions";
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon";
			speed = 1.5700001;
			disableWeapons = 1;
			enableOptics = 0;
			looped = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.0099999998
			};
		};
		class AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end: AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon
		{
			file = "\A3\anims_f\Data\Anim\Sdr\mov\knl\stp\ras\pst\AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end";
			speed = 1.15;
			showHandGun = 0;
			limitGunMovement = 0;
			ConnectTo[]=
			{
				"AinvPknlMstpSnonWnonDnon_2",
				0.0099999998,
				"AinvPknlMstpSnonWnonDnon_healed_1",
				0.02
			};
		};
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pknl_Wnon.p3d";
			canPullTrigger = 0;
			enableOptics = 2;
			ConnectTo[]=
			{
				"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end: AmovPknlMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon_end
		{
			actions = "PistolKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\inv\knl\stp\non\non\AinvPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end";
			speed = 1.97;
			showHandgun = 1;
			canPullTrigger = 0;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02
			};
		};
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			file = "\A3\anims_f\Data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutLow";
			speed = 1.9;
			looped = 0;
			soundOverride = "Walk";
			disableWeapons = 1;
			enableOptics = 0;
			leaningFactorEnd = 0;
			canPullTrigger = 0;
			minPlayTime = 0.94999999;
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			ConnectTo[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"Unconscious",
				0.1
			};
		};
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium: AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			file = "\A3\anims_f\Data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutMedium";
			speed = 1.3329999;
		};
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh: AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			file = "\A3\anims_f\Data\Anim\Sdr\crg\knl\stp\non\non\AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_GetOutHigh";
			speed = 0.91500002;
		};
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak: AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			file = "\A3\anims_f\Data\Anim\Sdr\crg\knl\stp\non\non\GetOutHighZamak";
			speed = 0.5;
		};
		class AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt: AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow
		{
			file = "\A3\Anims_F\data\Anim\sdr\crg\knl\stp\non\non\GetOutHighHemtt";
			speed = 0.5;
		};
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1: AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1
		{
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2",
				0.22
			};
			InterpolateTo[]=
			{
				"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon",
				0.2,
				"AcinPknlMwlkSnonWpstDb_death",
				0.2,
				"AcinPknlMwlkSnonWpstDb_agony",
				0.2
			};
		};
		class AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2: AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_2
		{
			actions = "MoveWithInjuredManDraggerPst";
			showHandGun = 1;
			ConnectTo[]=
			{
				"AcinPknlMstpSnonWpstDnon",
				0.0099999998,
				"AcinPknlMwlkSnonWpstDb",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon",
				0.2,
				"AcinPknlMwlkSnonWpstDb_death",
				0.2,
				"AcinPknlMwlkSnonWpstDb_agony",
				0.2
			};
		};
		class AcinPknlMstpSnonWpstDnon: AcinPknlMstpSrasWrflDnon
		{
			actions = "MoveWithInjuredManDraggerPst";
			showHandGun = 1;
			ConnectTo[]=
			{
				"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon",
				0.15000001,
				"AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.1,
				"AcinPknlMstpSnonWpstDnon_AmovPpneMstpSrasWpstDnon",
				0.1,
				"AcinPknlMwlkSnonWpstDb",
				0.1
			};
			InterpolateTo[]=
			{
				"AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon",
				0.15000001,
				"AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon",
				0.1,
				"AcinPknlMwlkSnonWpstDb",
				0.1,
				"AcinPknlMwlkSnonWpstDb_death",
				0.2,
				"AcinPknlMwlkSnonWpstDb_agony",
				0.2,
				"Helper_SwitchToCarrynon_pst",
				0.1
			};
		};
		class AcinPknlMwlkSnonWpstDb_AmovPercMstpSrasWpstDnon: AcinPknlMwlkSnonWnonDb_AmovPercMstpSnonWnonDnon
		{
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.1
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.1,
				"Unconscious",
				0.1
			};
		};
		class AcinPknlMstpSnonWpstDnon_AmovPknlMstpSrasWpstDnon: AcinPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon
		{
			showHandGun = 1;
			ConnectTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.1
			};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class AcinPknlMwlkSnonWpstDb_agony: AcinPknlMwlkSnonWnonDb_agony
		{
			showHandGun = 1;
			InterpolateTo[]=
			{
				"AmovPpneMstpSnonWpstDnon_injured",
				0.1,
				"Unconscious",
				0.1
			};
		};
		class AcinPercMstpSnonWpstDnon_agony: AcinPercMstpSnonWnonDnon_agony
		{
			ConnectTo[]=
			{
				"AmovPpneMstpSnonWpstDnon_injured",
				0.1
			};
		};
		class AadjPercMstpSrasWpstDleft_AadjPknlMstpSrasWpstDleft: AadjPknlMstpSrasWpstDleft
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPknlMstpSrasWpstDleft_AadjPercMstpSrasWpstDleft";
			visibleSize = 0.400125;
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPercMstpSrasWpstDleft_AadjPknlMstpSrasWpstDleft";
			speed = -0.44999999;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			aimprecision = 0.5;
			adjstance = "l";
			soundOverride = "adjust_stand_to_kneel";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AadjPknlMstpSrasWpstDleft_AadjPercMstpSrasWpstDleft: AadjPercMstpSrasWpstDleft
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPercMstpSrasWpstDleft_AadjPknlMstpSrasWpstDleft";
			visibleSize = 0.400125;
			actions = "PistolAdjustLStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPknlMstpSrasWpstDleft_AadjPercMstpSrasWpstDleft";
			speed = -0.55000001;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			adjstance = "l";
			soundOverride = "adjust_kneel_to_stand";
			soundEnabled = 1;
			soundEdge[] = {0.0099999998};
		};
		class AadjPercMstpSrasWpstDright_AadjPknlMstpSrasWpstDright: AadjPknlMstpSrasWpstDright
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPknlMstpSrasWpstDright_AadjPercMstpSrasWpstDright";
			visibleSize = 0.400125;
			actions = "PistolAdjustRKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPercMstpSrasWpstDright_AadjPknlMstpSrasWpstDright";
			speed = -0.44999999;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			aimprecision = 0.5;
			adjstance = "r";
			soundEnabled = 1;
			soundOverride = "adjust_stand_to_kneel";
			soundEdge[] = {0.0099999998};
		};
		class AadjPknlMstpSrasWpstDright_AadjPercMstpSrasWpstDright: AadjPercMstpSrasWpstDright
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPercMstpSrasWpstDright_AadjPknlMstpSrasWpstDright";
			visibleSize = 0.400125;
			actions = "PistolAdjustRStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPknlMstpSrasWpstDright_AadjPercMstpSrasWpstDright";
			speed = -0.55000001;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			adjstance = "r";
			soundOverride = "adjust_kneel_to_stand";
			soundEnabled = 1;
		};
		class AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDdown: AadjPknlMstpSrasWpstDdown
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPknlMstpSrasWpstDdown_AadjPercMstpSrasWpstDdown";
			visibleSize = 0.400125;
			actions = "PistolAdjustBKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDdown";
			speed = -0.44999999;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundOverride = "adjust_stand_to_kneel";
			soundEnabled = 1;
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			aimprecision = 0.5;
			adjstance = "d";
		};
		class AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDup: AadjPknlMstpSrasWpstDup
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDdown";
			visibleSize = 0.400125;
			actions = "PistolAdjustFKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDup";
			speed = -0.34999999;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundEnabled = 1;
			soundOverride = "adjust_standlow_to_kneelhigh";
			soundEdge[] = {0.0099999998};
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			aimprecision = 0.5;
			adjstance = "u";
		};
		class AadjPknlMstpSrasWpstDdown_AadjPercMstpSrasWpstDdown: AadjPercMstpSrasWpstDdown
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDdown";
			visibleSize = 0.400125;
			actions = "PistolAdjustFStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPknlMstpSrasWpstDdown_AadjPercMstpSrasWpstDdown";
			speed = -0.55000001;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundEnabled = 1;
			soundOverride = "adjust_kneel_to_stand";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			adjstance = "d";
		};
		class AadjPercMstpSrasWpstDup_AadjPknlMstpSrasWpstDup: AadjPknlMstpSrasWpstDup
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDup";
			visibleSize = 0.400125;
			actions = "PistolAdjustFKneelActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPercMstpSrasWpstDup_AadjPknlMstpSrasWpstDup";
			speed = -0.34999999;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundEnabled = 1;
			soundOverride = "adjust_stand_to_kneel";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			aimprecision = 0.5;
			adjstance = "u";
		};
		class AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDup: AadjPercMstpSrasWpstDup
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPercMstpSrasWpstDup_AadjPknlMstpSrasWpstDup";
			visibleSize = 0.400125;
			actions = "PistolAdjustFStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDup";
			speed = -0.55000001;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundEnabled = 1;
			soundOverride = "adjust_kneel_to_stand";
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			adjstance = "u";
		};
		class AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDdown: AadjPercMstpSrasWpstDdown
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 0;
			looped = 0;
			minPlayTime = 0.64999998;
			reverse = "AadjPercMstpSrasWpstDdown_AadjPknlMstpSrasWpstDup";
			visibleSize = 0.400125;
			actions = "PistolAdjustBStandActions";
			file = "\A3\anims_f\Data\Anim\Sdr\adj\erc\stp\ras\pst\AadjPknlMstpSrasWpstDup_AadjPercMstpSrasWpstDdown";
			speed = -0.30000001;
			leaningFactorBeg = 1;
			leaningFactorEnd = 1;
			interpolationRestart = 1;
			enableOptics = 1;
			soundEnabled = 1;
			soundOverride = "adjust_kneelhigh_to_standlow";
			soundEdge[] = {0.0099999998};
			showHandGun = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			headBobStrength = 0.512438;
			duty = 0.30000001;
			adjstance = "d";
		};
		class AfalPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\sdr\fal\erc\stp\ras\pst\AfalPercMstpSrasWpstDnon";
			speed = -1.5;
			aimPrecision = 7;
			interpolationRestart = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPercMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_1",
				0.0099999998,
				"AmovPercMwlkSrasWpstDf",
				0.02,
				"AmovPercMwlkSrasWpstDfl",
				0.02,
				"AmovPercMwlkSrasWpstDl",
				0.02,
				"AmovPercMwlkSrasWpstDbl",
				0.02,
				"AmovPercMwlkSrasWpstDb",
				0.02,
				"AmovPercMwlkSrasWpstDbr",
				0.02,
				"AmovPercMwlkSrasWpstDr",
				0.02,
				"AmovPercMwlkSrasWpstDfr",
				0.02,
				"AmovPercMrunSrasWpstDf",
				0.02,
				"AmovPercMrunSrasWpstDfl",
				0.02,
				"AmovPercMrunSrasWpstDl",
				0.02,
				"AmovPercMrunSrasWpstDbl",
				0.02,
				"AmovPercMrunSrasWpstDb",
				0.02,
				"AmovPercMrunSrasWpstDbr",
				0.02,
				"AmovPercMrunSrasWpstDr",
				0.02,
				"AmovPercMrunSrasWpstDfr",
				0.02,
				"AmovPercMevaSrasWpstDf",
				0.02,
				"AmovPercMevaSrasWpstDfl",
				0.02,
				"AmovPercMevaSrasWpstDfr",
				0.02,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWpstDf",
				0.02,
				"AmovPercMtacSrasWpstDfl",
				0.02,
				"AmovPercMtacSrasWpstDl",
				0.02,
				"AmovPercMtacSrasWpstDbl",
				0.02,
				"AmovPercMtacSrasWpstDb",
				0.02,
				"AmovPercMtacSrasWpstDbr",
				0.02,
				"AmovPercMtacSrasWpstDr",
				0.02,
				"AmovPercMtacSrasWpstDfr",
				0.02,
				"Helper_SwitchToCarrynon_pst",
				0.2,
				"HaloFreeFall_non",
				10.2,
				"AmovPercMstpSrasWpstDnon_falling",
				0.02,
				"AinvPercMstpSrasWrflDnon",
				0.050000001,
				"AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon",
				0.02,
				"AmovPercMstpSrasWpstDnon_AinvPercMstpSrasWpstDnon_Putdown",
				0.02,
				"LadderCivilOn_top",
				1,
				"LadderCivilOn_bottom",
				1,
				"AfalPercMstpSrasWpstDnon",
				0.025,
				"AmovPercMstpSrasWpstDnon",
				0.025
			};
		};
		class AfalPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			file = "\A3\anims_f\Data\Anim\sdr\fal\knl\stp\ras\pst\AfalPknlMstpSrasWpstDnon";
			speed = -1;
			aimPrecision = 7;
			interpolationRestart = 1;
			variantsPlayer[] = {};
			variantsAI[] = {};
			InterpolateTo[]=
			{
				"AidlPknlMstpSrasWpstDnon_AI",
				0.02,
				"AinvPknlMstpSlayWpstDnon_medicIn",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnL",
				0.02,
				"AmovPknlMstpSrasWpstDnon_turnR",
				0.02,
				"AmovPknlMwlkSrasWpstDf",
				0.02,
				"AmovPknlMwlkSrasWpstDfl",
				0.02,
				"AmovPknlMwlkSrasWpstDl",
				0.02,
				"AmovPknlMwlkSrasWpstDbl",
				0.02,
				"AmovPknlMwlkSrasWpstDb",
				0.02,
				"AmovPknlMwlkSrasWpstDbr",
				0.02,
				"AmovPknlMwlkSrasWpstDr",
				0.02,
				"AmovPknlMwlkSrasWpstDfr",
				0.02,
				"AmovPknlMrunSrasWpstDf",
				0.02,
				"AmovPknlMrunSrasWpstDfl",
				0.02,
				"AmovPknlMrunSrasWpstDl",
				0.02,
				"AmovPknlMrunSrasWpstDbl",
				0.02,
				"AmovPknlMrunSrasWpstDb",
				0.02,
				"AmovPknlMrunSrasWpstDbr",
				0.02,
				"AmovPknlMrunSrasWpstDr",
				0.02,
				"AmovPknlMrunSrasWpstDfr",
				0.02,
				"Unconscious",
				0.0099999998,
				"AovrPercMstpSrasWpstDf",
				0.029999999,
				"AmovPercMstpSrasWpstDnon_AcinPknlMwlkSnonWpstDb_2",
				0.2,
				"AmovPknlMstpSrasWpstDnon_relax",
				0.2,
				"AinvPercMstpSrasWrflDnon",
				0.050000001,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon",
				0.02,
				"AmovPknlMstpSrasWpstDnon_AinvPknlMstpSrasWpstDnon_Putdown",
				0.02,
				"AfalPknlMstpSrasWpstDnon",
				0.025,
				"AmovPknlMstpSrasWpstDnon",
				0.025
			};
		};
		class AfdsPercMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon_AfdsPercMstpSrasWrflDnon",
				0.0099999998,
				"AfdsPercMstpSrasWpstDnon_AfdsPercMstpSlowWpstDnon",
				0.02,
				"AfdsPercMstpSrasWpstDnon_turnR",
				0.02,
				"AfdsPercMstpSrasWpstDnon_turnL",
				0.02,
				"AfdsPercMstpSrasWpstDnon_AfdsPknlMstpSrasWpstDnon",
				0.0099999998,
				"AfdsPercMstpSrasWpstDnon_AfdsPpneMstpSrasWpstDnon",
				0.0099999998,
				"AfdsPercMstpSrasWpstDnon_AfdsPercMstpSnonWnonDnon",
				0.0099999998,
				"AfdsPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolStandActions";
			InterpolateTo[]=
			{
				"AmovPercMstpSrasWpstDnon",
				0.02,
				"AfdsPercMstpSrasWpstDnon_turnR",
				0.02,
				"AfdsPercMstpSrasWpstDnon_turnL",
				0.02,
				"AfdsPercMstpSrasWpstDnon_inv",
				0.050000001
			};
		};
		class AfdsPercMstpSlowWpstDnon: AmovPercMstpSlowWpstDnon
		{
			actions = "FiringDrillsPistolLowStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSlowWpstDnon_AfdsPercMstpSrasWpstDnon",
				0.0099999998,
				"AfdsPercMstpSlowWpstDnon_turnL",
				0.02,
				"AfdsPercMstpSlowWpstDnon_turnR",
				0.02,
				"AfdsPercMstpSlowWpstDnon_AfdsPknlMstpSlowWpstDnon",
				0.0099999998,
				"AfdsPercMstpSlowWpstDnon",
				0.050000001,
				"AfdsPercMstpSlowWpstDnon_AfdsPpneMstpSrasWpstDnon",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPercMstpSlowWpstDnon",
				0.02,
				"AfdsPercMstpSlowWpstDnon_turnL",
				0.02,
				"AfdsPercMstpSlowWpstDnon_turnR",
				0.02,
				"AfdsPercMstpSlowWpstDnon_inv",
				0.050000001
			};
		};
		class AfdsPknlMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon_AfdsPercMstpSrasWpstDnon",
				0.0099999998,
				"AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSlowWpstDnon",
				0.0099999998,
				"AfdsPknlMstpSrasWpstDnon_turnL",
				0.02,
				"AfdsPknlMstpSrasWpstDnon_turnR",
				0.02,
				"AfdsPknlMstpSrasWpstDnon_AfdsPpneMstpSrasWpstDnon",
				0.0099999998,
				"AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSrasWrflDnon",
				0.0099999998,
				"AfdsPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon",
				0.0099999998
			};
			InterpolateTo[]=
			{
				"AmovPknlMstpSrasWpstDnon",
				0.02,
				"AfdsPknlMstpSrasWpstDnon_turnL",
				0.02,
				"AfdsPknlMstpSrasWpstDnon_turnR",
				0.02,
				"AfdsPknlMstpSrasWpstDnon_inv",
				0.050000001
			};
			actions = "FiringDrillsPistolKneelActions";
		};
		class AfdsPknlMstpSlowWpstDnon: AmovPknlMstpSlowWpstDnon
		{
			InterpolateTo[]=
			{
				"AmovPknlMstpSlowWpstDnon",
				0.02,
				"AfdsPknlMstpSlowWpstDnon_turnL",
				0.02,
				"AfdsPknlMstpSlowWpstDnon_turnR",
				0.02,
				"AfdsPknlMstpSlowWpstDnon_inv",
				0.050000001
			};
			ConnectTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon_AfdsPknlMstpSrasWpstDnon",
				0.0099999998,
				"AfdspPknlMstpSlowWpstDnon_AfdspPercMstpSlowWpstDnon",
				0.0099999998,
				"AfdsPknlMstpSlowWpstDnon_turnL",
				0.02,
				"AfdsPknlMstpSlowWpstDnon_turnR",
				0.02,
				"AfdsPknlMstpSlowWpstDnon_AfdsPpneMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolLowKneelActions";
		};
		class AfdsPercMstpSrasWrflDnon_AfdsPercMstpSrasWpstDnon: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "FiringDrillsPistolStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWrflDnon_AfdsPercMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AfdsPercMstpSrasWrflDnon_AfdsPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "FiringDrillsPistolStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.0099999998
			};
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPercMstpSrasWrflDnon: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon_AfdsPercMstpSrasWrflDnon_end",
				0.0099999998
			};
			actions = "FiringDrillsRifleStandActions";
		};
		class AfdsPknlMstpSrasWrflDnon_AfdsPknlMstpSrasWpstDnon: AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon
		{
			actions = "FiringDrillsPistolKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWrflDnon_AfdsPknlMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AfdsPknlMstpSrasWrflDnon_AfdsPknlMstpSrasWpstDnon_end: AmovPknlMstpSrasWrflDnon_AmovPknlMstpSrasWpstDnon_end
		{
			actions = "FiringDrillsPistolKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.0099999998
			};
		};
		class AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSrasWrflDnon_end: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon_end
		{
			actions = "FiringDrillsRifleKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWrflDnon",
				0.0099999998
			};
		};
		class AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSrasWrflDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSrasWrflDnon
		{
			actions = "FiringDrillsRifleKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSrasWrflDnon_end",
				0.0099999998
			};
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPercMstpSrasWrflDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWrflDnon",
				0.0099999998
			};
			actions = "FiringDrillsRifleStandActions";
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPercMstpSlowWpstDnon: AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon
		{
			actions = "FiringDrillsPistolLowStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.02
			};
		};
		class AfdsPercMstpSlowWpstDnon_AfdsPercMstpSrasWpstDnon: AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolStandActions";
		};
		class AfdsPercMstpSlowWpstDnon_AfdsPknlMstpSlowWpstDnon: AmovPercMstpSlowWpstDnon_AmovPknlMstpSlowWpstDnon
		{
			actions = "FiringDrillsPistolLowKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.0099999998
			};
		};
		class AfdspPknlMstpSlowWpstDnon_AfdspPercMstpSlowWpstDnon: AmovPknlMstpSlowWpstDnon_AmovPercMstpSlowWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolLowStandActions";
		};
		class AfdsPknlMstpSrasWpstDnon_AfdsPercMstpSrasWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolStandActions";
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPknlMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolKneelActions";
		};
		class AfdsPknlMstpSlowWpstDnon_AfdsPknlMstpSrasWpstDnon: AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolKneelActions";
		};
		class AfdsPknlMstpSrasWpstDnon_AfdsPknlMstpSlowWpstDnon: AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolLowKneelActions";
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPercMstpSnonWnonDnon: AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon_AfdsPercMstpSnonWnonDnon_end",
				0.0099999998
			};
			actions = "FiringDrillsCivilStandActions";
		};
		class AfdsPercMstpSrasWpstDnon_AfdsPercMstpSnonWnonDnon_end: AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon_end
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSnonWnonDnon",
				0.0099999998
			};
			actions = "FiringDrillsCivilStandActions";
		};
		class AfdsPercMstpSnonWnonDnon_AfdsPercMstpSrasWpstDnon: AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSnonWnonDnon_AfdsPercMstpSrasWpstDnon_end",
				0.0099999998
			};
			actions = "FiringDrillsPistolStandActions";
		};
		class AfdsPercMstpSnonWnonDnon_AfdsPercMstpSrasWpstDnon_end: AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_end
		{
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolStandActions";
		};
		class AfdsPknlMstpSnonWnonDnon_AfdsPknlMstpSrasWpstDnon: AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSnonWnonDnon_AfdsPknlMstpSrasWpstDnon_end",
				0.0099999998
			};
			actions = "FiringDrillsPistolKneelActions";
		};
		class AfdsPknlMstpSnonWnonDnon_AfdsPknlMstpSrasWpstDnon_end: AmovPknlMstpSnonWnonDnon_AmovPknlMstpSrasWpstDnon_end
		{
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.0099999998
			};
			actions = "FiringDrillsPistolKneelActions";
		};
		class AfdsPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "FiringDrillsBinocStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end",
				0.0099999998
			};
		};
		class AfdsPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "FiringDrillsBinocStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSoptWbinDnon",
				0.0099999998
			};
		};
		class AfdsPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon: AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon
		{
			actions = "FiringDrillsBinocKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end",
				0.0099999998
			};
		};
		class AfdsPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end: AmovPknlMstpSrasWpstDnon_AwopPknlMstpSoptWbinDnon_end
		{
			actions = "FiringDrillsBinocKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSoptWbinDnon",
				0.0099999998
			};
		};
		class AwopPercMstpSoptWbinDnon_AfdsPercMstpSrasWpstDnon: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "FiringDrillsPistolStandActions";
			ConnectTo[]=
			{
				"AwopPercMstpSoptWbinDnon_AfdsPercMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AwopPercMstpSoptWbinDnon_AfdsPercMstpSrasWpstDnon_end: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "FiringDrillsPistolStandActions";
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.0099999998
			};
		};
		class AwopPknlMstpSoptWbinDnon_AfdsPknlMstpSrasWpstDnon: AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon
		{
			actions = "FiringDrillsPistolKneelActions";
			ConnectTo[]=
			{
				"AwopPknlMstpSoptWbinDnon_AfdsPknlMstpSrasWpstDnon_end",
				0.0099999998
			};
		};
		class AwopPknlMstpSoptWbinDnon_AfdsPknlMstpSrasWpstDnon_end: AwopPknlMstpSoptWbinDnon_AmovPknlMstpSrasWpstDnon_end
		{
			actions = "FiringDrillsPistolKneelActions";
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.0099999998
			};
		};
		class AfdsPercMstpSrasWpstDnon_turnL: AmovPercMstpSrasWpstDnon_turnL
		{
			actions = "FiringDrillsPistolStandActions";
			InterpolateTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.02
			};
		};
		class AfdsPercMstpSrasWpstDnon_turnR: AmovPercMstpSrasWpstDnon_turnR
		{
			actions = "FiringDrillsPistolStandActions";
			InterpolateTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPercMstpSrasWpstDnon",
				0.02
			};
		};
		class AfdsPercMstpSlowWpstDnon_turnL: AmovPercMstpSlowWpstDnon_turnL
		{
			actions = "FiringDrillsPistolLowStandActions";
			InterpolateTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.02
			};
		};
		class AfdsPercMstpSlowWpstDnon_turnR: AmovPercMstpSlowWpstDnon_turnR
		{
			actions = "FiringDrillsPistolLowStandActions";
			InterpolateTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPercMstpSlowWpstDnon",
				0.02
			};
		};
		class AfdsPknlMstpSrasWpstDnon_turnL: AmovPknlMstpSrasWpstDnon_turnL
		{
			actions = "FiringDrillsPistolKneelActions";
			InterpolateTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.02
			};
		};
		class AfdsPknlMstpSrasWpstDnon_turnR: AmovPknlMstpSrasWpstDnon_turnR
		{
			actions = "FiringDrillsPistolKneelActions";
			InterpolateTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPknlMstpSrasWpstDnon",
				0.02
			};
		};
		class AfdsPknlMstpSlowWpstDnon_turnL: AmovPknlMstpSlowWpstDnon_turnL
		{
			actions = "FiringDrillsPistolLowKneelActions";
			InterpolateTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.02
			};
		};
		class AfdsPknlMstpSlowWpstDnon_turnR: AmovPknlMstpSlowWpstDnon_turnR
		{
			actions = "FiringDrillsPistolLowKneelActions";
			InterpolateTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.02
			};
			ConnectTo[]=
			{
				"AfdsPknlMstpSlowWpstDnon",
				0.02
			};
		};
	};
};