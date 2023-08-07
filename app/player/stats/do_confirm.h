#ifndef __YUANMO_APP_PLAYER_STATS_DO_COMFIRM_H__
#define __YUANMO_APP_PLAYER_STATS_DO_COMFIRM_H__

#include <string>

#include "label.h"
#include "../../../ui/menus/command.h"
#include "../../../yuan_mo/game_manager.h"

namespace yuan_mo::app::player::stats {

    class menu;

    class do_confirm : public ui::command {

    private:
        yuan_mo::game_manager *_receiver;
        menu *_menu;

    public:
        do_confirm(yuan_mo::game_manager *receiver, menu *menu) :
            ui::command(label::CONFIRM), _receiver(receiver), _menu(menu) {
        }

        void execute() override;

    };

}

#endif