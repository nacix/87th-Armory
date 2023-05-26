class CfgVehicles 
{
	#define LAAT_NEW(name_raw,classname,inheritance) \
		class AUXCLASS(classname)##: inheritance \
		{ \
			author = "Anorexican"; \
			displayName = NAME_PRETTY(LAAT/I ##name_raw); \
			faction = FACTION_REP; \
			editorPreview = QPATHTOF(data\ui\editorPreviews\##TAG##_##className##.jpg); \
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
		}; \
		class TAG##_P1_##classname##: TAG##_##classname \
		{ \
			editorSubcategory = QUOTE(TAG##_P1_Vehicles); \
			crew = QUOTE(TAG##_Clone_P1_Pilot); \
			typicalCargo[] = {QUOTE(TAG##_Clone_P1_Pilot)}; \
		};

	#define RTT_TEXTURE(texName) \
		hiddenSelectionsTextures[]= \
		{ \
			QPATHTOF(data\rtt\##TAG##_##texName##_co.paa), \
			"3as\3as_itt\data\glass_co.paa", \
			"3as\3as_itt\data\itt_int_back_co.paa", \
			"3as\3as_itt\data\itt_door_co.paa", \
			"3as\3as_itt\data\itt_int_front_co.paa", \
			"3as\3as_itt\data\itt_emiss_co.paa", \
			"3as\3as_itt\data\itt_turret_co.paa" \
		};
	
	class 3AS_ITT;
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

	class 87th_RTT: 3AS_ITT
	{
		author = "Stim";
		displayName = "[87th] RTT";
		faction = "87th_Legion";
		editorSubcategory="87th_Vehicles";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RTT.jpg);
		crew = "87th_Clone_DC15S";
		typicalCargo[]=
		{
			CREW_1(##TAG##_Clone_DC15S)
		};
		RTT_TEXTURE(RTT)
	};
	class 87th_RTT_Rep: 87th_RTT
	{
		displayName = "[87th] RTT (GAR)";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_RTT_Rep.jpg);
		crew = "JLTS_Clone_P2_DC15S";
		typicalCargo[]=
		{
			CREW_1(JLTS_Clone_P2_DC15S)
		};
		RTT_TEXTURE(RTT_Rep)
	};

	class 87th_BARC: ls_ground_barc
	{
		author = "Anorexican & Stim";
		displayName = "[87th] BARC Speeder";
		editorPreview = QPATHTOF(data\ui\editorPreviews\87th_BARC.jpg);
		editorSubcategory = "87th_Vehicles";
		faction = "87th_Legion";
		crew = "87th_BARC_DC15S";
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\barc\87th_BARC_Body_co.paa),
			QPATHTOF(data\barc\87th_BARC_Weapons_co.paa),
			QPATHTOF(data\barc\87th_BARC_Screen_co.paa)
		};
	};

	class 87th_ATRT: 3AS_ATRT
	{
		author="Anorexican";
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
	};
};