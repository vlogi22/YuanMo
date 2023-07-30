#ifndef __YUANMO_APP_H__
#define __YUANMO_APP_H__

#include "../yuan_mo/game_manager.h"
#include "main/menu.h"
#include <iostream>

namespace yuan_mo::app {

    class app {

        public:

        static int main() {
            yuan_mo::game_manager* game = new game_manager();
            yuan_mo::app::main::menu* menu = new yuan_mo::app::main::menu(game);
            menu->open();

            return 0;
        }
    };

}

#endif