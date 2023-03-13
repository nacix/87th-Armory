class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		side = 1;
		class 87th_Legion
		{
			name = "[87th] Republic Forces";
			class 87th_Clones
			{
				name = "Infantry Detachments";
				class 87th_CT_InfSquad
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Infantry Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_SergeantMajor";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_Sergeant";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_RTO";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AR";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15AUGL";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
				};
				class 87th_CT_WepSquad
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_Sergeant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15A";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
				};
				class 87th_CT_ATTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_EOD";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AT";
					};
				};
				class 87th_CT_MedTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
				};
				class 87th_CT_WepTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15AUGL";
					};
				};
				class 87th_CT_SupTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_RTO";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Marksman";
					};
				};
				class 87th_CT_EODTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_EOD";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_EOD";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_EOD";
					};
				};
				class 87th_CT_BasTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_Sergeant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15S";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DC15A";
					};
				};
				class 87th_CT_SSTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_Marksman";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Sharpshooter";
					};
				};
				class 87th_CT_CQCTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "CQC Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_Sergeant";
					};
					class Unit1
					{
						position[] = {1,-1,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DP23";
					};
					class Unit2
					{
						position[] = {-1,-1,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_DP23";
					};
					class Unit3
					{
						position[] = {2,-2,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Corporal";
					};
					class Unit4
					{
						position[] = {-2,-2,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_AR";
					};
				};
			};
			class 87th_AB
			{
				name = "Airborne Detachments";
				class 87th_AB_WepSquad
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Air Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "87th_AB_Officer";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
				};
				class 87th_AB_Fireteam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Air Assault Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
				};
				class 87th_AB_WepSquad_A
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad A (250m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "87th_AB_Officer";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_A";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
				};
				class 87th_AB_Fireteam_A
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team A (250m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_A";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
				};
				class 87th_AB_WepSquad_B
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad B (500m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "87th_AB_Officer";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_B";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
				};
				class 87th_AB_Fireteam_B
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team B (500m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_B";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
				};
				class 87th_AB_WepSquad_C
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad C (750m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "87th_AB_Officer";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_C";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
				};
				class 87th_AB_Fireteam_C
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team C (750m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_C";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
				};
				class 87th_AB_WepSquad_D
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad D (1000m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = "87th_AB_Officer";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_D";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
				};
				class 87th_AB_Fireteam_D
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team D (1000m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_AB_NCO_D";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_CLS";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_AR";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_AB_DC15LE_UGL";
					};
				};
			};
			class 87th_ARC
			{
				name = "ARC Detachments";
				class 87th_ARC_WepTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "87th_ARC_Lieutenant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_JTAC";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_EOD";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_Medic";
					};
				};
				class 87th_ARC_SSTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_JTAC";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARC_Sniper";
					};
				};
			};
			class 87th_ARF
			{
				name = "ARF Detachments";
				class 87th_ARF_RecTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_ARF_NCO";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_ARF_Spotter";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_ARF_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_ARF_Sniper";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_ARF_CLS";
					};
				};
				class 87th_ARF_SSTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_ARF_Spotter";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_ARF_Sniper";
					};
				};
			};
			class 87th_BARC
			{
				name = "BARC Detachments";
				class 87th_BARC_RecTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_BARC_NCO";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_BARC_Spotter";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_BARC_JTAC";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_BARC_Sniper";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_BARC_CLS";
					};
				};
				class 87th_BARC_SSTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_BARC_Spotter";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_BARC_Sniper";
					};
				};
			};
			class 87th_RC
			{
				name = "Commando Detachments";
				class 87th_RC_Fireteam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Strike Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_RC_NCO";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_RC_Tech";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_RC_Demo";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_RC_Sniper";
					};
				};
			};
			class 87th_Clones_P1
			{
				name = "Infantry Detachments (P1)";
				class 87th_CT_InfSquad
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Infantry Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "87th_Clone_P1_Lieutenant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_P1_Sergeant";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_RTO";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AR";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Medic";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15AUGL";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
				};
				class 87th_CT_WepSquad
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "87th_Clone_P1_Lieutenant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_P1_Sergeant";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15AUGL";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_Medic";
					};
				};
				class 87th_CT_ATTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_EOD";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AT";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AT";
					};
				};
				class 87th_CT_MedTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Medic";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Medic";
					};
				};
				class 87th_CT_WepTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AT";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_AR";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15AUGL";
					};
				};
				class 87th_CT_SupTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Medic";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_RTO";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Marksman";
					};
				};
				class 87th_CT_EODTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_EOD";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_EOD";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_EOD";
					};
				};
				class 87th_CT_BasTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "87th_Clone_P1_Sergeant";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_Corporal";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_DC15A";
					};
				};
				class 87th_CT_SSTeam
				{
					faction = "87th_Legion";
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "87th_Clone_P1_DC15S";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "87th_Clone_P1_Sharpshooter";
					};
				};
			};
		};
	};
};