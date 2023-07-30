#ifndef __YUANMO_MONSTERS_ELITE_MONSTER_H__
#define __YUANMO_MONSTERS_ELITE_MONSTER_H__

#include "monster.h"

namespace yuan_mo {

    class elite_monster : public yuan_mo::monster {
        private:
            
        public:
            elite_monster(int hp, int atk, int def) : 
                yuan_mo::monster(hp, atk, def) {
            }

            ~elite_monster() {
            }

            void atacked(int atk) {
                increase_health(-atk + get_defense() + 1);
            }
    };
}

#endif