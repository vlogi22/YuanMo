#ifndef __YUANMO_APP_MAP_DO_MOVE_DOWN_H__
#define __YUANMO_APP_MAP_DO_MOVE_DOWN_H__

#include <string>

#include "label.h"
#include "../../ui/menus/command.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::map {

    class do_move_down : public ui::command {

    private:
        yuan_mo::game_manager *_receiver;

    public:
        do_move_down(yuan_mo::game_manager *receiver) :
            ui::command(label::MOVE_DOWN), _receiver(receiver) {
        }

        void execute() override;

    };

}

#endif