#include "do_add_health.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_health::execute() {
    int hp = get_integer_field("hp");

    _receiver->increase_health_points(hp);
}