#ifndef __YUANMO_APP_PLAYER_STATS_DO_ADD_HEALTH_H__
#define __YUANMO_APP_PLAYER_STATS_DO_ADD_HEALTH_H__

#include <string>

#include "label.h"
#include "prompt.h"
#include "../../../ui/menus/command.h"

namespace yuan_mo::app::player::stats {

    class menu;

    class do_add_health : public ui::command {

    private:
        menu *_receiver;

    public:
        do_add_health(menu *receiver) :
            ui::command(label::ADD_HP), _receiver(receiver) {
                add_integer_field("hp", yuan_mo::app::player::stats::prompt::ADD_HP);
        }

        void execute() override;

    };
    
}

#endif