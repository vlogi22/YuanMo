#ifndef __YUANMO_UI_MENUS_COMMAND_H__
#define __YUANMO_UI_MENUS_COMMAND_H__

#include <string>
#include <memory>

namespace ui {
    
    class command {
        
    private:
        std::string _title;

    protected: 
        command(std::string title) : _title(title) { }

    public:
        std::string get_title() {
            return _title;
        }

        void perform_command() {
            
            execute();
        }

        virtual void execute() = 0;

    };
}

#endif