#ifndef __YUANMO_GAME_MANAGER_H__
#define __YUANMO_GAME_MANAGER_H__

#include "game.h"

namespace yuan_mo {

    class game_manager {

    private:
        yuan_mo::game *_game;

    public:
        game_manager::game_manager() {
            _game = new yuan_mo::game();
        }

        game_manager::game_manager(yuan_mo::game *game) : 
            _game(game) {
        }
        
        game_manager::~game_manager() { }

        void new_game() { _game  = new yuan_mo::game(); }
    };

}

#endif


