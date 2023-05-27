class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		side = 1;
		NEW_CLASS(Legion)
		{
			name = TAG_NAME(Republic Forces);
			NEW_CLASS(Clones)
			{
				name = "Infantry Detachments";
				NEW_CLASS(CT_InfSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Infantry Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_SergeantMajor);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_Sergeant);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_RTO);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AR);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15AUGL);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
				};
				NEW_CLASS(CT_WepSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_Sergeant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Marksman);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15A);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
				};
				NEW_CLASS(CT_ATTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_EOD);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AT);
					};
				};
				NEW_CLASS(CT_MedTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
				};
				NEW_CLASS(CT_WepTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15AUGL);
					};
				};
				NEW_CLASS(CT_SupTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_RTO);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Marksman);
					};
				};
				NEW_CLASS(CT_EODTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_EOD);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_EOD);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_EOD);
					};
				};
				NEW_CLASS(CT_BasTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_Sergeant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15S);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DC15A);
					};
				};
				NEW_CLASS(CT_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_Marksman);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Sharpshooter);
					};
				};
				NEW_CLASS(CT_CQCTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "CQC Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_Sergeant);
					};
					class Unit1
					{
						position[] = {1,-1,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DP23);
					};
					class Unit2
					{
						position[] = {-1,-1,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_DP23);
					};
					class Unit3
					{
						position[] = {2,-2,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Corporal);
					};
					class Unit4
					{
						position[] = {-2,-2,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_AR);
					};
				};
			};
			NEW_CLASS(AB)
			{
				name = "Airborne Detachments";
				NEW_CLASS(AB_WepSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Air Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = CLASS(AB_Officer);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
				};
				NEW_CLASS(AB_Fireteam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Air Assault Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
				};
				NEW_CLASS(AB_WepSquad_A)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad A (250m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = CLASS(AB_Officer);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_A);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
				};
				NEW_CLASS(AB_Fireteam_A)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team A (250m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_A);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
				};
				NEW_CLASS(AB_WepSquad_B)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad B (500m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = CLASS(AB_Officer);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_B);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
				};
				NEW_CLASS(AB_Fireteam_B)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team B (500m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_B);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
				};
				NEW_CLASS(AB_WepSquad_C)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad C (750m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = CLASS(AB_Officer);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_C);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
				};
				NEW_CLASS(AB_Fireteam_C)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team C (750m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_C);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
				};
				NEW_CLASS(AB_WepSquad_D)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad D (1000m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 1;
						vehicle = CLASS(AB_Officer);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_D);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
				};
				NEW_CLASS(AB_Fireteam_D)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team D (1000m)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(AB_NCO_D);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_CLS);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_AR);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(AB_DC15LE_UGL);
					};
				};
			};
			NEW_CLASS(ARC)
			{
				name = "ARC Detachments";
				NEW_CLASS(ARC_WepTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = CLASS(ARC_Lieutenant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_JTAC);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_EOD);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_Medic);
					};
				};
				NEW_CLASS(ARC_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_JTAC);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARC_Sniper);
					};
				};
			};
			NEW_CLASS(ARF)
			{
				name = "ARF Detachments";
				NEW_CLASS(ARF_RecTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(ARF_NCO);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(ARF_Spotter);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(ARF_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(ARF_Sniper);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(ARF_CLS);
					};
				};
				NEW_CLASS(ARF_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(ARF_Spotter);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(ARF_Sniper);
					};
				};
			};
			NEW_CLASS(BARC)
			{
				name = "BARC Detachments";
				NEW_CLASS(BARC_RecTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Recon Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(BARC_NCO);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(BARC_Spotter);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(BARC_JTAC);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(BARC_Sniper);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(BARC_CLS);
					};
				};
				NEW_CLASS(BARC_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(BARC_Spotter);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(BARC_Sniper);
					};
				};
			};
			NEW_CLASS(RC)
			{
				name = "Commando Detachments";
				NEW_CLASS(RC_Fireteam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Strike Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(RC_NCO);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(RC_Tech);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(RC_Demo);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(RC_Sniper);
					};
				};
			};
			NEW_CLASS(Clones_P1)
			{
				name = "Infantry Detachments (P1)";
				NEW_CLASS(CT_InfSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Infantry Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = CLASS(Clone_P1_Lieutenant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_P1_Sergeant);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_RTO);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AR);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Medic);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15AUGL);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
				};
				NEW_CLASS(CT_WepSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = CLASS(Clone_P1_Lieutenant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_P1_Sergeant);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AT);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Marksman);
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15AUGL);
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_Medic);
					};
				};
				NEW_CLASS(CT_ATTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_EOD);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AT);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AT);
					};
				};
				NEW_CLASS(CT_MedTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Medic);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Medic);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Medic);
					};
				};
				NEW_CLASS(CT_WepTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AT);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_AR);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15AUGL);
					};
				};
				NEW_CLASS(CT_SupTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Medic);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_RTO);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Marksman);
					};
				};
				NEW_CLASS(CT_EODTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_EOD);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_EOD);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_EOD);
					};
				};
				NEW_CLASS(CT_BasTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = CLASS(Clone_P1_Sergeant);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_Corporal);
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15A);
					};
				};
				NEW_CLASS(CT_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = CLASS(Clone_P1_DC15S);
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = CLASS(Clone_P1_Sharpshooter);
					};
				};
			};
		};
	};
};