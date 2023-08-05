#ifndef __YUANMO_APP_MAIN_DO_LOAD_GAME_H__
#define __YUANMO_APP_MAIN_DO_LOAD_GAME_H__

#include <string>
#include "label.h"
#include "../../ui/menus/command.h"
#include "../../yuan_mo/game_manager.h"

namespace yuan_mo::app::main {

    class do_load_game : public ui::command {

        private:
            yuan_mo::game_manager *_receiver;

        public:
            do_load_game(yuan_mo::game_manager *receiver) :
                ui::command(label::LOAD_GAME), _receiver(receiver) {
            }

            void execute() override {
                //do something
            }
        };
}

#endif