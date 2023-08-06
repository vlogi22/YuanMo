#ifndef __YUANMO_CHARACTERS_MONSTERS_NORMAL_MONSTER_H__
#define __YUANMO_CHARACTERS_MONSTERS_NORMAL_MONSTER_H__

#include "monster.h"

namespace yuan_mo::characters::monsters {

    class normal_monster : public yuan_mo::characters::monsters::monster {
        
    private:

    public:
        normal_monster(int lvl, int hp, int atk, int def) : 
            yuan_mo::characters::monsters::monster(lvl, hp, atk, def) {
        }

        normal_monster(int hp, int atk, int def) : 
            yuan_mo::characters::monsters::monster(1, hp, atk, def) {
        }

        ~normal_monster() {}

        void atacked(int atk) {
            // calculus
        }

    };

}

#endif