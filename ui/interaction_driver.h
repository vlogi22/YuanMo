#ifndef __YUANMO_INTERACTION_DRIVER_H__
#define __YUANMO_INTERACTION_DRIVER_H__

namespace ui {

    class menu;

    class interaction_driver {

    public:
        virtual void show(ui::menu *menu) = 0;
        virtual void choose(ui::menu *menu) = 0;
        virtual void fill() = 0;
    };
    
}

#endif