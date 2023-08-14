#ifndef __YUANMO_GAME_MANAGER_H__
#define __YUANMO_GAME_MANAGER_H__

#include "game.h"
#include "characters/character.h"

namespace yuan_mo {

    class game_manager {

    private:
        yuan_mo::game *_game;

    public:
        game_manager() {
            _game = new yuan_mo::game();
        }

        game_manager(yuan_mo::game *game) : 
            _game(game) {
        }

        void new_game() { _game  = new yuan_mo::game(); }
        
        yuan_mo::characters::character* get_player();
        void increase_player_health(int val);
        void increase_player_attack(int val);
        void increase_player_defense(int val);

    };

}

#endif


