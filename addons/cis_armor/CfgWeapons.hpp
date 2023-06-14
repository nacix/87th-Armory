class CfgWeapons
{
    class ls_redforUniform_base;
    class lsd_cis_bxDroid_uniform: ls_redforUniform_base
    {
        class ItemInfo;
    };
    
    GET_INFO(lsd_cis_bxDiplomatDroid_uniform, lsd_cis_bxDroid_uniform)
    GET_INFO(lsd_cis_bxSecurityDroid_uniform, lsd_cis_bxDroid_uniform)

    NEW_CLASS(BX_Uniform_Commando_Captain): lsd_cis_bxDroid_uniform
    {
        author = "Anorexican";
        displayName = "[CIS] BX Commando (Captain)";
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Commando_Captain_co.paa) };
        class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = CLASS(BX_Commando_Captain_Base);
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
    };

    NEW_CLASS(BX_Uniform_Diplomat): lsd_cis_bxDiplomatDroid_uniform
    {
        author = "Anorexican";
        displayName = "[CIS] BX Diplomat";
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Diplomat_co.paa) };
        class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = CLASS(BX_Diplomat_Base);
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    NEW_CLASS(BX_Uniform_Diplomat_Captain): lsd_cis_bxDiplomatDroid_uniform
    {
        author = "Anorexican";
        displayName = "[CIS] BX Diplomat (Captain)";
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Diplomat_Captain_co.paa) };
        class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = CLASS(BX_Diplomat_Captain_Base);
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
    };

    NEW_CLASS(BX_Uniform_Merc): lsd_cis_bxSecurityDroid_uniform
    {
        author = "Anorexican";
        displayName = "[CIS] BX Mercenary";
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Mercenary_co.paa) };
        class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = CLASS(BX_Merc_Base);
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    NEW_CLASS(BX_Uniform_Merc_Captain): lsd_cis_bxSecurityDroid_uniform
    {
        author = "Anorexican";
        displayName = "[CIS] BX Mercenary (Captain)";
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Mercenary_Captain_co.paa) };
        class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = CLASS(BX_Merc_Captain_Base);
			uniformType = "Neopren";
			containerClass = "Supply100";
			mass = 40;
		};
    };
};