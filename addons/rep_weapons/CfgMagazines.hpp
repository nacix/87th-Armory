class CA_LauncherMagazine;
class JLTS_stun_mag_long;
class CfgMagazines 
{
	class SmokeShell;
	class 3AS_100Rnd_EC40_Mag;
	class 3AS_300Rnd_EC60_Mag;
	class 3AS_45Rnd_EC50_Mag;
	class 3AS_60Rnd_EC30_Mag;

	NEW_CLASS(21Rnd_EC30_Mag): 3AS_60Rnd_EC30_Mag
	{
		author = "Anorexican";
		count = 21;
		mass = 3;
		displayName = TAG_NAME(21rd EC30 Magazine);
		descriptionShort = "21rd EC30 Cartridge<br />Used in: DC-17SA";
	};
	NEW_CLASS(45Rnd_EC40_Mag): 3AS_100Rnd_EC40_Mag
	{
		author = "Anorexican";
		count = 60;
		mass = 8;
		displayName = TAG_NAME(45rd EC40 Magazine);
		descriptionShort = "45rd EC40 Cartridge<br />Used in: DC-15A";
	};
	NEW_CLASS(60Rnd_EC40_Mag): TAG_CLASS(45Rnd_EC40_Mag)
	{
		count = 60;
		mass = 8.5;
		displayName = TAG_NAME(60rd EC40 Magazine);
		descriptionShort = "60rd EC40 Cartridge<br />Used in: Westar-M5";
	};
	NEW_CLASS(30Rnd_EC50_Mag): 3AS_45Rnd_EC50_Mag
	{
		author = "Anorexican";
		count = 30;
		displayName = TAG_NAME(30rd EC50 Magazine);
		descriptionShort = "30rd EC50 Cartridge<br />Used in: DP-23";
	};
	NEW_CLASS(36Rnd_EC50_Mag): 3AS_45Rnd_EC50_Mag
	{
		author = "Anorexican";
		count = 36;
		displayName = TAG_NAME(36rd EC50 Magazine);
		descriptionShort = "36rd EC50 Cartridge<br />Used in: DC-15C";
	};
	NEW_CLASS(20Rnd_EC60_Mag): 3AS_300Rnd_EC60_Mag
	{
		author = "Anorexican";
		count = 20;
		mass = 8;
		displayName = TAG_NAME(20rd EC60 Magazine);
		descriptionShort = "20rd EC60 Cartridge<br />Used in: DW-32S";
	};

	NEW_CLASS(Stun_Mag_Long): JLTS_stun_mag_long
	{
		author = "Anorexican";
		displayName = TAG_NAME(Stun Battery (15s));
		ammo = CLASS(ammo_stun);
		initSpeed = 120;
	};
	NEW_CLASS(Stun_Mag_Super): TAG_CLASS(Stun_Mag_Long)
	{
		displayName = TAG_NAME(Stun Battery (15s));
		ammo = CLASS(ammo_stun_super);
		initSpeed = 500;
	};

	NEW_CLASS(MK40X_AT_Guided): CA_LauncherMagazine
	{
		author = "Anorexican";
		scope = 2;
		displayName = TAG_NAME(MK40X AT Missile);
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Wire-Guided Tandem HEAT Missile<br />Damage: 180+600<br />Range: 3m<br />Used in: RPS-6X";
		displayNameShort = "RPS-6X AT Missile";
		ammo = CLASS(M_MK40X_AT);
		type = "2*  256";
		mass = 60;
	};
	NEW_CLASS(MK42X_HE_Guided): CA_LauncherMagazine
	{
		author = "Anorexican";
		scope = 2;
		displayName = TAG_NAME(MK42X HE Missile);
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed = 140;
		descriptionShort = "Wire-Guided HE Missile<br />Damage: 100<br />Radius: 10m<br />Used in: RPS-6X";
		displayNameShort = "RPS-6X HE Missile";
		ammo = CLASS(M_MK42X_HE);
		type = "2*  256";
		mass = 40;
	};
	NEW_CLASS(SmokeShellPurple): SmokeShell
	{
		author = "Anorexican";
		descriptionShort = "Fuze: Impact";
		displayName = TAG_NAME(Impact Smoke (Purple));
		displayNameShort = "Purple Smoke";
		model = "kobra\442_weapons\explosive\basic_smoke.p3d";
		ammo = CLASS(SmokeShellPurple_ammo);
	};
	NEW_CLASS(SmokeShellViolet): TAG_CLASS(SmokeShellPurple)
	{
		displayName = TAG_NAME(Impact Smoke (Violet));
		displayNameShort = "Violet Smoke";
		ammo = CLASS(SmokeShellViolet_ammo);
	};
	NEW_CLASS(SmokeShellMidnight): TAG_CLASS(SmokeShellPurple)
	{
		displayName = TAG_NAME(Impact Smoke (Midnight));
		displayNameShort = "Midnight Smoke";
		ammo = CLASS(SmokeShellMidnight_ammo);
	};
};