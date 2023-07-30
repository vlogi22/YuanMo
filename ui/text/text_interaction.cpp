#include "text_interaction.h"

#include "../menus/menu.h"
#include "../forms/form.h"

#include <iostream>
#include <string>
#include "prompt.h"
#include "message.h"

std::string ui::text_interaction::read_string(std::string prompt) {
    std::string str;

    std::cout << prompt;
    std::getline(std::cin, str);

    return str;
}

int ui::text_interaction::read_integer(std::string prompt) {
    return std::stoi(ui::text_interaction::read_string(prompt), NULL, 10);
}

void ui::text_interaction::show(ui::menu *menu) {
    int size = menu->get_size();

    std::cout << menu->get_title() << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << menu->get_command(i)->get_title() << std::endl;
    }
}

void ui::text_interaction::choose(ui::menu *menu) {
    int option = 0, size = menu->get_size();

    while (true) {
        try {
            option = read_integer(ui::CHOOSE_OPTION);
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

void ui::text_interaction::fill(ui::form *form) {
    for(field* element : form->get_fields()) {
        if (!element->parse(read_string(element->get_prompt()))) {
            //TODO: do something if can't parse
        }   
    }
}
