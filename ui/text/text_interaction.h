#ifndef __YUANMO_TEXT_INTERACTION_H__
#define __YUANMO_TEXT_INTERACTION_H__

#include "../interaction_driver.h"
#include "../menus/menu.h"
#include "../forms/form.h"

namespace ui {

    class text_interaction : public interaction_driver {

    private:
        /* data */
    public:
        text_interaction(/* args */) {
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