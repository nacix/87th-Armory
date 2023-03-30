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
				"3AS\3as_Laat\LAATI\data\Weapons_CO.paa", \
				QPATHTOF(data\laat\##TAG##_LAAT_Weapon_Details_co.paa), \
				"3AS\3as_Laat\LAATI\data\Interior_CO.paa" \
			}; \
			crew = QUOTE(TAG##_Clone_Pilot); \
			typicalCargo[] = {QUOTE(TAG##_Clone_Pilot)}; \
		}; \
		class TAG##_P1_##classname##: TAG##_##classname \
		{ \
			editorSubcategory = QUOTE(TAG##_P1_Vehicles); \
			crew = QUOTE(TAG##_Clone_P1_Pilot); \
			typicalCargo[] = {QUOTE(TAG##_Clone_P1_Pilot)}; \
		}; \
	
	class 3AS_ATRT;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk1Lights;
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk2Lights;

	LAAT_NEW(Mk.2, LAAT, 3as_LAAT_Mk2)
	LAAT_NEW(Mk.2 (Lights), LAAT_Lights, 3as_LAAT_Mk2Lights)

	LAAT_NEW(Mk.1, LAAT_Mk1, 3as_LAAT_Mk1)
	LAAT_NEW(Mk.1 (Lights), LAAT_Mk1_Lights, 3as_LAAT_Mk1Lights)

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