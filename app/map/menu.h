#ifndef __YUANMO_APP_MAP_MENU_H__
#define __YUANMO_APP_MAP_MENU_H__

#include <string>

#include "label.h"
#include "do_move_left.h"
#include "do_move_right.h"
#include "do_move_down.h"
#include "do_move_up.h"
#include "../../ui/menus/menu.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::map {

    class menu : public ui::menu {

    private:
        yuan_mo::game_manager* _receiver;

    public:
        menu(yuan_mo::game_manager* receiver) :
            ui::menu(label::TITLE, 4,
                new do_move_left(receiver),
                new do_move_right(receiver),
                new do_move_up(receiver),
                new do_move_down(receiver)
            ),
            _receiver(receiver) {
        }
        
    };

}

#endif