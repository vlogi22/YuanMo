#include "do_new_game.h"

#include "../player/stats/menu.h"
#include "../../ui/menus/menu.h"

void yuan_mo::app::main::do_new_game::execute() {
    ui::menu* menu = new yuan_mo::app::player::stats::menu(_receiver);

    menu->open();
}
