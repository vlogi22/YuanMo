#ifndef __YUANMO_UI_MENUS_COMMAND_H__
#define __YUANMO_UI_MENUS_COMMAND_H__

#include <string>
#include <memory>

#include "../forms/form.h"
#include "../display.h"

namespace ui {
    
    class command {
        
    private:
        std::string _title;
        ui::form *_form;
        ui::display *_display;

    protected: 
        command(std::string title) :
            _title(title), _form(new ui::form(title)), _display(new ui::display()) {
        }

    public:
        std::string get_title() {
            return _title;
        }

        void perform_command() {
            _display->clear();
            _form->parse();
            execute();
        }

        virtual void execute() = 0;

        void add_integer_field(std::string key, std::string prompt);
        void add_string_field(std::string key, std::string prompt);

        int get_integer_field(std::string key);
        std::string get_string_field(std::string key);
    };
    
}

#endif