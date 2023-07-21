#ifndef __YUANMO_INTERACTION_DRIVER_H__
#define __YUANMO_INTERACTION_DRIVER_H__

#include "menus/menu.h"

namespace ui {

    class interaction_driver {

    public:
        virtual void show(ui::menu *menu) = 0;
        virtual void choose(ui::menu *menu) = 0;
        virtual void fill() = 0;
        virtual void render() = 0;
        virtual void close() = 0;
    };
    
}

#endif