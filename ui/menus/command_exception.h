#ifndef __YUANMO_UI_MENUS_COMMAND_EXCEPTION_H__
#define __YUANMO_UI_MENUS_COMMAND_EXCEPTION_H__

#include <exception>
#include <string>

namespace ui {

    class command_exception : public std::exception {
        
    public:
        std::string what() {
            return "Custom C++ Exception";
        }
    };
}

#endif