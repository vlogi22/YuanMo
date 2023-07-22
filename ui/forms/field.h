#ifndef __YUANMO_UI_FORMS_FIELD_H__
#define __YUANMO_UI_FORMS_FIELD_H__

#include <string>

namespace ui {

    template<typename T>
    class field {
        
        private:
            std::string _prompt;
        protected:
            T _value;

        protected:
            field(std::string prompt) : 
                _prompt(prompt) {
            }

        public:
            void set_value(T value) { _value = value; }
            T get_value() { return _value; }

            virtual bool parse(std::string) = 0;
    };

}

#endif