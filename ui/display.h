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
        
        template<class T>
        void add_line(T object, bool new_line = false);
        template<class T>
        void add_vector(std::vector<T> vector);

        template<class T>
        void print(T object);
        template<class T>
        void print_vector(std::vector<T> vector);

        void clear();

    };
    
}

#endif