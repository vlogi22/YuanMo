#include "game_manager.h"

void yuan_mo::game_manager::increase_player_health(int val) { 
    _game->increase_player_health(val);
}

void yuan_mo::game_manager::increase_player_attack(int val) { 
    _game->increase_player_attack(val);
}

void yuan_mo::game_manager::increase_player_defense(int val) { 
    _game->increase_player_defense(val);
}