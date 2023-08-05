#ifndef __YUANMO_APP_MAIN_MENU_H__
#define __YUANMO_APP_MAIN_MENU_H__

#include <string>
#include "label.h"
#include "do_load_game.h"
#include "../player/stats/menu.h"
#include "../../ui/menus/menu.h"
#include "../../ui/menus/do_open_menu.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::main {

    class menu : public ui::menu {
        private:
            yuan_mo::game_manager* _receiver;

        public:
            menu(yuan_mo::game_manager* receiver) :
                ui::menu(label::TITLE, 1,
                    new ui::do_open_menu(label::START_GAME, new yuan_mo::app::player::stats::menu(receiver))
                ),
                _receiver(receiver) {
            }
    };
}

#endif