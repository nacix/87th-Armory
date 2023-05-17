class CfgAmmo
{
	class 3as_LAAT_AGM_Missile;
	class 3AS_Sabre_HE;
	class ACE_Hydra70_DAGR;
	class laserAmmo_F;
	class M_AT;

	class 87th_LAAT_Cannon_Ammo_HE: laserAmmo_F
	{
		hit=120;
		indirectHit=10;
		indirectHitRange=7.5;
		explosive=0.9;
		caliber=8;
		airlock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		tracerScale=3.5;
		tracerStartTime=0.1;
		tracerEndTime=4.6999998;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		model="a3\weapons_f\data\bullettracer\tracer_green";
		simulation="shotbullet";
	};
	class 87th_LAAT_Cannon_Ammo_AP: 87th_LAAT_Cannon_Ammo_HE
	{
		warheadName = "AP";
		displayNameShort = "AP";
		hit=360;
		indirectHit=5;
		indirectHitRange=3;
		explosive=0.5;
		caliber=10;
		airlock=1;
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		tracerScale=2.5;
		tracerStartTime=0.1;
		tracerEndTime=4.6999998;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		model="a3\weapons_f\data\bullettracer\tracer_green";
		simulation="shotbullet";
	};
	
	class 87th_AGM_HEDP: 3as_LAAT_AGM_Missile
	{
		displayname="Laser-Guided AGM (HEDP)";
		warheadName="HEDP";
		hit=1000;
		model="3AS\3as_Laat\LAATI\model\proton_torpedo.p3d";
		indirecthit=500;
		indirecthitrange=3;
		caliber=50;
	};

	class 87th_AGM_HE: M_AT
	{
		displayName = "Rockets (HE)";
		displayNameShort = "HE";
	};
	class 87th_AGM_HE_las: ACE_Hydra70_DAGR
	{
		displayName = "Laser-Guided AGM (HE)";
		displayNameShort = "HE";
	};
};