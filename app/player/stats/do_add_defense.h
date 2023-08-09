#ifndef __YUANMO_APP_PLAYER_STATS_DO_ADD_DEFENSE_H__
#define __YUANMO_APP_PLAYER_STATS_DO_ADD_DEFENSE_H__

#include <string>

#include "label.h"
#include "prompt.h"
#include "../../../ui/menus/command.h"

namespace yuan_mo::app::player::stats {

    class menu;
    
    class do_add_defense : public ui::command {

    private:
        menu *_receiver;

    public:
        do_add_defense(menu *receiver) :
            ui::command(label::ADD_DEF), _receiver(receiver) {
                add_integer_field("def", yuan_mo::app::player::stats::prompt::ADD_DEF);
        }

        void execute() override;

    };

}

#endif