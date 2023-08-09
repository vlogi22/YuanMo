#ifndef __YUANMO_UI_FORMS_FORM_H__
#define __YUANMO_UI_FORMS_FORM_H__

#include <string>
#include <unordered_map>
#include <vector>

#include "field.h"
#include "typed_field.h"
#include "../dialog.h"

namespace ui {

    class form {
        
    private:
        ui::dialog *_ui;
        std::string _title;
        std::unordered_map<std::string, ui::field*> _fields;

    public:
        form(ui::dialog *ui, std::string title) : 
            _ui(ui), _title(title) {
        }

        form(std::string title) : 
            form(ui::dialog::UI, title) {
        }

        std::string get_title() {
            return _title;
        }

        ui::field *get_field(std::string prompt) {
            return _fields[prompt];
        }

        std::vector<ui::field*> get_fields() {
            std::vector<ui::field*> vec;
            for (auto pair : _fields)
                vec.push_back(pair.second);
            
            return vec;
        }

        void add_field(std::string key, ui::field *field) {
            if (_fields.find(key) != _fields.end()) {
                // throw exception
            }
            _fields[key] = field;
        }

        void add_integer_field(std::string key, std::string label) {
            add_field(key, new ui::typed_field<int>(label));
        }

        void add_string_field(std::string key, std::string label) {
            add_field(key, new ui::typed_field<std::string>(label));
        }

        int get_int(std::string key) {
            return dynamic_cast<typed_field<int>*>(_fields[key])->get_value();
        }

        std::string get_string(std::string key) {
            return dynamic_cast<typed_field<std::string>*>(_fields[key])->get_value();
        }

        void parse();

    };

}

#endif
