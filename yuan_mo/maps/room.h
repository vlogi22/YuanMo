#ifndef __YUANMO_MAPS_ROOM_H__
#define __YUANMO_MAPS_ROOM_H__

#include <vector>
#include <memory>

#include "../characters/monsters/monster_factory.h"
#include "../characters/monsters/monster.h"

namespace yuan_mo {
    
    class room {

    private:
        int _lvl;
        yuan_mo::characters::monsters::monster* _mob;

    public:
        room(int lvl, bool has_monster = false) : _lvl(lvl) {
            if (has_monster)
                _mob = yuan_mo::characters::monsters::monster_factory::create_normal_monster(lvl);
        }

        room(int lvl, yuan_mo::characters::monsters::monster* mob) : _lvl(lvl), _mob(mob) {
            room(lvl, false);
        }

        ~room() {}
    };
    
}


#endif