#ifndef __YUANMO_UI_FORMS_INTEGER_FIELD_H__
#define __YUANMO_UI_FORMS_INTEGER_FIELD_H__

#include <string>
#include "field.h"

namespace ui {

    class integer_field : public ui::field<int> {
        
        public:
            integer_field(std::string prompt) : 
                field(prompt) {
            }

            bool parse(std::string str) {
                set_value(std::stoi(str, NULL, 10));
            }
    };

}

#endif