#include "do_add_attack.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_attack::execute() {
    _receiver->increase_attack_points(1);
}