#ifndef __YUANMO_UI_MENUS_DO_OPEN_MENU_H__
#define __YUANMO_UI_MENUS_DO_OPEN_MENU_H__

#include <iostream>
#include <string>
#include "command.h"
#include "menu.h"

namespace ui {
    
    class do_open_menu : public ui::command {
    
    private:
        ui::menu *_receiver;

    public: 
        do_open_menu(std::string title, ui::menu *receiver) : 
            ui::command(title), _receiver(receiver) {
        }

        void execute() override {
            _receiver->open();
        }
        
    };

}

#endif