#include "game.h"

yuan_mo::game::~game() {
    delete _map;
    delete _main_character;
}