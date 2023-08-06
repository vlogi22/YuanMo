#ifndef __YUANMO_CHARACTERS_CHARAVTER_H__
#define __YUANMO_CHARACTERS_CHARAVTER_H__

namespace yuan_mo::characters {

    class character {

        private:
            int _lvl;
            int _health;
            int _attack;
            int _defense;

        public:
            character(int lvl, int hp, int atk, int def) : 
                _lvl(lvl), _health(hp), _attack(atk), _defense(def) {    
            }

            virtual ~character() {}

            int get_lvl() { return _lvl; }
            void increase_lvl(int val) { _lvl += val; }

            int get_health() { return _health; }
            void increase_health(int val) { _health += val; }

            int get_attack() { return _attack; }
            void increase_attack(int val) { _attack += val; }

            int get_defense() { return _defense; }
            void increase_defense(int val) { _defense += val; }

            void increse_base_stats(int hp, int atk, int def) {
                _health += hp;
                _attack += atk;
                _defense += def;
            }

            bool is_dead() { return _health <= 0; }

            virtual void atacked(int atk) = 0;
            
    };

}

#endif