
#include <string>
#include "text_interaction.h"
#include "prompt.h"
#include "message.h"

std::string ui::text_interaction::read_string() {
    std::string str;

    std::getline(std::cin, str);

    return str;
}

int ui::text_interaction::read_integer() {
    return std::stoi(ui::text_interaction::read_string(), NULL, 10);
}

void ui::text_interaction::show(ui::menu *menu) {
    int size = menu->get_size();

    std::cout << menu->get_title() << std::endl;
    for (int i = 0; i < size; i++) {
        menu->get_command(i)->get_title();
    }
    std::cout << ui::CHOOSE_OPTION << std::endl;
}

void ui::text_interaction::choose(ui::menu *menu) {
    int option = 0, size = menu->get_size();

    while (true) {
        try {
            option = read_integer();
            if (option == 0) { return ; }

            if (option < 0 || option > size) {
                std::cout << ui::invalid_option(option) << std::endl;
            } else {
                menu->get_command(option - 1)->perform_command();
            }
        } catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
        
    }
}

void ui::text_interaction::fill() {

}

void ui::text_interaction::render() {

}

void ui::text_interaction::close() {

}

