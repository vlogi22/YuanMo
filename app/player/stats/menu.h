#ifndef __YUANMO_APP_PLAYER_STATS_MENU_H__
#define __YUANMO_APP_PLAYER_STATS_MENU_H__

#include <string>
#include "label.h"
#include "do_add_attack.h"
#include "do_add_defense.h"
#include "do_add_health.h"
#include "../../../ui/menus/menu.h"
#include "../../../yuan_mo/game_manager.h"

namespace yuan_mo::app::player::stats {

    class menu : public ui::menu {
        private:
            yuan_mo::game_manager* _receiver;

        public:
            menu(yuan_mo::game_manager* receiver) :
                ui::menu(label::TITLE, 3,
                    new do_add_attack(receiver),
                    new do_add_defense(receiver),
                    new do_add_health(receiver)
                ),
                _receiver(receiver) {
            }
    };
}

#endif