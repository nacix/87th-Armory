#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

GVAR(damageMultiplierB1) = 0.07;
GVAR(damageMultiplierB2) = 0.006;
GVAR(damageMultiplierBX) = 0.007;