#ifndef __YUANMO_APP_PLAYER_STATS_MENU_H__
#define __YUANMO_APP_PLAYER_STATS_MENU_H__

#include <string>

#include "label.h"
#include "do_add_attack.h"
#include "do_add_defense.h"
#include "do_add_health.h"
#include "do_restart.h"
#include "do_confirm.h"
#include "../../../ui/menus/menu.h"
#include "../../../yuan_mo/game_manager.h"

namespace yuan_mo::app::player::stats {

    class menu : public ui::menu {

    private:
        yuan_mo::game_manager* _receiver;
        int _health_points;
        int _attack_points;
        int _defense_points;

    public:
        menu(yuan_mo::game_manager* receiver) :
            ui::menu(label::TITLE, 5,
                new do_add_attack(this),
                new do_add_defense(this),
                new do_add_health(this),
                new do_restart(this),
                new do_confirm(receiver, this)
            ),
            _receiver(receiver), _health_points(0), _attack_points(0), _defense_points(0) {
        }

        int get_health_points() { return _health_points; }
        void set_health_points(int val) { _health_points = val; }
        void increase_health_points(int val) { _health_points += val; }

        int get_attack_points() { return _attack_points; }
        void set_attack_points(int val) { _attack_points = val; }
        void increase_attack_points(int val) { _attack_points += val; }

        int get_defense_points() { return _defense_points; }
        void set_defense_points(int val) { _defense_points = val; }
        void increase_defense_points(int val) { _defense_points += val; }
        
    };

}

#endif