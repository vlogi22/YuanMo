#ifndef __YUANMO_APP_PLAYER_STATS_DO_ADD_HEALTH_H__
#define __YUANMO_APP_PLAYER_STATS_DO_ADD_HEALTH_H__

#include <string>

#include "label.h"
#include "../../../ui/menus/command.h"
#include "../../../yuan_mo/game_manager.h"

namespace yuan_mo::app::player::stats {

    class do_add_health : public ui::command {

    private:
        yuan_mo::game_manager *_receiver;

    public:
        do_add_health(yuan_mo::game_manager *receiver) :
            ui::command(label::ADD_HP), _receiver(receiver) {
        }

        void execute() override {
            //do something
        }

        
    };
    
}

#endif