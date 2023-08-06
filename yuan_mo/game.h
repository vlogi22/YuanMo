#ifndef __YUANMO_GAME_H__
#define __YUANMO_GAME_H__

#include "maps/map.h"
#include "maps/map_factory.h"
#include "characters/character.h"
#include "characters/player_character.h"

namespace yuan_mo {

    class game {

    private:
        int _lvl;
        yuan_mo::map* _map;
        yuan_mo::characters::character* _player;

    public:
        game(int lvl = 1) : _lvl(lvl) {
            _map = yuan_mo::map_factory::create_map(lvl);
            _player = new yuan_mo::characters::player_character(1, 10, 1, 1);
        }
        
        ~game();

        yuan_mo::map* get_map() {
            return _map;
        }

        yuan_mo::characters::character* get_character() {
            return _player;
        }

        void increase_player_health(int val);
        void increase_player_attack(int val);
        void increase_player_defense(int val);
        
    };
    
}

#endif