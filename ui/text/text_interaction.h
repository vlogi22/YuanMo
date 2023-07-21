#ifndef __YUANMO_TEXT_INTERACTION_H__
#define __YUANMO_TEXT_INTERACTION_H__

#include <iostream>
#include "../interaction_driver.h"
#include "../menus/menu.h"

namespace ui {

    class text_interaction : public interaction_driver {

    private:
        /* data */
    public:
        text_interaction(/* args */) {
        }
        
        ~text_interaction() {
        }

        void show(ui::menu *menu);
        void choose(ui::menu *menu);
        void fill();
        void render();
        void close();

    protected:
        std::string read_string();
        int read_integer();
    };
    
}

#endif