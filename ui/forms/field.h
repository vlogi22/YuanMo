#ifndef __YUANMO_UI_FORMS_FIELD_H__
#define __YUANMO_UI_FORMS_FIELD_H__

#include <string>
#include <typeinfo>

namespace ui {

    class field {
        
        protected:
            std::string _prompt;
            std::string _in;
            const std::type_info& _data_type;

        protected:
            field(std::string prompt, const std::type_info& data_type) : 
                _prompt(prompt), _data_type(data_type) {
            }

        public:
            void set_prompt(std::string prompt) { _prompt = prompt; }
            std::string get_prompt() const{ return _prompt; }

            void set_in(std::string in) { _in = in; }
            std::string get_in() const { return _in; }
            
            const std::type_info& get_data_type() const { return _data_type; }
            
            virtual bool parse(std::string str) = 0;
    };

}

#endif