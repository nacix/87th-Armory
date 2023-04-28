class CfgMagazines
{
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
};