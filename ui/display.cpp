#include "display.h"

void ui::display::display_text() {
    if (!_text.empty()) {
        std::cout << _text;
        clear();
    }
}

void ui::display::add_line(std::string str, bool new_line) {
    _text += str;
    if (new_line) _text += "\n";
}

void ui::display::add_vector(std::vector<std::string> vector) {
    for (std::string str : vector) {
        add_line(str, true);
    }
}

void ui::display::print(std::string str) {
    add_line(str, false);
    display_text();
}

void ui::display::println(std::string str) {
    add_line(str, true);
    display_text();
}

void ui::display::print_vector(std::vector<std::string> vector) {
    add_vector(vector);
    display_text();
}

void ui::display::clear() {
    _text.clear();
}