#ifndef __YUANMO_MONSTERS_MONSTER_FACTORY_H__
#define __YUANMO_MONSTERS_MONSTER_FACTORY_H__

#include "monster.h"
#include "normal_monster.h"
#include "elite_monster.h"

namespace yuan_mo {

    class monster_factory {
        private:

        public:
            static yuan_mo::normal_monster *create_normal_monster(int map_lvl) {
                return new yuan_mo::normal_monster(map_lvl, 1, 1);
            }
            
            static yuan_mo::elite_monster *create_elite_monster(int map_lvl) {
                return new yuan_mo::elite_monster(map_lvl, 1, 1);
            }

    };
}

#endif