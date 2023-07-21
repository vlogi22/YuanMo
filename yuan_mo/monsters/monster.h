#ifndef __YUANMO_MONSTERS_MONSTER_H__
#define __YUANMO_MONSTERS_MONSTER_H__

namespace yuan_mo {

    class monster {
        private:
            int _health;
            int _atack;
            int _defense;

        public:
            monster(int hp, int atk, int def) : 
                _health(hp), _atack(atk), _defense(def) {    
            }

            virtual ~monster();

            int get_health() { return _health; }
            void increase_health(int val) { _health -= val; }

            int get_atack() { return _atack; }
            int get_defense() { return _defense; }

            bool is_dead() { return _health <= 0; }

            virtual void atacked(int atk) = 0;

    };
}

#endif