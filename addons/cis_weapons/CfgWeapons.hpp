class CfgWeapons
{
    class SWLW_Z7;
    class WBK_lightsaber_sith;
    class WBK_Dutch_Vibro: WBK_lightsaber_sith
    {
        class WeaponSlotsInfo;
    };

    NEW_CLASS(Z7): SWLW_Z7
    {
        scope = 1;
        author = "Anorexican";
        displayName = TAG_NAME(Z-7 Rotary Blaster Cannon);
        magazines[] = { CLASS(Z7_Mag) };
        aIBurstTerminable = 0;
        aiRateOfFire = 0.001;
        aiRateOfFireDispersion = 0;
        aiRateOfFireDistance = 500;
        autoFire = 1;
    };
    NEW_CLASS(Vibroblade): WBK_Dutch_Vibro
    {
        scope = 1;
        author = "Anorexican";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            holsterOffset = "";
            holsterScale = 0;
        };
    };
};