#ifndef __YUANMO_INTERACTION_DRIVER_H__
#define __YUANMO_INTERACTION_DRIVER_H__

#include "menus/menu.h"

namespace ui {

    class interaction_driver {

    public:
        virtual void show(ui::menu menu);
        virtual void choose(ui::menu menu);
        virtual void fill();
        virtual void render();
        virtual void close();
    };
    
}

#endif