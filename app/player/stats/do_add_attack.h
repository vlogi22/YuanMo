#ifndef __YUANMO_APP_PLAYER_STATS_DO_ADD_ATTACK_H__
#define __YUANMO_APP_PLAYER_STATS_DO_ADD_ATTACK_H__

#include <string>

#include "label.h"
#include "prompt.h"
#include "../../../ui/menus/command.h"

namespace yuan_mo::app::player::stats {

    class menu;

    class do_add_attack : public ui::command {

    private:
        menu *_receiver;

    public:
        do_add_attack(menu *receiver) :
            ui::command(label::ADD_ATK), _receiver(receiver) {
                add_integer_field("atk", yuan_mo::app::player::stats::prompt::ADD_ATK);
        }

        void execute() override;

    };

}

#endif