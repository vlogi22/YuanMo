#include "typed_field.h"

template <>
bool ui::typed_field<int>::parse(std::string str) {
    _value = std::stoi(str, NULL, 10);
    return true;
}

template <>
bool ui::typed_field<std::string>::parse(std::string str) {
    _value = str;
    return true;
}