#include "script_component.hpp"

/*
 * Author: Anorexican
 *
 * Selects a clone voice and random clone face then assigns it to the provided unit
 *
 * Arguments:
 * 0: The unit <OBJECT>
 * 1: Face selection preset <STRING>
 * 2: Multiple input types <STRING|ARRAY|CODE>
 * 3: Optional input <BOOL> (default: true)
 * 4: Optional input with multiple types <CODE|STRING> (default: {true})
 * 5: Not mandatory input <STRING> (default: nil)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "NCO"] call 87thLegion
 *
 * Public: [Yes/No]
 */

systemChat str ["Hello world!", QUOTE(ADDON)];