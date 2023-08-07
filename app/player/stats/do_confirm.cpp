#include "do_confirm.h"

#include "menu.h"

void yuan_mo::app::player::stats::do_confirm::execute() {
    _receiver->increase_player_health(_menu->get_health_points());
    _receiver->increase_player_attack(_menu->get_attack_points());
    _receiver->increase_player_defense(_menu->get_defense_points());
}