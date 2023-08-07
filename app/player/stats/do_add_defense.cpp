#include "do_add_defense.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_defense::execute() {
    _receiver->increase_defense_points(1);
}