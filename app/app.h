#ifndef __YUANMO_APP_APP_H__
#define __YUANMO_APP_APP_H__

#include <iostream>

namespace yuan_mo::app {

    class menu {

    public:
        void show_menu();

        void start_game();
        void load_game();
        void game_settings();
        void exit_game();


        void show_menu() {
            int option;

            std::cout << "----YUAN MO----" << std::endl;
            std::cout << "1- Start Game" << std::endl;
            std::cout << "2- Load Game" << std::endl;
            std::cout << "3- Game Settings" << std::endl;
            std::cout << "0- Exit Game" << std::endl;

            std::cin >> option;

            switch (option) {
                case 1:
                    start_game();
                    break;
                case 2:
                    load_game();
                    break;
                case 3:
                    game_settings();
                    break;
                case 0:
                    exit_game();
                    break;
                default:
                    std::cout << "Invalid option" << std::endl;
                    break;
            }
        }
    };

}

#endif