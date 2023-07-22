#ifndef __YUANMO_UI_FORMS_STRING_FIELD_H__
#define __YUANMO_UI_FORMS_STRING_FIELD_H__

#include <string>
#include "field.h"

namespace ui {

    class string_field : public ui::field<std::string> {
        
        public:
            string_field(std::string prompt) : 
                field(prompt) {
            }

            bool parse(std::string str) {
                set_value(str);
            }
    };

}

#endif