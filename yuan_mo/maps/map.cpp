#include "map.h"

yuan_mo::map::~map() {
    size_t size = _rooms.size();

    for (size_t i; i < size; i++) {
        delete _rooms[i];
    }
}