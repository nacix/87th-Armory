class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class PointerSlot: SlotInfo
{
	compatibleItems[] += {
		CLASS(acc_pointer_Purple),
		CLASS(acc_pointer_Purple_IR),
		CLASS(acc_pointer_Short_Purple),
		CLASS(acc_pointer_Short_Purple_IR),
		CLASS(acc_pointer_Long_Purple),
		CLASS(acc_pointer_Long_Purple_IR)
	};
};

class CfgWeapons 
{
	#define WEAPON_PREFAB(className,parentName,opticName,muzzleName,accessoryName,underName) \
		class ##TAG##_##className##: ##TAG##_##parentName \
		{ \
			scope = 1; \
			class LinkedItems \
			{ \
				class LinkedItemsOptic \
				{ \
					slot = "CowsSlot"; \
					item = QUOTE(opticName); \
				}; \
				class LinkedItemsMuzzle \
				{ \
					slot = "MuzzleSlot"; \
					item = QUOTE(muzzleName); \
				}; \
				class LinkedItemsAcc \
				{ \
					slot = "PointerSlot"; \
					item = QUOTE(accessoryName); \
				}; \
				class LinkedItemsUnder \
				{ \
					slot = "UnderBarrelSlot"; \
					item = QUOTE(underName); \
				}; \
			}; \
		};

