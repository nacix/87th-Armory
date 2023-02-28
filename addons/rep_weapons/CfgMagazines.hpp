class CA_LauncherMagazine;
class CfgMagazines 
{
	class SmokeShell;
	class 87th_MK40X_AT_Guided: CA_LauncherMagazine
	{
		author = "Anorexican";
		scope = 2;
		displayName = "[87th] MK40X AT Missile";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Wire-Guided Tandem HEAT Missile<br />Damage: 180+600<br />Range: 3m<br />Used in: RPS-6X";
		displaynameshort = "RPS-6X AT Missile";
		ammo = "87th_M_MK40X_AT";
		type = "2*  256";
		mass = 60;
	};
	class 87th_MK42X_HE_Guided: CA_LauncherMagazine
	{
		author = "Anorexican";
		scope = 2;
		displayName = "[87th] MK42X HE Missile";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Wire-Guided HE Missile<br />Damage: 100<br />Radius: 10m<br />Used in: RPS-6X";
		displaynameshort = "RPS-6X HE Missile";
		ammo = "87th_M_MK42X_HE";
		type = "2*  256";
		mass = 40;
	};
	class 87th_SmokeShellPurple: SmokeShell
	{
		author = "Anorexican";
		ammo = "87th_SmokeShellPurple_ammo";
		descriptionShort = "Fuze: Impact";
		displayName = "[87th] Impact Smoke (Purple)";
		displayNameShort = "Purple Smoke";
	};
	class 87th_SmokeShellViolet: 87th_SmokeShellPurple
	{
		ammo = "87th_SmokeShellViolet_ammo";
		displayName = "[87th] Impact Smoke (Violet)";
		displayNameShort = "Violet Smoke";
	};
	class 87th_SmokeShellMidnight: 87th_SmokeShellPurple
	{
		ammo = "87th_SmokeShellMidnight_ammo";
		displayName = "[87th] Impact Smoke (Midnight)";
		displayNameShort = "Midnight Smoke";
	};
};