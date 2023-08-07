#ifndef __YUANMO_APP_PLAYER_STATS_DO_ADD_ATTACK_H__
#define __YUANMO_APP_PLAYER_STATS_DO_ADD_ATTACK_H__

#include <string>

#include "label.h"
#include "../../../ui/menus/command.h"

namespace yuan_mo::app::player::stats {

    class menu;

    class do_add_attack : public ui::command {

    private:
        menu *_receiver;

    public:
        do_add_attack(menu *receiver) :
            ui::command(label::ADD_ATK), _receiver(receiver) {
        }

        void execute() override;

    };

}

#endif