	#define DC15LE_PREFAB(className, parentClass) \
		class TAG##_##className##: TAG##_##parentClass \
		{ \
			scope = 1; \
			class WeaponSlotsInfo: WeaponSlotsInfo \
			{ \
				class CowsSlot: CowsSlot \
				{ \
					linkProxy = "\A3\data_f\proxies\weapon_slots\TOP"; \
					compatibleItems[]= \
					{ \
						"3AS_Optic_LEScope_DC15A" \
					}; \
				}; \
			}; \
			class LinkedItems \
			{ \
				class LinkedItemsOptic \
				{ \
					slot = "CowsSlot"; \
					item = "3AS_Optic_LEScope_DC15A"; \
				}; \
				class LinkedItemsMuzzle \
				{ \
					slot = "MuzzleSlot"; \
					item = "3AS_Muzzle_LE_DC15A"; \
				}; \
			}; \
		};

	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Launcher;
	class Launcher_Base_F: Launcher { class WeaponSlotsInfo; };
	class GrenadeLauncher;
	class UGL_F;
	class acc_pointer_IR;
	class optic_Nightstalker;
	class 3AS_ATRT_Weapon_F;
	class 3AS_DC15A_F;
	class 3AS_DC15S_F;
	class 3AS_DC15A_GL;
	class 3AS_DC15C_GL;
	class 3AS_DC15L_F;
	class 3AS_DC15C_F;
	class 3AS_Optic_DC15L: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class 3AS_DC15L_Optic;
				class IronOnTopOfMyOptics;
			};
		};
	};
	class 3AS_optic_holo_DC15S;
	class 3AS_Optic_VK38X;
	class 3AS_Valken38X_F;
	class 3AS_WestarM5_F;
	class k_773_rifle;
	class k_773_scope1;
	class k_773_scope2;
	class JLTS_DC15X;
	class JLTS_DC17SA;
	class JLTS_DP23;
	class JLTS_DW32S;
	class jlts_glocko_flashlight;
	class JLTS_stun_muzzle;
	class LFP_DC15X;

	NEW_CLASS(acc_pointer_Purple): acc_pointer_IR
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-Series Laser Module);
		picture = "\MRC\JLTS\optionals\Glocko\data\ui\Glocko_flash_ui_ca.paa";
		model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";

		class ItemInfo
		{
			allowedSlots[] = {801, 701, 901};
			mass = 6;
			mountAction = "MountSide";
			type = 301;
			unmountAction = "DismountSide";
			
			// We can define our laser's parameters here
			class Pointer
			{
				irLaserPos = "flash dir"; // MemoryPosition for where our laser will point
				irLaserEnd = "flash"; // MemoryPosition for our laser's SOURCE (for some goofy reason; this isn't a mix-up)
				beamColor[] = {2000, 25, 100000}; // {R,G,B} value for our laser beam. These values also effect emissiveness, with higher numbers meaning higher brightness.
				dotColor[] = {665, 0.75, 2500}; // {R,G,B} value for our laser dot. The dot is cast when the laser hits a surface, and follows the same rules as beamColor[].
				dotSize = 0.025; // Size of our laser dot. Unfortunately, it doesn't actually function in-game. You can compensate using higher dotColor values, but that leads to crazy glow in dark areas.
				beamThickness = 0.1; // Thickness of our laser beam.
				beamMaxLength = 50; // Maximum distance (in meters) our beam can travel. Most likely overridden past a certain value. Still goes pretty far; definitely enough to blind your favorite pilot.
				isIR = 0; // If set to 1, laser will only be visible in Night or Thermal vision modes. I don't believe the other settings will fully apply in this mode.
			};
			
			class Flashlight {}; // Resets the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
		};

		// These definitions add compatibility with MRT's item switching framework, which allows us to switch between laser types using keybinds.
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Purple_IR); // Classname of the item we'll switch to from here
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Purple_IR); // Classname of the item we switched here from
		MRT_switchItemHintText = "Visible Laser"; // Text that will be displayed in the hint box when switching to this item
	};
	NEW_CLASS(acc_pointer_Purple_IR): acc_pointer_IR
	{
		author = "Anorexican";
		scope = 1;
		displayName = TAG_NAME(DC-Series Laser Module);
		picture = "\MRC\JLTS\optionals\Glocko\data\ui\Glocko_flash_ui_ca.paa";
		model = "\MRC\JLTS\optionals\Glocko\Glocko_flash.p3d";

		class ItemInfo
		{
			allowedSlots[] = {801, 701, 901};
			mass = 6;
			mountAction = "MountSide";
			type = 301;
			unmountAction = "DismountSide";
			
			// We can define our laser's parameters here
			class Pointer
			{
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
			
			class Flashlight {}; // Resets the flashlight data from InventoryFlashLightItem_Base_F so it doesn't sneak into our pointer.
		};
		
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Purple);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Purple);
		MRT_switchItemHintText = "IR Laser";
	};
	NEW_CLASS(acc_pointer_Short_Purple): TAG_CLASS(acc_pointer_Purple)
	{
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Short_Purple_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Short_Purple_IR);

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				beamMaxLength = 20;
				irLaserPos = "flash dir";
				irLaserEnd = "flash";
			};
		};
	};
	NEW_CLASS(acc_pointer_Short_Purple_IR): TAG_CLASS(acc_pointer_Purple_IR)
	{
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Short_Purple);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Short_Purple);
	};
	NEW_CLASS(acc_pointer_Long_Purple): TAG_CLASS(acc_pointer_Purple)
	{
		displayName = TAG_NAME(DC-Series Laser Module);
		model = "\A3\weapons_f\acc\accv_pointer_F";
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Purple_IR);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Purple_IR);

		class ItemInfo: ItemInfo
		{
			class Pointer: Pointer
			{
				beamMaxLength = 2000;
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
			};
		};
	};
	NEW_CLASS(acc_pointer_Long_Purple_IR): TAG_CLASS(acc_pointer_Purple_IR)
	{
		displayName = TAG_NAME(DC-Series Laser Module);
		model = "\A3\weapons_f\acc\accv_pointer_F";
		MRT_SwitchItemNextClass = CLASS(acc_pointer_Long_Purple);
		MRT_SwitchItemPrevClass = CLASS(acc_pointer_Long_Purple);

		class ItemInfo: ItemInfo
		{
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
			};
		};
	};

	NEW_CLASS(acc_flashlight): jlts_glocko_flashlight
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-Series Flashlight);
	};

	NEW_CLASS(Optic_Holo): 3AS_optic_holo_DC15S
	{
		author = "Anorexican";
		displayName = TAG_NAME(Holosight);
		scope = 1;
	};
	
	class Throw: GrenadeLauncher
	{
		muzzles[] += {
			CLASS(SmokeShellPurple_Throw),
			CLASS(SmokeShellViolet_Throw),
			CLASS(SmokeShellMidnight_Throw)
		};
		class ThrowMuzzle;
		NEW_CLASS(SmokeShellPurple_Throw): ThrowMuzzle
		{
			magazines[] = {CLASS(SmokeShellPurple)};
		};
		NEW_CLASS(SmokeShellViolet_Throw): ThrowMuzzle
		{
			magazines[] = {CLASS(SmokeShellViolet)};
		};
		NEW_CLASS(SmokeShellMidnight_Throw): ThrowMuzzle
		{
			magazines[] = {CLASS(SmokeShellMidnight)};
		};
	};

	NEW_CLASS(Muzzle_Stun): JLTS_stun_muzzle
	{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		autoFire = 0;
		ballisticsComputer = 0;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		displayName = "$STR_JLTS_names_StunMode";
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		fireSpreadAngle = 0.94999999;
		magazines[]=
		{
			CLASS(Stun_Mag_Long)
		};
		magazineWell[] = {};
		maxZeroing = 50;
		reloadAction = "GestureReloadMX";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					"MRC\JLTS\weapons\Core\sounds\stun",
					5,
					1.5,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.5;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
	NEW_CLASS(Muzzle_Stun_Super): TAG_CLASS(Muzzle_Stun)
	{
		magazines[]=
		{
			CLASS(Stun_Mag_Super)
		};
	};

	NEW_CLASS(ATRT_Weapon): 3AS_ATRT_Weapon_F
	{
		displayName = TAG_NAME(AT-RT Weapon);
		class WeaponSlotsInfo
		{
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					CLASS(optic_ATRT)
				};
			};
		};
	};

	NEW_CLASS(DC17SA): JLTS_DC17SA
	{
		scope = 2;
		displayName = TAG_NAME(DC-17SA);
		author = "Anorexican";
		baseWeapon = CLASS(DC17SA);
		hiddenSelectionsTextures[] = {QPATHTOF(data\dc17sa\TAG_CLASS(DC17SA)_co.paa)};
		magazines[] = { CLASS(21Rnd_EC30_Mag) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		recoil = "recoil_pistol_signal";
		muzzles[]=
		{
			"this",
			"Stun"
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		class Stun: TAG_CLASS(Muzzle_Stun)
		{
			reloadAction = "GestureReloadPistol";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
				1,
				1,
				10
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc17sa.wss),
					6.5,
					0.925,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Mode_Burst
		{
			burst = 3;
			reloadTime = 0.08;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc17sa.wss),
					6.5,
					0.925,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			JLTS_hasElectronics = 0;
			JLTS_hasEMPProtection = 1;
			JLTS_friedItem = "";
			JLTS_repairTime = 20;
			JLTS_canHaveShield = 0;
			JLTS_shieldedWeapon = "";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = { "3AS_optic_holo_DC15S" };
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					CLASS(acc_pointer_Purple),
					CLASS(acc_pointer_Purple_IR),
					CLASS(acc_flashlight)
				};
			};
		};
	};

	NEW_CLASS(DC15S): 3AS_DC15S_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15S Carbine);
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.16;
			dispersion = 0.00106;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15c.wss),
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.14;
			dispersion = 0.00106;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15c.wss),
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		opticsZoomMin = 0.2;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 45;
		};
	};

	NEW_CLASS(DC15C): 3AS_DC15C_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15C Battle Rifle);
		magazines[]=
		{
			CLASS(36Rnd_EC50_Mag)
		};
		modes[]=
		{
			"Burst",
			"Single"
		};
		recoil = "recoil_trg21";
		recoilProne = "assaultRifleBase";
		class Burst: Mode_Burst
		{
			burst = 2;
			reloadTime = 0.135;
			dispersion = 0.001;
			textureType = "dual";
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					2.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.16;
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					2.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
		};
	};
	NEW_CLASS(DC15C_GL): TAG_CLASS(DC15C)
	{
		displayName = TAG_NAME(DC-15C Battle Rifle (UGL));
		model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\A3_2d_optic.p3d";
		muzzles[]=
		{
			"this",
			"3AS_15CGL"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class Scope: Ironsights
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.122173;
				opticsZoomMax = 0.122173;
				opticsZoomInit = 0.122173;
				memoryPointCamera = "opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare = "true";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"3AS_optic_reflex_DC15C"
				};
			};
		};
	};

	NEW_CLASS(DC15A): 3AS_DC15A_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15A Assault Rifle);
		magazines[]=
		{
			CLASS(45Rnd_EC40_Mag)
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.14;
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.12;
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15a.wss),
					1.5,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"3AS_Muzzle_LE_DC15A"
				};
				iconPosition[] = {0,0.44999999};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3AS_Optic_Red_DC15A"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
			};
		};
	};
	NEW_CLASS(DC15A_GL): TAG_CLASS(DC15A)
	{
		displayName = TAG_NAME(DC-15A Assault Rifle (UGL));
		model = "3AS\3AS_Weapons\DC15A\3AS_DC15A_GL.p3d";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		muzzles[]=
		{
			"this",
			"3AS_GL_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
		};
	};

	NEW_CLASS(DC15L): 3AS_DC15L_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15L Repeating Blaster);
		modes[]=
		{
			"FullAuto",
			"FullAutoSlow"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1325;
			textureType = "fastAuto";
			dispersion = 0.00106;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15l.wss),
					2.5,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class FullAutoSlow: FullAuto
		{
			reloadTime = 0.18;
			textureType = "fullAuto";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					CLASS(Optic_DC15L)
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Bipod_DC15L_f"
				};
			};
		};
	};
	NEW_CLASS(Optic_DC15L): 3AS_Optic_DC15L
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15L Optic);
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				NEW_CLASS(DC15L_Optic): 3AS_DC15L_Optic
				{
					opticsZoomMin = "0.25/1.8";
					opticsZoomMax = "0.25/1.8";
					opticsZoomInit = "0.25/1.8";
					discreteFOV[] = {};
				};
				class IronOnTopOfMyOptics: TAG_CLASS(DC15L_Optic)
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};

	NEW_CLASS(WestarM5): 3AS_WestarM5_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(Westar M-5 Assault Rifle);
		magazines[] = {CLASS(60Rnd_EC40_Mag)};
		recoil = "recoil_trg21";
		recoilProne = "assaultRifleBase";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.145;
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundContinuous = 1;
				sounds[]=
				{
					"StandardSound"
				};
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\westar_m5.wss),
					2,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime = 0.085;
			dispersion = 0.001;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\westar_m5.wss),
					2,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			reloadTime = 0.12;
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
			soundContinuous = 0;
			soundBurst = 0;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\westar_m5.wss),
					2,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	NEW_CLASS(WestarM5_GL): TAG_CLASS(WestarM5)
	{
		displayName = TAG_NAME(Westar M-5 Assault Rifle (UGL));
		model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
		muzzles[]=
		{
			"this",
			"3AS_WestarM5_GL_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = "true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class Scope: Ironsights
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.122173;
				opticsZoomMax = 0.122173;
				opticsZoomInit = 0.122173;
				memoryPointCamera = "opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare = "true";
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					""
				};
			};
			mass = 80;
		};
	};

	NEW_CLASS(DP23): JLTS_DP23
	{
		author = "Anorexican";
		displayName = TAG_NAME(DP-23 CQC Blaster);
		muzzles[]=
		{
			"this",
			"Blaster"
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dp23.wss),
					6.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.5;
			dispersion = 0.00073000003;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 30;
			midRangeProbab = 0.69999999;
			maxRange = 60;
			maxRangeProbab = 0.30000001;
		};
		class Blaster: UGL_F
		{
			magazines[]=
			{
				CLASS(30Rnd_EC50_Mag)
			};
			displayName = "Blaster Mode";
			displayNameShort = "Blaster";
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			cursor = "";
			useModelOptics = 0;
			useExternalOptic = 1;
			magazineWell[] = {};
			cameraDir = "eye";
			memoryPointCamera = "";
			discreteDistance[] = {100};
			discreteDistanceCameraPoint[]=
			{
				"eye"
			};
			discreteDistanceInitIndex = 0;
			initSpeed = -1;
			recoil = "recoil_akm";
			recoilProne = "assaultRifleBase";
			class Single: Mode_SemiAuto
			{
				reloadTime = 0.165;
				dispersion = 0.00106;
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					closure1[]=
					{
						"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
						1,
						1,
						10
					};
					soundClosure[]=
					{
						"closure1",
						1
					};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[]=
					{
						QPATHTOF(data\sounds\dp23_rfl.wss),
						2,
						0.825,
						200
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				recoil = "recoil_single_primary_3outof10";
				recoilProne = "recoil_single_primary_prone_3outof10";
				minRange = 30;
				minRangeProbab = 0.1;
				midRange = 200;
				midRangeProbab = 0.69999999;
				maxRange = 400;
				maxRangeProbab = 0.050000001;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 55;
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = { CLASS(Optic_Holo) };
			};
			class PointerSlot
			{
				displayName = "Pointer Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
				iconPinpoint = "Center";
				iconPosition[] = {0.34999999,0.5};
				iconScale = 0.25;
				linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					CLASS(acc_pointer_Short_Purple),
					CLASS(acc_pointer_Short_Purple_IR)
				};
			};
		};
	};

	NEW_CLASS(Optic_VK38X): 3AS_Optic_VK38X
	{
		displayName = TAG_NAME(VK-38X Optic);
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\kobra\442_weapons\weapons\773\773_retical.p3d";
			class OpticsModes
			{
				NEW_CLASS(VK38X_Optic)
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = 0.02;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discreteFov[] = {0.0625,0.02};
					discreteInitIndex = 0;
					modelOptics[]=
					{
						"\kobra\442_weapons\weapons\773\773_retical.p3d"
					};
					memoryPointCamera = "opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = {1,2};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};
	NEW_CLASS(Valken38X): 3AS_Valken38X_F
	{
		author = "Anorexican";
		displayName = TAG_NAME(Valken-38X Sniper Rifle);
		reloadTime = 0.6;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 200;
		midRangeProbab = 0.69999999;
		maxRange = 400;
		maxRangeProbab = 0.30000001;
		soundContinuous = 0;
		soundBurst = 0;
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: TAG_CLASS(Muzzle_Stun) {};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.6;
			dispersion = 0.00045;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\valken_38x.wss),
					2.75,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65;
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					CLASS(Optic_VK38X)
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Bipod_VK38X_f"
				};
			};
		};
	};

	NEW_CLASS(Firepuncher): k_773_rifle
	{
		author = "Anorexican";
		displayName = TAG_NAME(773 Firepuncher Precision Rifle);
		magazines[] = { "3AS_10Rnd_EC80_Mag" };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: TAG_CLASS(Muzzle_Stun)
		{
			reloadMagazineSound[]=
			{
				"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
				1,
				1,
				30
			};
		};
		class single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\firepuncher.wss),
					1.8,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\firepuncher_spr.wss),
					1.95,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
		class single_close_optics1: single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.80000001;
			maxRange = 500;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.69999999;
			maxRange = 700;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 65;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					CLASS(Optic_FP_Flip),
					CLASS(Optic_FP)
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					CLASS(acc_pointer_Long_Purple),
					CLASS(acc_pointer_Long_Purple_IR)
				};
			};
		};
	};
	NEW_CLASS(Optic_FP_Flip): k_773_scope1 
	{
		displayName = TAG_NAME(Firepuncher Scope (2-4x));
		MRT_SwitchItemNextClass = CLASS(Optic_FP);
		MRT_SwitchItemPrevClass = CLASS(Optic_FP);
		MRT_SwitchItemHintText = "Magnifier [OFF]";

		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\kobra\442_weapons\weapons\773\773_retical.p3d";
			allowedSlots[] = {801,701,901};
			class OpticsModes
			{
				class 773scope
				{
					opticsID = 1;
					useModelOptics = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1200;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare = 1;
					modelOptics[]=
					{
						"\kobra\442_weapons\weapons\773\773_retical.p3d"
					};
					opticsDisablePeripherialVision = 1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "opticView";
				};
			};
		};
	};
	NEW_CLASS(Optic_FP): k_773_scope2 
	{
		displayName = TAG_NAME(Firepuncher Scope (8-20x));
		MRT_SwitchItemNextClass = CLASS(Optic_FP_Flip);
		MRT_SwitchItemPrevClass = CLASS(Optic_FP_Flip);
		MRT_switchItemHintText = "Magnifier [ON]";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\kobra\442_weapons\weapons\773\773_retical.p3d";
			allowedSlots[] = {801,701,901};
			class OpticsModes
			{
				class 773scope
				{
					opticsID = 1;
					useModelOptics = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1200;
					discretefov[]=
					{
						"0.25/8",
						"0.25/12",
						"0.25/16",
						"0.25/20"
					};
					discreteDistanceInitIndex = 1;
					discreteInitIndex = 0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsFlare = 1;
					modelOptics[]=
					{
						"\kobra\442_weapons\weapons\773\773_retical.p3d"
					};
					opticsDisablePeripherialVision = 1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					memoryPointCamera = "opticView";
				};
			};
		};
	};
	
	NEW_CLASS(DW32S): JLTS_DW32S 
	{
		author = "Anorexican";
		displayName = TAG_NAME(DW-32S Marksman Rifle);
		recoil = "recoil_mx";
		recoilProne = "assaultRifleBase";
		magazines[] = { CLASS(20Rnd_EC60_Mag) };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\DW32S.wss),
					2.5,
					1.125,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.26;
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
		weaponInfoType = "RscWeaponZeroing";
		modelOptics = "\A3\Weapons_f\acc\reticle_nvs_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65;
		};
	};

	NEW_CLASS(DC15X): LFP_DC15X
	{
		author = "Anorexican";
		displayName = TAG_NAME(DC-15X Benchrest Rifle);
		recoil = "3AS_recoil_DC15C";
		magazines[] = { "3AS_10Rnd_EC80_Mag" };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[]=
				{
					QPATHTOF(data\sounds\dc15x.wss),
					3.125,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			reloadTime = 1.35;
			dispersion = 0.00015;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo
		{
			mass = 125;
			class PointerSlot: PointerSlot
			{
				displayName = "Pointer Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
				iconPinpoint = "Center";
				iconPosition[] = {0.34999999,0.5};
				iconScale = 0.25;
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_flashlight_broken",
					"acc_pointer_IR",
					"acc_pointer_IR_broken",
					"ACE_acc_pointer_green",
					"ACE_acc_pointer_green_IR",
					"ACE_acc_pointer_red",
					CLASS(acc_pointer_Long_Purple),
					CLASS(acc_pointer_Long_Purple_IR)
				};
			};
		};
		modelOptics = "\kobra\442_weapons\weapons\773\773_retical.p3d";
	};

	NEW_CLASS(RPS6X): Launcher_Base_F
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = CLASS(RPS6X_fried);
		author = "Anorexican";
		_generalMacro = "launch_RPG32_F";
		scope = 2;
		displayName = TAG_NAME(RPS-6X Launcher (SACLOS));
		model = "\MRC\JLTS\weapons\RPS6\rps6.p3d";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		uiPicture = "MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"
		};
		recoil = "recoil_single_law";
		reloadAction = "ReloadRPG";
		reloadMagazineSound[] = 
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan", 
			1, 
			1, 
			20
		};
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
			class Optic
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
			CLASS(MK40X_AT_Guided),
			CLASS(MK42X_HE_Guided)
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
					QPATHTOF(data\sounds\rps6.wss),
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]= 
				{
					"Launcher_RPG7_Shot_SoundSet",
					"Launcher_RPG7_Tail_SoundSet"
				};
			};
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
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.89999998;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		descriptionShort = "Hybrid Launcher";
		class WeaponSlotsInfo: WeaponSlotsInfo {mass = 100;};
		class Library {libTextDesc = "";};
		ace_overpressure_angle = 30;
		ace_overpressure_damage = 0.69999999;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 15;
		ace_releadlaunchers_enabled = 1;
	};
	NEW_CLASS(RPS6X_fried): TAG_CLASS(RPS6X)
	{
		baseWeapon = CLASS(RPS6X_fried);
		displayName = TAG_NAME(RPS-6X (Fried));
		descriptionShort = "SACLOS systems have been fried by an EMP or ion blast!<br />You can perform repairs using a Weapon Repair Kit";
		scope = 1;
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
		muzzles[] = {"this"};
		magazines[] = {};
		JLTS_isFried = 1;
	};

	// DC15LE_PREFAB(className, parentClass)
	DC15LE_PREFAB(DC15LE, DC15A)
	DC15LE_PREFAB(DC15LE_GL, DC15A_GL)

	// WEAPON_PREFAB(className, parentName, opticName, muzzleName, accessoryName, underName)
	WEAPON_PREFAB(DC15S_Reflex, DC15S, 3AS_Optic_Holo_DC15S, 1, 1, 1)
	WEAPON_PREFAB(DC15A_GL_Reflex, DC15A_GL, 3AS_Optic_Red_DC15A, 1, 1, 1)
	WEAPON_PREFAB(DC15C_GL_Reflex, DC15C_GL, 3AS_Optic_Reflex_DC15C, 1, 1, 1)
	WEAPON_PREFAB(DC15C_Scoped, DC15C, 3AS_Optic_ACOG_DC15C, 1, 1, 1)
	WEAPON_PREFAB(DC15L_AR, DC15L, TAG_CLASS(Optic_DC15L), 1, 1, 3AS_Bipod_DC15L_F)
	WEAPON_PREFAB(WestarM5_Scoped, WestarM5, 3AS_Optic_Scope_WestarM5, 1, 1, 1)
	WEAPON_PREFAB(Firepuncher_Scoped, Firepuncher, TAG_CLASS(Optic_FP), 1, TAG_CLASS(acc_pointer_Long_Purple), 1)
	WEAPON_PREFAB(DC15X_Lased, DC15X, 1, 1, TAG_CLASS(acc_pointer_Long_Purple), 1)
	WEAPON_PREFAB(Valken38X_Scoped, Valken38X, TAG_CLASS(Optic_VK38X), 1, 1, 1)
	WEAPON_PREFAB(DC17SA_Reflex, DC17SA, 3AS_optic_holo_DC15S, 1, TAG_CLASS(acc_pointer_Long_Purple), 1)
	WEAPON_PREFAB(DP23_Lased, DP23, 3AS_optic_holo_dc15S, 1, TAG_CLASS(acc_pointer_Short_Purple), 1)
};