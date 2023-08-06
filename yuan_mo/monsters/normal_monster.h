#ifndef __YUANMO_MONSTERS_NORMAL_MONSTER_H__
#define __YUANMO_MONSTERS_NORMAL_MONSTER_H__

#include "monster.h"

namespace yuan_mo {

    class normal_monster : public yuan_mo::monster {
        
    private:

    public:
        normal_monster(int hp, int atk, int def) : 
            yuan_mo::monster(hp, atk, def) {
        }

        ~normal_monster() {}

        void atacked(int atk) {
            increase_health(-atk + get_defense());
        }

    };

}

#endif