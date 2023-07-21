#ifndef __YUANMO_MAPS_MAP_FACTORY_H__
#define __YUANMO_MAPS_MAP_FACTORY_H__

#include "map.h"
#include "room.h"

namespace yuan_mo {
    
    class map_factory {
    
    public:
        static yuan_mo::map *create_map(int lvl) {
            return new yuan_mo::map(lvl);
        }
    };
    
}

#endif