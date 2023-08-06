#ifndef __YUANMO_UI_MENUS_MESSAGE_H__
#define __YUANMO_UI_MENUS_MESSAGE_H__

#include <string>

namespace ui {

    static std::string operationFailed(std::string error) {
        return "Operação inválida: " + error;
    }
    
}

#endif