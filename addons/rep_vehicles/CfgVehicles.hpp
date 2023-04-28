class CfgVehicles 
{
	#define LAAT_NEW(name_raw,classname,inheritance) \
		class AUXCLASS(classname)##: inheritance \
		{ \
			author = "Anorexican"; \
			displayName = NAME_PRETTY(LAAT/I ##name_raw); \
			faction = FACTION_REP; \
			editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_LAAT.jpg); \
			editorSubcategory = QUOTE(TAG##_Vehicles); \
			hiddenSelectionsTextures[]= \
			{ \
				QPATHTOF(data\laat\##TAG##_LAAT_Hull_co.paa), \
				QPATHTOF(data\laat\##TAG##_LAAT_Wings_co.paa), \
				QPATHTOF(data\laat\##TAG##_LAAT_Weapons_co.paa), \
				QPATHTOF(data\laat\##TAG##_LAAT_Weapon_Details_co.paa), \
				QPATHTOF(data\laat\##TAG##_LAAT_Interior_co.paa) \
			}; \
			crew = QUOTE(TAG##_Clone_Pilot); \
			typicalCargo[] = {QUOTE(TAG##_Clone_Pilot)}; \
			acceleration = 400; \
			liftForceCoef = 6.5; \
			backRotorForceCoef = 3.0; \
			bodyFrictionCoef = 2.0; \
			cyclicAsideForceCoef = 3.2; \
			cyclicForwardForceCoef = 2.35; \
			class pilotCamera \
			{ \
				class OpticsIn \
				{ \
					class Wide \
					{ \
						opticsDisplayName="WFOV"; \
						initAngleX=0; \
						minAngleX=0; \
						maxAngleX=0; \
						initAngleY=0; \
						minAngleY=0; \
						maxAngleY=0; \
						initFov="0.25/0.5"; \
						minFov="0.25/0.5"; \
						maxFov="0.25/0.5"; \
						directionStabilized=1; \
						visionMode[]= \
						{ \
							"Normal", \
							"Ti", \
							"NVG" \
						}; \
						thermalMode[]={0,1}; \
						gunnerOpticsModel="\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; \
						opticsPPEffects[]= \
						{ \
							"OpticsCHAbera2", \
							"OpticsBlur2" \
						}; \
					}; \
					class Medium: Wide \
					{ \
						opticsDisplayName="MFOV"; \
						initFov="0.25/8"; \
						minFov="0.25/8"; \
						maxFov="0.25/8"; \
						gunnerOpticsModel="\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d"; \
					}; \
					class Narrow: Wide \
					{ \
						opticsDisplayName="NFOV"; \
						initFov="0.25/24"; \
						minFov="0.25/24"; \
						maxFov="0.25/24"; \
						gunnerOpticsModel="\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d"; \
					}; \
					showMiniMapInOptics=1; \
					showUAVViewInOptics=0; \
					showSlingLoadManagerInOptics=0; \
				}; \
				minTurn=-150; \
				maxTurn=150; \
				initTurn=0; \
				minElev=-20; \
				maxElev=80; \
				initElev=0; \
				maxXRotSpeed=0.30000001; \
				maxYRotSpeed=0.30000001; \
				pilotOpticsShowCursor=1; \
				controllable=1; \
			}; \
		}; \
		class TAG##_P1_##classname##: TAG##_##classname \
		{ \
			editorSubcategory = QUOTE(TAG##_P1_Vehicles); \
			crew = QUOTE(TAG##_Clone_P1_Pilot); \
			typicalCargo[] = {QUOTE(TAG##_Clone_P1_Pilot)}; \
		};
	
	class 3AS_ATRT;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk1Lights;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;
	class ls_ground_barc;

	LAAT_NEW(Mk.2, LAAT, 3as_LAAT_Mk2)
	LAAT_NEW(Mk.2 (Lights), LAAT_Lights, 3as_LAAT_Mk2Lights)

	LAAT_NEW(Mk.1, LAAT_Mk1, 3as_LAAT_Mk1)
	LAAT_NEW(Mk.1 (Lights), LAAT_Mk1_Lights, 3as_LAAT_Mk1Lights)

	class 87th_BARC: ls_ground_barc
	{
		author = "Anorexican & Stim";
		displayName = "[87th] BARC Speeder";
		editorSubcategory = "87th_Vehicles";
		faction = "87th_Legion";
		crew = "87th_ARF_DC15S";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\barc\87th_BARC_Body_co.paa),
			QPATHTOF(data\barc\87th_BARC_Weapons_co.paa),
			QPATHTOF(data\barc\87th_BARC_Screen_co.paa)
		};
	};

	class 87th_ATRT: 3AS_ATRT
	{
		author="Anorexican & 3AS";
		displayName="[87th] AT-RT";
		genericNames="87th_Names_ATRT";
		icon = "JLTS_iconManMarshalCMDR";
		// editorPreview = QPATHTOF(data\ui\editorPreviews\87th_ATRT.jpg);
		faction = "87th_Legion";
		editorSubcategory = "87th_Vehicles";
		uniformClass="87th_ATRT_Uniform";
		nakedUniform="87th_ATRT_Uniform";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\atrt\87th_ATRT_co.paa)
		};
		weapons[]=
		{
			"87th_ATRT_Weapon"
		};
		magazines[]=
		{
			"3AS_9999Rnd_ATRT_Mag"
		};
		linkedItems[]=
		{
			"Integrated_NVG_TI_1_F",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch",
			"ItemRadio"
		};
		class EventHandlers {};
	};
};