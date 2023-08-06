#ifndef __YUANMO_CHARACTERS_MONSTERS_ELITE_MONSTER_H__
#define __YUANMO_CHARACTERS_MONSTERS_ELITE_MONSTER_H__

#include "monster.h"

namespace yuan_mo::characters::monsters {

    class elite_monster : public yuan_mo::characters::monsters::monster {
        
    private:
        
    public:
        elite_monster(int lvl, int hp, int atk, int def) : 
            yuan_mo::characters::monsters::monster(lvl, hp, atk, def) {
        }

        elite_monster(int hp, int atk, int def) : 
            yuan_mo::characters::monsters::monster(1, hp, atk, def) {
        }

        ~elite_monster() {
        }

        void atacked(int atk) {
            // calculus
        }

    };
    
}

#endif