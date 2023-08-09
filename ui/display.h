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
        
       ~display() {
        }

        void display_text() {
            std::cout << _text;
            clear();
        }

        template<class T>
        void add_line(T object, bool new_line = false) {
            _text += object->to_string();
            if (new_line) _text += "\n";
        }

        template<class T>
        void add_vector(std::vector<T> vector) {
            for (T object : vector) {
                add_line(object, true);
            }
        }

        void clear() {
            _text.clear();
        }

        template<class T>
        void print(T object) {
            if (object == nullptr) return ;
            
            add_line(object);
            display_text();
        }

        template<class T>
        void print_vector(std::vector<T> vector) {
            if (vector == nullptr) return ;

            add_vector(vector);
            display_text();
        }

    };
    
}

#endif