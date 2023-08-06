#ifndef __YUANMO_CHARACTERS_MONSTERS_MONSTER_FACTORY_H__
#define __YUANMO_CHARACTERS_MONSTERS_MONSTER_FACTORY_H__

#include "normal_monster.h"
#include "elite_monster.h"

namespace yuan_mo::characters::monsters {

    class monster_factory {
        
    private:

    public:
        static normal_monster *create_normal_monster(int map_lvl) {
            return new normal_monster(map_lvl, 5, 1, 1);
        }
        
        static elite_monster *create_elite_monster(int map_lvl) {
            return new elite_monster(map_lvl, 5, 1, 1);
        }
        
    };

}

#endif