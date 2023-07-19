#ifndef __YUANMO_UI_MENUS_DO_OPEN_MENU_H__
#define __YUANMO_UI_MENUS_DO_OPEN_MENU_H__

#include <iostream>
#include <string>
#include "command.h"
#include "menu.h"

namespace ui {
    
    class do_open_menu : public ui::command<std::shared_ptr<ui::menu>> {

    public: 
        do_open_menu(std::shared_ptr<ui::menu> receiver, std::string title) : 
            ui::command<std::shared_ptr<ui::menu>>(receiver, title) {}

        int execute() override {
            //do something
            return 0;        }
    };
}

#endif