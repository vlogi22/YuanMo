#include "command.h"

void ui::command::add_integer_field(std::string key, std::string prompt) {
    _form->add_integer_field(key, prompt);
}

void ui::command::add_string_field(std::string key, std::string prompt) {
    _form->add_string_field(key, prompt);
}

int ui::command::get_integer_field(std::string key) {
    return _form->get_int(key);
}

std::string ui::command::get_string_field(std::string key) {
    return _form->get_string(key);
}