#include "script_component.hpp"

class CfgPatches
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[]=
        {
            CLASS(BX_Commando_Captain_Base),
            CLASS(BX_Diplomat_Base),
            CLASS(BX_Diplomat_Captain_Base),
            CLASS(BX_Merc_Base),
            CLASS(BX_Merc_Captain_Base)
        };
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		author = "Anorexican";
		authors[] = {"Anorexican"};
		url = CSTRING(URL);
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"