#include "menu.h"

#include "message.h"
#include "../../../yuan_mo/game_manager.h"

std::string yuan_mo::app::player::stats::menu::get_description() {
    std::string str = "";
    
    str += message::player_stat("attack", _receiver->get_player()->get_attack() + _attack_points) + '\n';
    str += message::player_stat("defense", _receiver->get_player()->get_defense() + _defense_points) + '\n';
    str += message::player_stat("health", _receiver->get_player()->get_health() + _health_points);

    return str;
}