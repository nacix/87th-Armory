class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons 
{
	class Launcher;
	class 3AS_DC15A_F;
	class 3AS_DC15S_F;
	class 3AS_DC15A_GL;
	class 3AS_DC15C_GL;
	class 3AS_DC15C_F;
	class 3AS_DC15L_F;
	class JLTS_DC15X;
	class GrenadeLauncher;
	class ThrowMuzzle;

	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class 87th_3AS_DC15A_F: 3AS_DC15A_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
		};
	};
	class 87th_3AS_DC15LE_F: 3AS_DC15A_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "3as_muzzle_le_dc15a";
			};
		};
	};
	class 87th_3AS_DC15LE_GL: 3AS_DC15A_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "3as_muzzle_le_dc15a";
			};
		};
	};
	class 87th_3AS_DC15S_F: 3AS_DC15S_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_holo_dc15s";
			};
		};
	};
	class 87th_3AS_DC15A_GL: 3AS_DC15A_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_lescope_dc15a";
			};
		};
	};
	class 87th_3AS_DC15C_GL: 3AS_DC15C_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_reflex_dc15c";
			};
		};
	};
	class 87th_3AS_DC15C_F: 3AS_DC15C_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_acog_dc15c";
			};
		};
	};
	class 87th_3AS_DC15L_F: 3AS_DC15L_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "3as_optic_dc15l";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "3as_bipod_dc15l_f";
			};
		};
	};
	class 87th_JLTS_DC15X : JLTS_DC15X
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "jlts_dc15x_scope";
			};
		};
	};
	class 87th_RPS6X: Launcher_Base_F
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "87th_RPS6X_fried";
		author = "Anorexican";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = "[87th] RPS-6X Launcher (SACLOS)";
		model = "\MRC\JLTS\weapons\RPS6\rps6.p3d";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		uiPicture = "MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"
		};
		reloadAction = "ReloadRPG";
		reloadMagazineSound[] = 
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan", 
			1, 
			1, 
			20
		};
		recoil = "recoil_single_law";
		maxZeroing = 600;
		modelOptics = "A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
		weaponInfoType = "RscOpticsRangeFinderVorona";
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.375;
		cameraDir = "look";
		cursor = "missile";
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomInit = 0.0875;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 1;
				discretefov[] = {0.065, 0.0265};
				discreteInitIndex = 0;
				cameraDir = "look";
				thermalMode[] = {0,1};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[]=
		{
			"87th_MK40X_AT_Guided",
			"87th_MK42X_HE_Guided"
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			displayName = "Semi";
			recoil = "recoil_single_law";
			textureType = "semi";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[] = {
					"Launcher_RPG7_Shot_SoundSet",
					"Launcher_RPG7_Tail_SoundSet"
				};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.69999999;
			midRange = 1000;
			midRangeProbab = 0.89999998;
			maxRange = 2000;
			maxRangeProbab = 0.85000002;
		};
		drySound[]=
		{
			"a3\sounds_f_exp\arsenal\weapons\launchers\rpg7\rpg7_dry",
			0.446684,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.89999998;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		descriptionShort="Hybrid Launcher";
		class WeaponSlotsInfo: WeaponSlotsInfo {mass=100;};
		class Library {libTextDesc = "";};
		ace_overpressure_angle = 30;
		ace_overpressure_damage = 0.69999999;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 15;
		ace_releadlaunchers_enabled = 1;
	};
	class 87th_RPS6X_fried: 87th_RPS6X
	{
		baseWeapon = "87th_RPS6X_fried";
		displayName = "[87th] RPS-6X (Fried)";
		descriptionShort = "SACLOS systems have been fried by an EMP or ion blast!<br />You can perform repairs using a Weapon Repair Kit";
		scope = 1;
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
	};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"87th_SmokeShellPurple_Throw", "87th_SmokeShellViolet_Throw", "87th_SmokeShellMidnight_Throw"};
		class 87th_SmokeShellPurple_Throw: ThrowMuzzle
		{
			magazines[] = {"87th_SmokeShellPurple"};
		};
		class 87th_SmokeShellViolet_Throw: ThrowMuzzle
		{
			magazines[] = {"87th_SmokeShellViolet"};
		};
		class 87th_SmokeShellMidnight_Throw: ThrowMuzzle
		{
			magazines[] = {"87th_SmokeShellMidnight"};
		};
	};
};