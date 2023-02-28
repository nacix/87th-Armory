class CfgAmmo 
{
	class ShellBase;
	class SmokeShell;
	class ammo_Penetrator_Base: ShellBase {};
	class MissileBase 
	{
		class Components;
	};
	class 87th_ammo_Penetrator: ammo_Penetrator_Base 
	{
		model = "\A3\weapons_f\empty";
		caliber = 43.333302;
		warheadName = "TandemHEAT";
		hit = 600;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		timeToLive = 0.2;
		simulationStep = 0.050000001;
		airFriction = -0.28;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 60;
		suppressionRadiusHit = 30;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactMetalSabotSmall";
			hitGlassArmored = "ImpactMetalSabotSmall";
			hitWood = "ImpactMetalSabotSmall";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactMetalSabotSmall";
			hitRubber = "ImpactMetalSabotSmall";
			hitTyre = "ImpactMetalSabotSmall";
			hitConcrete = "ImpactMetalSabotSmall";
			hitMan = "ImpactMetalSabotSmall";
			hitGroundSoft = "ImpactMetalSabotSmall";
			hitGroundRed = "ImpactMetalSabotSmall";
			hitGroundHard = "ImpactMetalSabotSmall";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactMetalSabotSmall";
		};
		whistleOnFire = 1;
		whistleDist = 14;
	};
	class 87th_M_MK40X_AT: MissileBase 
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
		hit = 180;
		indirectHit = 28;
		indirectHitRange = 3;
		warheadName = "TandemHEAT";
		submunitionAmmo = "87th_ammo_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.80000001;
		explosionType  =  "explosive";
		cost = 200;
		aiAmmoUsageFlags = "128 + 512";
		lockType = 1;
		manualControl = 1;
		manuverability = 1;
		missileManualControlCone = 80;
		maxControlRange = 2000;
		weaponLockSystem = 0;
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0.050000001;
		trackOversteer = 0.5;
		trackLead = 0.85000002;
		timeToLive = 30;
		simulationStep = 0.0020000001;
		airFriction = 0.059999999;
		sideAirFriction = 0.090000004;
		maxSpeed = 200;
		thrustTime = 1;
		thrust = 70;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 91.329597;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.60000002;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class 87th_M_MK42X_HE: 87th_M_MK40X_AT 
	{
		model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_he_fly";
		hit = 100;
		indirectHit = 25;
		indirectHitRange = 10;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		explosive = 1;
		aiAmmoUsageFlags = "64 + 128";
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		CraterEffects = "ATMissileCrater";
		effectsMissile = "missile3";
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 123.33;
		};
		class CamShakeHit
		{
			power = 55;
			duration = 0.60000002;
			frequency = 20;
			distance = 1;
		};
	};
	class 87th_SmokeShellPurple_ammo: SmokeShell
	{
		smokeColor[] = {0.29, 0, 0.51, 1.00};
	};
	class 87th_SmokeShellViolet_ammo: 87th_SmokeShellPurple_ammo
	{
		smokeColor[] = {0.62, 0.35, 0.98, 1.00};
	};
};