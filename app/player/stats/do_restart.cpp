#include "do_restart.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_restart::execute() {
    _receiver->set_health_points(0);
    _receiver->set_attack_points(0);
    _receiver->set_defense_points(0);
}