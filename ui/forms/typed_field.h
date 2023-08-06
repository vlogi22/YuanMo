#ifndef __YUANMO_UI_FORMS_TYPED_FIELD_H__
#define __YUANMO_UI_FORMS_TYPED_FIELD_H__

#include <string>
#include "field.h"

namespace ui {

    template<typename T>
    class typed_field : public ui::field {
        
    private:
        T _value;

    public:
        typed_field(std::string prompt) : 
            field(prompt, typeid(T)), _value(T()) {
        }

        T get_value() const {
            return _value;
        }

        bool parse(std::string str) override { return false; }
        
    };

}

#endif