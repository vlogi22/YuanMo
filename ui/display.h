#ifndef __YUANMO_DISPLAY_H__
#define __YUANMO_DISPLAY_H__

#include <iostream>
#include <string>
#include <vector>

namespace ui {

    class display {

    private:
        std::string _text;

    public:
        display(std::string text = "") : 
            _text(text) {
        }

        void display_text();
        
        void add_line(std::string str, bool new_line = false);
        void add_vector(std::vector<std::string> vector);

        void print(std::string str);
        void println(std::string str);
        void print_vector(std::vector<std::string> vector);

        void clear();

    };
    
}

#endif