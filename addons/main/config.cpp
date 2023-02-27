#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		author = CSTRING(AuxTeam);
		authors[] = {"Anorexican"};
		url = ECSTRING(main,URL);
    };
};
class CfgMods 
{
    class PREFIX 
    {
        name = "87th Legion Armory";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Discord";
        action = CSTRING(URL);
        description = "Join the Discord!: https://discord.com/invite/Sn368hmD";
    };
};