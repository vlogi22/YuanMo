#ifndef __YUANMO_TEXT_INTERACTION_H__
#define __YUANMO_TEXT_INTERACTION_H__

#include <string>

#include "../interaction_driver.h"

namespace ui {

    class menu;
    class form;
    
    class text_interaction : public interaction_driver {
        
    public:
        text_interaction() : 
            interaction_driver() {
        }

        ~text_interaction() {
        }

        void show(ui::menu *menu) override;
        void choose(ui::menu *menu) override;
        void fill(ui::form *form) override;

    protected:
        std::string read_string(std::string prompt);
        int read_integer(std::string prompt);
        
    };
    
}

#endif