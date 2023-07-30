#ifndef __YUANMO_UI_MENUS_MENU_H__
#define __YUANMO_UI_MENUS_MENU_H__

#include <iostream>
#include <vector>
#include <string>
#include <cstdarg>
#include <memory>

#include "command.h"
#include "../dialog.h"

namespace ui {
    
    class menu {

    private:
        ui::dialog *_ui;
        std::string _title;
        std::vector<ui::command*> _commands;

    public:
        menu(ui::dialog *ui, std::string title, int command_num, ui::command* commands...) : 
            _ui(ui), _title(title) {
            va_list args;
            
            va_start(args, commands);
            for (int i = 0; i < command_num; i++) {
                _commands.push_back(va_arg(args, ui::command*));
            }
            va_end(args);
        }

        menu(std::string title, int command_num, ui::command* commands...) : 
            menu(ui::dialog::UI, title, command_num, commands) {
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
            _ui->show(this);
            _ui->choose(this);
        }
    };
}

#endif

