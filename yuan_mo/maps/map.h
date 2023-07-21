#ifndef __YUANMO_MAPS_MAP_H__
#define __YUANMO_MAPS_MAP_H__

#include <vector>
#include <memory>
#include "room.h"

namespace yuan_mo {
    
    class map {

    private:
        int _lvl;
        std::vector<yuan_mo::room*> _rooms;

    public:
        map(int lvl) : 
            _lvl(lvl) {
        }

        map(int lvl, std::vector<yuan_mo::room*> rooms) : 
            _lvl(lvl), _rooms(rooms) {
        }

        ~map();

        void add_room(yuan_mo::room* room) {
            _rooms.push_back(room);
        }
    };
    
}


#endif