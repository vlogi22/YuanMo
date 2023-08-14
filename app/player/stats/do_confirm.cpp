#include "do_confirm.h"

#include "menu.h"
#include "../../../ui/menus/menu.h"
#include "../../map/menu.h"

void yuan_mo::app::player::stats::do_confirm::execute() {
    ui::menu* map_menu = new yuan_mo::app::map::menu(_receiver);

    _receiver->increase_player_health(_menu->get_health_points());
    _receiver->increase_player_attack(_menu->get_attack_points());
    _receiver->increase_player_defense(_menu->get_defense_points());
    
    _menu->set_attack_points(0);
    _menu->set_defense_points(0);
    _menu->set_health_points(0);

    map_menu->open();
}