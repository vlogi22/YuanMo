#ifndef __YUANMO_APP_PLAYER_STATS_DO_RESTART_H__
#define __YUANMO_APP_PLAYER_STATS_DO_RESTART_H__

#include <string>

#include "label.h"
#include "../../../ui/menus/command.h"

namespace yuan_mo::app::player::stats {

    class menu;

    class do_restart : public ui::command {

    private:
        menu *_receiver;

    public:
        do_restart(menu *receiver) :
            ui::command(label::RESTART), _receiver(receiver){
        }

        void execute() override;

    };

}

#endif