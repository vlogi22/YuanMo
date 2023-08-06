#ifndef __YUANMO_CHARACTERS_PLAYER_CHARACTER_H__
#define __YUANMO_CHARACTERS_PLAYER_CHARACTER_H__

#include "character.h"

namespace yuan_mo::characters {

    class player_character : public yuan_mo::characters::character {
        
    private:
        int _stats_points;
        
    public:
        player_character(int lvl, int hp, int atk, int def) : 
            yuan_mo::characters::character(lvl, hp, atk, def), _stats_points(lvl*5) {
        }

        player_character(int hp, int atk, int def) : 
            yuan_mo::characters::character(1, hp, atk, def), _stats_points(5) {
        }

        ~player_character() {
        }

        void atacked(int atk) {
            // calculus
        }

    };
    
}

#endif