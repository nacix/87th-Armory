class CfgVehicles
{
    class lsd_cis_BxDroid_base;

    NEW_CLASS(BX_Commando_Captain_Base): lsd_cis_BxDroid_base
    {
        author = "Anorexican";
		scope = 1;
		_generalMacro = CLASS(BX_Commando_Captain_Base);
		displayName = "BXCommandoCaptainBase";
        faction = CLASS(CIS);
		uniformClass = CLASS(BX_Uniform_Commando_Captain);
        nakedUniform = CLASS(BX_Uniform_Commando_Captain);
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Commando_Captain_co.paa) };
    };

    NEW_CLASS(BX_Diplomat_Base): TAG_CLASS(BX_Commando_Captain_Base)
    {
        _generalMacro = CLASS(BX_Diplomat_Base);
        displayName = "BXDiplomatBase";
        uniformClass = CLASS(BX_Uniform_Diplomat);
        nakedUniform = CLASS(BX_Uniform_Diplomat);
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Diplomat_co.paa) };
    };
    NEW_CLASS(BX_Diplomat_Captain_Base): TAG_CLASS(BX_Diplomat_Base)
    {
        _generalMacro = CLASS(BX_Diplomat_Captain_Base);
        displayName = "BXDiplomatCaptainBase";
        uniformClass = CLASS(BX_Uniform_Diplomat_Captain);
        nakedUniform = CLASS(BX_Uniform_Diplomat_Captain);
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Diplomat_Captain_co.paa) };
    };

    NEW_CLASS(BX_Merc_Base): TAG_CLASS(BX_Commando_Captain_Base)
    {
        _generalMacro = CLASS(BX_Merc_Base);
        displayName = "BXMercenaryBase";
        uniformClass = CLASS(BX_Uniform_Merc);
        nakedUniform = CLASS(BX_Uniform_Merc);
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Mercenary_co.paa) };
    };
    NEW_CLASS(BX_Merc_Captain_Base): TAG_CLASS(BX_Merc_Base)
    {
        _generalMacro = CLASS(BX_Merc_Captain_Base);
        displayName = "BXMercenaryCaptainBase";
        uniformClass = CLASS(BX_Uniform_Merc_Captain);
        nakedUniform = CLASS(BX_Uniform_Merc_Captain);
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\bx\BX_Mercenary_Captain_co.paa) };
    };
};