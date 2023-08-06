#include "game.h"

yuan_mo::game::~game() {
    delete _map;
    delete _player;
}

void yuan_mo::game::increase_player_health(int val) {
    _player->increase_health(val);
}

void yuan_mo::game::increase_player_attack(int val) {
    _player->increase_attack(val);
}

void yuan_mo::game::increase_player_defense(int val) {
    _player->increase_defense(val);
}