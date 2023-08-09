#include "do_add_attack.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_attack::execute() {
    int atk = get_integer_field("atk");

    _receiver->increase_attack_points(atk);
}