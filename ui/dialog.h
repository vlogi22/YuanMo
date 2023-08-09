#ifndef __YUANMO_DIALOG_H__
#define __YUANMO_DIALOG_H__

#include "interaction_driver.h"
#include "text/text_interaction.h"

namespace ui {
    
    class menu;
    class form;

    class dialog {
    
    private:
        ui::interaction_driver* _backend;

    public:
        static dialog* UI;

    private:
        dialog() {
            _backend = new ui::text_interaction();
        }

    public:
        void show(ui::menu *menu) {
            _backend->show(menu);
        }

        void choose(ui::menu *menu) {
            _backend->choose(menu);
        }

        void fill(ui::form *form) {
            _backend->fill(form);
        }
        
    };

}

#endif