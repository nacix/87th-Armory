#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[]=
        {
            CLASS(Z7)
        };
        magazines[]=
        {
            CLASS(Z7_Mag)
        };
        ammo[]=
        {
            CLASS(ammo_Z7)
        };
        requiredAddons[] = {"cba_main"};
		author = "Anorexican";
		authors[] = {"Anorexican"};
		url = CSTRING(URL);
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"