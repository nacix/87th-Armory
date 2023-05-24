class CA_LauncherMagazine;
class JLTS_stun_mag_long;
class CfgMagazines 
{
	class SmokeShell;
	class 3AS_100Rnd_EC40_Mag;
	class 3AS_300Rnd_EC60_Mag;
	class 3AS_45Rnd_EC50_Mag;
	class 3AS_60Rnd_EC30_Mag;

	class 87th_21Rnd_EC30_Mag: 3AS_60Rnd_EC30_Mag
	{
		author = "Anorexican";
		count = 21;
		mass = 3;
		displayName = "[87th] 21rd EC30 Magazine";
		descriptionShort = "21rd EC30 Cartridge<br />Used in: DC-17SA";
	};
	class 87th_45Rnd_EC40_Mag: 3AS_100Rnd_EC40_Mag
	{
		author = "Anorexican";
		count = 60;
		mass = 8;
		displayName = "[87th] 45rd EC40 Magazine";
		descriptionShort = "45rd EC40 Cartridge<br />Used in: DC-15A";
	};
	class 87th_60Rnd_EC40_Mag: 87th_45Rnd_EC40_Mag
	{
		count = 60;
		mass = 8.5;
		displayName = "[87th] 60rd EC40 Magazine";
		descriptionShort = "60rd EC40 Cartridge<br />Used in: Westar-M5";
	};
	class 87th_30Rnd_EC50_Mag: 3AS_45Rnd_EC50_Mag
	{
		author = "Anorexican";
		count = 30;
		displayName = "[87th] 30rd EC50 Magazine";
		descriptionShort = "30rd EC50 Cartridge<br />Used in: DP-23";
	};
	class 87th_36Rnd_EC50_Mag: 3AS_45Rnd_EC50_Mag
	{
		author = "Anorexican";
		count = 36;
		displayName = "[87th] 36rd EC50 Magazine";
		descriptionShort = "36rd EC50 Cartridge<br />Used in: DC-15C";
	};
	class 87th_20Rnd_EC60_Mag: 3AS_300Rnd_EC60_Mag
	{
		author = "Anorexican";
		count = 20;
		mass = 8;
		displayName = "[87th] 20rd EC60 Magazine";
		descriptionShort = "20rd EC60 Cartridge<br />Used in: DW-32S";
	};

	class 87th_Stun_Mag_Long: JLTS_stun_mag_long
	{
		author = "Anorexican";
		displayName = "[87th] Stun Battery (15s)";
		ammo = "87th_ammo_stun";
		initSpeed = 120;
	};
	class 87th_Stun_Mag_Super: 87th_Stun_Mag_Long
	{
		displayName = "[87th] Stun Battery (15s)";
		ammo = "87th_ammo_stun_super";
		initSpeed = 500;
	};

	class 87th_MK40X_AT_Guided: CA_LauncherMagazine
	{
		author = "Anorexican";
		scope = 2;
		displayName = "[87th] MK40X AT Missile";
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Wire-Guided Tandem HEAT Missile<br />Damage: 180+600<br />Range: 3m<br />Used in: RPS-6X";
		displayNameShort = "RPS-6X AT Missile";
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
		displayNameShort = "RPS-6X HE Missile";
		ammo = "87th_M_MK42X_HE";
		type = "2*  256";
		mass = 40;
	};
	class 87th_SmokeShellPurple: SmokeShell
	{
		author = "Anorexican";
		descriptionShort = "Fuze: Impact";
		displayName = "[87th] Impact Smoke (Purple)";
		displayNameShort = "Purple Smoke";
		model = "kobra\442_weapons\explosive\basic_smoke.p3d";
		ammo = "87th_SmokeShellPurple_ammo";
	};
	class 87th_SmokeShellViolet: 87th_SmokeShellPurple
	{
		displayName = "[87th] Impact Smoke (Violet)";
		displayNameShort = "Violet Smoke";
		ammo = "87th_SmokeShellViolet_ammo";
	};
	class 87th_SmokeShellMidnight: 87th_SmokeShellPurple
	{
		displayName = "[87th] Impact Smoke (Midnight)";
		displayNameShort = "Midnight Smoke";
		ammo = "87th_SmokeShellMidnight_ammo";
	};
};