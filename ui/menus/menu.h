#ifndef __YUANMO_UI_MENUS_MESSAGE_H__
#define __YUANMO_UI_MENUS_MESSAGE_H__

#include <vector>
#include <cstdarg>
#include <memory>

#include "command.h"

namespace ui {

    class interaction_driver;

    class menu {

    private:
        ui::interaction_driver *_driver;
        std::string _title;
        std::vector<std::shared_ptr<ui::command<void*>>> _commands;

    public:
        menu(ui::interaction_driver *driver, std::string title, int command_num, std::shared_ptr<ui::command<void*>> commands...) : 
            _driver(driver), _title(title) {
            va_list args;
            
            va_start(args, commands);
            for (int i = 0; i < command_num; i++) {
                _commands.push_back(va_arg(args, std::shared_ptr<ui::command<void*>>));
            }
            va_end(args);
        }

        std::string get_title() {
            return _title;
        }

        void set_title(std::string title) {
            _title = title;
        }

        std::shared_ptr<ui::command<void*>> get_command(int i) {
            return _commands[i];
        }

        std::vector<std::shared_ptr<ui::command<void*>>> get_commands() {
            return _commands;
        }

        int get_size() {
            return _commands.size();
        }

        void set_command(std::vector<std::shared_ptr<ui::command<void*>>> command) {
            _commands = command;
        }

        void open() {

        }
    };
}

#endif

