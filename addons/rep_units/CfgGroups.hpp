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
					SQUAD_9(Clone_SergeantMajor, Clone_Sergeant, Clone_AT, Clone_RTO, Clone_AR, Clone_Medic, Clone_DC15AUGL, Clone_DC15S, Clone_DC15S, 1)
				};
				NEW_CLASS(CT_WepSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					SQUAD_9(Clone_Sergeant, Clone_Corporal, Clone_AR, Clone_AT, Clone_Marksman, Clone_DC15S, Clone_DC15S, Clone_DC15A, Clone_Medic, 1)
				};
				NEW_CLASS(CT_ATTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					SQUAD_4(Clone_Corporal, Clone_EOD, Clone_AT, Clone_AT, 1)
				};
				NEW_CLASS(CT_MedTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					SQUAD_4(Clone_Corporal, Clone_Medic, Clone_Medic, Clone_Medic, 1)
				};
				NEW_CLASS(CT_WepTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					SQUAD_4(Clone_Corporal, Clone_AT, Clone_AR, Clone_DC15AUGL, 1)
				};
				NEW_CLASS(CT_SupTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					SQUAD_4(Clone_Corporal, Clone_RTO, Clone_Marksman, Clone_Medic, 1)
				};
				NEW_CLASS(CT_EODTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					SQUAD_4(Clone_Corporal, Clone_EOD, Clone_EOD, Clone_EOD, 1)
				};
				NEW_CLASS(CT_BasTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					SQUAD_5(Clone_Sergeant, Clone_Corporal, Clone_DC15S, Clone_DC15S, Clone_DC15A, 1)
				};
				NEW_CLASS(CT_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					SQUAD_2(Clone_Marksman, Clone_Sharpshooter, 1)
				};
				NEW_CLASS(CT_CQCTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "CQC Team";
					side = 1;
					SQUAD_5(Clone_Sergeant, Clone_DP23, Clone_DP23, Clone_Corporal, Clone_AR, 1)
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
					SQUAD_9(AB_Officer, AB_NCO, AB_AR, AB_AT, AB_AT, AB_DC15LE, AB_DC15LE, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_Fireteam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Air Assault Team";
					side = 1;
					SQUAD_5(AB_NCO, AB_AT, AB_AR, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_WepSquad_A)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad A (250m)";
					side = 1;
					SQUAD_9(AB_Officer, AB_NCO_A, AB_AR, AB_AT, AB_AT, AB_DC15LE, AB_DC15LE, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_Fireteam_A)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team A (250m)";
					side = 1;
					SQUAD_5(AB_NCO_A, AB_AT, AB_CLS, AB_AR, AB_DC15LE_UGL, 1)
				};
				NEW_CLASS(AB_WepSquad_B)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad B (500m)";
					side = 1;
					SQUAD_9(AB_Officer, AB_NCO_B, AB_AR, AB_AT, AB_AT, AB_DC15LE, AB_DC15LE, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_Fireteam_B)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team B (500m)";
					side = 1;
					SQUAD_5(AB_NCO_B, AB_AT, AB_CLS, AB_AR, AB_DC15LE_UGL, 1)
				};
				NEW_CLASS(AB_WepSquad_C)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad C (750m)";
					side = 1;
					SQUAD_9(AB_Officer, AB_NCO_C, AB_AR, AB_AT, AB_AT, AB_DC15LE, AB_DC15LE, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_Fireteam_C)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team C (750m)";
					side = 1;
					SQUAD_5(AB_NCO_C, AB_AT, AB_CLS, AB_AR, AB_DC15LE_UGL, 1)
				};
				NEW_CLASS(AB_WepSquad_D)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Squad D (1000m)";
					side = 1;
					SQUAD_9(AB_Officer, AB_NCO_D, AB_AR, AB_AT, AB_AT, AB_DC15LE, AB_DC15LE, AB_DC15LE_UGL, AB_CLS, 1)
				};
				NEW_CLASS(AB_Fireteam_D)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Para Team D (1000m)";
					side = 1;
					SQUAD_5(AB_NCO_D, AB_AT, AB_CLS, AB_AR, AB_DC15LE_UGL, 1)
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
					SQUAD_5(ARC_Lieutenant, ARC_JTAC, ARC_AT, ARC_EOD, ARC_Medic, 1)
				};
				NEW_CLASS(ARC_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Support Team";
					side = 1;
					SQUAD_3(ARC_JTAC, ARC_AT, ARC_Sniper, 1)
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
					SQUAD_5(ARF_NCO, ARF_Spotter, ARF_AT, ARF_Sniper, ARF_CLS, 1)
				};
				NEW_CLASS(ARF_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					SQUAD_2(ARF_Spotter, ARF_Sniper, 1)
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
					SQUAD_5(BARC_NCO, BARC_Spotter, BARC_JTAC, BARC_Sniper, BARC_CLS, 1)
				};
				NEW_CLASS(BARC_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					SQUAD_2(BARC_Spotter, BARC_Sniper, 1)
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
					SQUAD_4(RC_NCO, RC_Tech, RC_Demo, RC_Sniper, 1)
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
					SQUAD_9(Clone_P1_Lieutenant, Clone_P1_Sergeant, Clone_P1_AT, Clone_P1_RTO, Clone_P1_AR, Clone_P1_Medic, Clone_P1_DC15AUGL, Clone_P1_DC15A, Clone_P1_DC15A, 1)
				};
				NEW_CLASS(CT_WepSquad)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Squad";
					side = 1;
					SQUAD_9(Clone_P1_Lieutenant, Clone_P1_Sergeant, Clone_P1_AR, Clone_P1_AT, Clone_P1_Sharpshooter, Clone_P1_DC15A, Clone_P1_DC15A, Clone_P1_DC15A, Clone_P1_Medic, 1)
				};
				NEW_CLASS(CT_ATTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Anti-Tank Team";
					side = 1;
					SQUAD_4(Clone_P1_Corporal, Clone_P1_EOD, Clone_P1_AT, Clone_P1_AT, 1)
				};
				NEW_CLASS(CT_MedTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_med.paa";
					name = "Medical Team";
					side = 1;
					SQUAD_4(Clone_P1_Corporal, Clone_P1_Medic, Clone_P1_Medic, Clone_P1_Medic, 1)
				};
				NEW_CLASS(CT_WepTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Weapons Team";
					side = 1;
					SQUAD_4(Clone_P1_Corporal, Clone_P1_AT, Clone_P1_AR, Clone_P1_DC15AUGL, 1)
				};
				NEW_CLASS(CT_SupTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_service.paa";
					name = "Support Team";
					side = 1;
					SQUAD_4(Clone_P1_Corporal, Clone_P1_RTO, Clone_P1_Sharpshooter, Clone_P1_Medic, 1)
				};
				NEW_CLASS(CT_EODTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_ordnance.paa";
					name = "Ordnance Team";
					side = 1;
					SQUAD_4(Clone_P1_Corporal, Clone_P1_EOD, Clone_P1_EOD, Clone_P1_EOD, 1)
				};
				NEW_CLASS(CT_BasTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_inf.paa";
					name = "Basic Team";
					side = 1;
					SQUAD_5(Clone_P1_Sergeant, Clone_P1_Corporal, Clone_P1_DC15A, Clone_P1_DC15A, Clone_P1_DC15A, 1)
				};
				NEW_CLASS(CT_SSTeam)
				{
					faction = CLASS(Legion);
					icon = "\MRC\JLTS\Core_mod\data\markers\gar_recon.paa";
					name = "Sniper Team";
					side = 1;
					SQUAD_2(Clone_P1_Sharpshooter, Clone_P1_DC15A, 1)
				};
			};
		};
	};
};