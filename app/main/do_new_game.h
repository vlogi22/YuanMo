#ifndef __YUANMO_APP_MAIN_DO_NEW_GAME_H__
#define __YUANMO_APP_MAIN_DO_NEW_GAME_H__

#include <string>
#include "../../ui/menus/command.h"
#include "../../yuan_mo/game_manager.h"
#include "label.h"

namespace yuan_mo::app::main {

    class do_new_game : public ui::command {

        private:
            yuan_mo::game_manager *_receiver;

        public:
            do_new_game(yuan_mo::game_manager *receiver) : 
                ui::command(yuan_mo::app::main::START_GAME), _receiver(receiver) {
            }


            void execute() override {
                //do something
            }
    };
}

#endif