class CfgGroups
{
    class East
    {
        name = "$STR_A3_CfgGroups_East0";
        side = 0;

        NEW_CLASS(CIS_Droids)
        {
            name = TAG_NAME(CIS Droid Army);

            NEW_CLASS(B1)
            {
                name = "B1 Battle Droids";

                NEW_CLASS(B1_Squad_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO, Droid_B1_E5C, Droid_B1_E5C, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, 0)
                };
                NEW_CLASS(B1_Squad_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO, Droid_B1_E5C, Droid_B1_E5C, Droid_B1_AT, Droid_B1_AA, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, 0)
                };
                NEW_CLASS(B1_Team_AT)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_ordnance.paa";
                    name = "Anti-Tank Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO, Droid_B1_AT, Droid_B1_AT, Droid_B1_AT, 0)
                };
                NEW_CLASS(B1_Team_AA)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_antiair.paa";
                    name = "Anti-Air Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO, Droid_B1_AA, Droid_B1_AA, Droid_B1_AA, 0)
                };
                NEW_CLASS(B1_Team_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO, Droid_B1_E5C, Droid_B1_E5C, Droid_B1_AT, 0)
                };
                NEW_CLASS(B1_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Team";
                    side = 0;
                    SQUAD_5(Droid_B1_NCO, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, Droid_B1_E5, 0)
                };
                NEW_CLASS(B1_Team_Sniper)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Sniper Team";
                    side = 0;
                    SQUAD_2(Droid_B1_NCO, Droid_B1_E5S, 0)
                };
            };

            NEW_CLASS(Sim)
            {
                name = "B1 Training Droids";

                NEW_CLASS(Sim_Squad_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO_Sim, Droid_B1_E5C, Droid_B1_E5C_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, 0)
                };
                NEW_CLASS(Sim_Squad_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO_Sim, Droid_B1_E5C_Sim, Droid_B1_E5C_Sim, Droid_B1_AT_Sim, Droid_B1_AA_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, 0)
                };
                NEW_CLASS(Sim_Team_AT)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_ordnance.paa";
                    name = "Anti-Tank Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Sim, Droid_B1_AT_Sim, Droid_B1_AT_Sim, Droid_B1_AT_Sim, 0)
                };
                NEW_CLASS(Sim_Team_AA)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_antiair.paa";
                    name = "Anti-Air Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Sim, Droid_B1_AA_Sim, Droid_B1_AA_Sim, Droid_B1_AA, 0)
                };
                NEW_CLASS(Sim_Team_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Sim, Droid_B1_E5C_Sim, Droid_B1_E5C_Sim, Droid_B1_AT_Sim, 0)
                };
                NEW_CLASS(Sim_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Team";
                    side = 0;
                    SQUAD_5(Droid_B1_NCO_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, Droid_B1_E5_Sim, 0)
                };
                NEW_CLASS(Sim_Team_Sniper)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Sniper Team";
                    side = 0;
                    SQUAD_2(Droid_B1_NCO_Sim, Droid_B1_E5S_Sim, 0)
                };
            };

            NEW_CLASS(Geo)
            {
                name = "B1 Geonosis Droids";

                NEW_CLASS(Geo_Squad_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO_Geo, Droid_B1_E5C, Droid_B1_E5C_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, 0)
                };
                NEW_CLASS(Geo_Squad_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Squad";
                    side = 0;
                    SQUAD_9(Droid_B1_NCO_Geo, Droid_B1_E5C_Geo, Droid_B1_E5C_Geo, Droid_B1_AT_Geo, Droid_B1_AA_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, 0)
                };
                NEW_CLASS(Geo_Team_AT)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_ordnance.paa";
                    name = "Anti-Tank Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Geo, Droid_B1_AT_Geo, Droid_B1_AT_Geo, Droid_B1_AT_Geo, 0)
                };
                NEW_CLASS(Geo_Team_AA)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_antiair.paa";
                    name = "Anti-Air Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Geo, Droid_B1_AA_Geo, Droid_B1_AA_Geo, Droid_B1_AA, 0)
                };
                NEW_CLASS(Geo_Team_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Team";
                    side = 0;
                    SQUAD_4(Droid_B1_NCO_Geo, Droid_B1_E5C_Geo, Droid_B1_E5C_Geo, Droid_B1_AT_Geo, 0)
                };
                NEW_CLASS(Geo_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Team";
                    side = 0;
                    SQUAD_5(Droid_B1_NCO_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, Droid_B1_E5_Geo, 0)
                };
                NEW_CLASS(Geo_Team_Sniper)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Sniper Team";
                    side = 0;
                    SQUAD_2(Droid_B1_NCO_Geo, Droid_B1_E5S_Geo, 0)
                };
            };

            NEW_CLASS(X1)
            {
                name = "X1 Proto-Droids";

                NEW_CLASS(X1_Squad_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Squad";
                    side = 0;
                    SQUAD_9(Droid_X1_NCO, Droid_X1_E5C, Droid_X1_E5C, Droid_X1_SBB3, Droid_X1_E5, Droid_X1_E5, Droid_X1_E5, Droid_X1_E5, Droid_X1_E5, 0)
                };
                NEW_CLASS(X1_Squad_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Squad";
                    side = 0;
                    SQUAD_9(Droid_X1_NCO, Droid_X1_E5C, Droid_X1_E5C, Droid_X1_SBB3, Droid_X1_AT, Droid_X1_Z7, Droid_X1_Grenadier, Droid_X1_E5, Droid_X1_E5, 0)
                };
                NEW_CLASS(X1_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Basic Team";
                    side = 0;
                    SQUAD_5(Droid_X1_NCO, Droid_X1_E5C, Droid_X1_E5C, Droid_X1_E5, Droid_X1_E5, 0)
                };
                NEW_CLASS(X1_Team_Weapons)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_inf.paa";
                    name = "Weapons Team";
                    side = 0;
                    SQUAD_4(Droid_X1_NCO, Droid_X1_E5C, Droid_X1_SBB3, Droid_X1_E5, 0)
                };
                NEW_CLASS(X1_Team_AA)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_antiair.paa";
                    name = "Anti-Air Team";
                    side = 0;
                    SQUAD_3(Droid_X1_NCO, Droid_X1_AA, Droid_X1_AA, 0)
                };
                NEW_CLASS(X1_Team_AT)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_ordnance.paa";
                    name = "Anti-Tank Team";
                    side = 0;
                    SQUAD_3(Droid_X1_NCO, Droid_X1_AT, Droid_X1_AT, 0)
                };
                NEW_CLASS(X1_Team_Sniper)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Sniper Team";
                    side = 0;
                    SQUAD_2(Droid_X1_NCO, Droid_X1_E5S, 0)
                };
            };

            NEW_CLASS(BX)
            {
                name = "BX Commando Droids";

                NEW_CLASS(BX_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Commando Team";
                    side = 0;
                    SQUAD_5(Droid_BX_SL, Droid_BX, Droid_BX, Droid_BX, Droid_BX, 0)
                };
                NEW_CLASS(Diplomat_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Security Detail";
                    side = 0;
                    SQUAD_6(Droid_BX_Diplomat_SL, Droid_BX_Diplomat, Droid_BX_Diplomat, Droid_BX_Diplomat, Droid_BX_Diplomat, Droid_BX_Diplomat, 0)
                };
                NEW_CLASS(Merc_Team_Basic)
                {
                    faction = CLASS(CIS);
                    icon = "\MRC\JLTS\Core_mod_droids\data\markers\cis_recon.paa";
                    name = "Mercenary Team";
                    side = 0;
                    SQUAD_5(Droid_BX_Merc_SL, Droid_BX_Merc, Droid_BX_Merc, Droid_BX_Merc, Droid_BX_Merc, 0)
                };
            };
        };
    };
};