#ifndef __YUANMO_APP_MAIN_MENU_H__
#define __YUANMO_APP_MAIN_MENU_H__

#include <string>
#include "label.h"
#include "do_new_game.h"
#include "../../ui/menus/menu.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::main {

    class menu : public ui::menu {
        private:
            yuan_mo::game_manager* _receiver;

        public:
            menu(yuan_mo::game_manager* receiver) :
                ui::menu(yuan_mo::app::main::TITLE, 1, 
                    new yuan_mo::app::main::do_new_game(_receiver)), 
                _receiver(receiver) {
            }
    };
}

#endif