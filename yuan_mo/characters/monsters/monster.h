#ifndef __YUANMO_CHARACTERS_MONSTERS_MONSTER_H__
#define __YUANMO_CHARACTERS_MONSTERS_MONSTER_H__

#include "../character.h"

namespace yuan_mo::characters::monsters {

    class monster : public yuan_mo::characters::character {
        
    private:

    public:
        monster(int lvl, int hp, int atk, int def) :
            yuan_mo::characters::character(lvl, hp, atk, def) {
        }

        monster(int hp, int atk, int def) :
            yuan_mo::characters::character(1, hp, atk, def) {
        }
        
    };

}

#endif