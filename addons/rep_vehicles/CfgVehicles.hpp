class CfgVehicles 
{
	#define LAAT_NEW(rawName,className,inheritance) \
		NEW_CLASS(className): inheritance \
		{ \
			author = "Anorexican"; \
			displayName = TAG_NAME(LAAT/I ##rawName); \
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
		NEW_CLASS(P1_##className): TAG_CLASS(className) \
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

	NEW_CLASS(RTT): 3AS_ITT
	{
		author = "Stim";
		displayName = TAG_NAME(RTT);
		faction = CLASS(Legion);
		editorSubcategory = CLASS(Vehicles);
		editorPreview = QPATHTOF(data\ui\editorPreviews\TAG_CLASS(RTT).jpg);
		crew = CLASS(Clone_DC15S);
		typicalCargo[]=
		{
			LIST_3(TAG_CLASS(Clone_DC15S))
		};
		RTT_TEXTURE(RTT)
	};
	NEW_CLASS(P1_RTT): TAG_CLASS(RTT)
	{
		editorSubcategory = CLASS(P1_Vehicles);
		crew = CLASS(Clone_P1_DC15S);
		typicalCargo[]=
		{
			LIST_3(TAG_CLASS(Clone_P1_DC15S))
		};
	};

	NEW_CLASS(RTT_Rep): TAG_CLASS(RTT)
	{
		displayName = TAG_NAME(RTT (GAR));
		editorPreview = QPATHTOF(data\ui\editorPreviews\TAG_CLASS(RTT_Rep).jpg);
		crew = "JLTS_Clone_P2_DC15S";
		typicalCargo[]=
		{
			LIST_3(JLTS_Clone_P2_DC15S)
		};
		RTT_TEXTURE(RTT_Rep)
	};
	NEW_CLASS(P1_RTT_Rep): TAG_CLASS(RTT_Rep)
	{
		editorSubcategory = CLASS(P1_Vehicles);
		crew = "3AS_Clone_P1";
		typicalCargo[]=
		{
			LIST_3(3AS_Clone_P1)
		};
	};

	NEW_CLASS(BARC): ls_ground_barc
	{
		author = "Anorexican & Stim";
		displayName = TAG_NAME(BARC Speeder);
		editorPreview = QPATHTOF(data\ui\editorPreviews\TAG_CLASS(BARC).jpg);
		editorSubcategory = CLASS(Vehicles);
		faction = CLASS(Legion);
		crew = CLASS(BARC_DC15S);
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\barc\TAG_CLASS(BARC_Body)_co.paa),
			QPATHTOF(data\barc\TAG_CLASS(BARC_Weapons)_co.paa),
			QPATHTOF(data\barc\TAG_CLASS(BARC_Screen)_co.paa)
		};
	};

	NEW_CLASS(ATRT): 3AS_ATRT
	{
		author = "Anorexican";
		displayName = TAG_NAME(AT-RT);
		genericNames = CLASS(Names_ATRT);
		icon = "JLTS_iconManMarshalCMDR";
		faction = CLASS(Legion);
		editorSubcategory = CLASS(Vehicles);
		uniformClass = CLASS(ATRT_Uniform);
		nakedUniform = CLASS(ATRT_Uniform);
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data\atrt\TAG_CLASS(ATRT)_co.paa)
		};
		weapons[]=
		{
			CLASS(ATRT_Weapon)
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