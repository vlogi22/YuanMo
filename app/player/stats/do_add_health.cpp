#include "do_add_health.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_add_health::execute() {
    _receiver->increase_health_points(1);
}