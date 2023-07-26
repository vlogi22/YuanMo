#ifndef __YUANMO_UI_MENUS_MESSAGE_H__
#define __YUANMO_UI_MENUS_MESSAGE_H__

#include <vector>
#include <string>
#include <cstdarg>
#include <memory>

#include "command.h"
#include "../interaction_driver.h"

namespace ui {

    class menu {

    private:
        ui::interaction_driver *_driver;
        std::string _title;
        std::vector<ui::command*> _commands;

    public:
        menu(ui::interaction_driver *driver, std::string title, int command_num, ui::command* commands...) : 
            _driver(driver), _title(title) {
            va_list args;
            
            va_start(args, commands);
            for (int i = 0; i < command_num; i++) {
                _commands.push_back(va_arg(args, ui::command*));
            }
            va_end(args);
        }

        std::string get_title() {
            return _title;
        }

        void set_title(std::string title) {
            _title = title;
        }

        ui::command* get_command(int i) {
            return _commands[i];
        }

        std::vector<ui::command*> get_commands() {
            return _commands;
        }

        int get_size() {
            return _commands.size();
        }

        void set_command(std::vector<ui::command*> command) {
            _commands = command;
        }

        void open() {
            _driver->show(this);
            _driver->choose(this);
        }
    };
}

#endif

