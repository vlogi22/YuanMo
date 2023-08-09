#include "display.h"

void ui::display::display_text() {
    std::cout << _text;
    clear();
}

template<class T>
void ui::display::add_line(T object, bool new_line) {
    _text += object->to_string();
    if (new_line) _text += "\n";
}

template<class T>
void ui::display::add_vector(std::vector<T> vector) {
    for (T object : vector) {
        add_line(object, true);
    }
}

template<class T>
void ui::display::print(T object) {
    if (object == nullptr) return ;
    
    add_line(object);
    display_text();
}

template<class T>
void ui::display::print_vector(std::vector<T> vector) {
    if (vector == nullptr) return ;

    add_vector(vector);
    display_text();
}

void ui::display::clear() {
    _text.clear();
}