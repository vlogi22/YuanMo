#ifndef __YUANMO_APP_MAP_DO_MOVE_RIGHT_H__
#define __YUANMO_APP_MAP_DO_MOVE_RIGHT_H__

#include <string>

#include "label.h"
#include "../../ui/menus/command.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::map {

    class do_move_right : public ui::command {

    private:
        yuan_mo::game_manager *_receiver;

    public:
        do_move_right(yuan_mo::game_manager *receiver) :
            ui::command(label::MOVE_RIGHT), _receiver(receiver) {
        }

        void execute() override;

    };

}

#endif