#ifndef __YUANMO_UI_FORMS_FORM_H__
#define __YUANMO_UI_FORMS_FORM_H__

#include <string>
#include <unordered_map>
#include <vector>
#include <any>

#include "field.h"
#include "integer_field.h"
#include "string_field.h"
#include "../interaction_driver.h"

namespace ui {

    class form {
        
    private:
        ui::interaction_driver *_driver;
        std::string _title;
        std::unordered_map<std::string, void*> _fields;

    public:
        form(ui::interaction_driver *driver, std::string title) : 
            _driver(driver), _title(title) {
        }

        std::string get_title() {
            return _title;
        }

        template<typename T>
        ui::field<T> *get_field(std::string prompt) {
            return _fields[prompt];
        }

        template<typename T>
        std::vector<ui::field<T>*> get_fields() {
            std::vector<ui::field<T>*> vec;
            for (auto pair : _fields) {
                vec.push_back(pair.second);
            }
            return vec;
        }

        template<typename T>
        void add_field(std::string key, ui::field<T> *field) {
            if (_fields.find != _fields.end()) {
                // throw exception
            }
            _fields[prompt] = field;
        }

        void add_integer_field(std::string key, std::string label) {
            add_field(key, new ui::integer_field(label));
        }

        void add_string_field(std::string key, std::string label) {
            add_field(key, new ui::string_field(label));
        }

        template<typename T>
        int get_int(std::string key) {
            return (int) static_cast<ui::field<T>*>(_fields[key])->get_value();
        }

        template<typename T>
        std::string get_string(std::string key) {
            return (std::string) static_cast<ui::field<T>*>(_fields[key])->get_value();
        }
    };
}

#endif
