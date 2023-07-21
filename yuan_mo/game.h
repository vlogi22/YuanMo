#ifndef __YUANMO_GAME_H__
#define __YUANMO_GAME_H__

#include "maps/map.h"
#include "maps/map_factory.h"
#include "monsters/monster.h"
#include "monsters/monster_factory.h"

namespace yuan_mo {

    class game {

    private:
        int _lvl;
        yuan_mo::map* _map;
        yuan_mo::monster* _main_character;

    public:
        game(int lvl = 1) : _lvl(lvl) {
            _map = yuan_mo::map_factory::create_map(lvl);
            _main_character = yuan_mo::monster_factory::create_elite_monster(lvl);
        }
        
        ~game();

        yuan_mo::map* get_map() {
            return _map;
        }

        yuan_mo::monster* get_character() {
            return _main_character;
        }
    };
    
}

#endif