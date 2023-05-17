class CfgMagazines
{
	class 3as_LAAT_8Rnd_Missile_AGM;
	class 24Rnd_ACE_Hydra70_DAGR;
	class 24Rnd_missiles;
	class Laser_Battery_F;

	class 87th_LAAT_Cannon_Mag_HE: Laser_Battery_F
	{
		ammo="87th_LAAT_Cannon_Ammo_HE";
		model="a3\weapons_f\data\bullettracer\tracer_green";
		scope=2;
		displayName="[87th] LAAT Cannon Tibanna Cell (HE)";
		displayNameShort="HE";
		count=100;
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=850;
		maxLeadSpeed=83.333298;
		nameSound="mg";
		muzzleImpulseFactor[]={0.0099999998,0.0099999998};
	};
	class 87th_LAAT_Cannon_Mag_AP: 87th_LAAT_Cannon_Mag_HE
	{
		ammo="87th_LAAT_Cannon_Ammo_AP";
		model="a3\weapons_f\data\bullettracer\tracer_green";
		scope=2;
		displayName="[87th] LAAT Cannon Tibanna Cell (AP)";
		displayNameShort="AP";
		count=75;
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=850;
		maxLeadSpeed=83.333298;
		nameSound="mg";
		muzzleImpulseFactor[]={0.0099999998,0.0099999998};
	};

	class 87th_LAAT_8Rnd_AGM_HEDP: 3as_LAAT_8Rnd_Missile_AGM
	{
		displayName="[87th] Torrent Air-to-Ground Missile";
		count=8;
		model="3AS\3as_arc170\Model\torrent_rail_x1";
		ammo="87th_AGM_HEDP";
	};
	
	class 87th_LAAT_24Rnd_AGM_HE: 24Rnd_missiles
	{
		displayName="[87th] Volley Air-to-Ground Missile";
		count=24;
		model="3AS\3as_arc170\Model\torrent_rail_x1";
		ammo="87th_AGM_HE";
	};
	class 87th_LAAT_24Rnd_AGM_HE_las: 24Rnd_ACE_Hydra70_DAGR
	{
		displayName="[87th] Ripple Air-to-Ground Rocket";
		count=24;
		model="3AS\3as_arc170\Model\torrent_rail_x1";
		ammo="87th_AGM_HE_las";
	};
};