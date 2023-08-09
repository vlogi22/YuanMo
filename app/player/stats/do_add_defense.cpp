#include "do_add_defense.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_defense::execute() {
    int def = get_integer_field("def");

    _receiver->increase_defense_points(def);
}