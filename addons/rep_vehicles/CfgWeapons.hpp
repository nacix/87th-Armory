class CfgWeapons 
{
	class 3AS_ATRT_Uniform;
	class CannonCore;
	class RocketPods;
	class missiles_DAGR: RocketPods
	{
		class HE;
	};
	class missiles_DAR: RocketPods
	{
		class HE;
	};
	class autocannon_Base_F: CannonCore
	{
		class player;
	};
	class 3as_LAAT_autocannon_30mm: LMG_M200
	{
		class HE: autocannon_Base_F
		{
			class player: player
			{
				class StandardSound;
			};
		};
	};
	class ParticleBeamCannon_F: 3as_LAAT_autocannon_30mm
	{
		class HE: HE
		{
			class player: player
			{
				class StandardSound;
			};
		};
	};

	class 87th_LAAT_Cannon_HE: ParticleBeamCannon_F
	{
		class HE: HE
		{
			displayName="[87th] Heavy Blaster Cannon (HE)";
			magazines[]=
			{
				"87th_LAAT_Cannon_Mag_HE"
			};
			magazineReloadTime=15;
			class player: player
			{
				reloadTime=0.24;
				dispersion=0.0018;
				magazineReloadTime=12.5;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"3AS\3as_Laat\sounds\LAAT_Cannon.wav",
						1.99526,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001
					};
					soundsetshot[]=
					{
						"3AS_HeavyBlaster_soundset"
					};
				};
			};
		};
	};
	class 87th_LAAT_Cannon_AP: 87th_LAAT_Cannon_HE
	{
		class HE: HE
		{
			displayName="[87th] Heavy Blaster Cannon (AP)";
			magazines[]=
			{
				"87th_LAAT_Cannon_Mag_AP"
			};
			magazineReloadTime=12.5;
			class player: player
			{
				reloadTime=0.425;
				dispersion=0.0018;
				magazineReloadTime=15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"3AS\3as_Laat\sounds\LAAT_Cannon.wav",
						1.99526,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001
					};
					soundsetshot[]=
					{
						"3AS_HeavyBlaster_soundset"
					};
				};
			};
		};
	};
	class 87th_LAAT_Missile_HEDP: weapon_AGM_65Launcher
	{
		displayName="Torrent Air-to-Ground Missile";
		magazines[]=
		{
			"87th_LAAT_8Rnd_AGM_HEDP"
		};
		model="a3\weapons_f\empty.p3d";
		class HE: HE
		{
			magazineReloadTime = 15;
		};
	};
	class 87th_LAAT_Missile_HE: missiles_DAGR
	{
		displayName = "HE Missile";
		magazines[]=
		{
			"87th_LAAT_24Rnd_AGM_HE_las"
		};
		model="a3\weapons_f\empty.p3d";
	};
	class 87th_LAAT_Rocket_HE: missiles_DAR
	{
		displayName = "HE Rocket";
		magazines[]=
		{
			"87th_LAAT_24Rnd_AGM_HE"
		};
		model="a3\weapons_f\empty.p3d";
		class HE: HE
		{
			magazineReloadTime = 10;
		};
	};

	class 87th_ATRT_Uniform: 3AS_ATRT_Uniform
	{
		author="Anorexican";
		displayName="AT-RT Uniform";
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
		class ItemInfo
		{
			uniformClass="87th_ATRT";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\87th_ATRT_co.paa)
		};
	};
};