#ifndef __YUANMO_INTERACTION_DRIVER_H__
#define __YUANMO_INTERACTION_DRIVER_H__

namespace ui {

    class menu;
    class form;
    
    class interaction_driver {

    public:
        virtual ~interaction_driver() {}
        virtual void show(ui::menu *menu) = 0;
        virtual void choose(ui::menu *menu) = 0;
        virtual void fill(ui::form *form) = 0;
        
    };
    
}

#endif