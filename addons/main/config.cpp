#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"cba_main"};
		authors[] = {"Stim_1087", "Anorexican"};
		author = "87th Legion";
		url = "http://xkcd.com";
    };
};

class CfgMods {
    class PREFIX {
        name = "87th Legion Aux Mod";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Discord";
        action = CSTRING(URL);
        description = "Join the Discord!: https://discord.com/invite/Sn368hmD";
    };
};