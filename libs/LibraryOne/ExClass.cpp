#include "ExClass.hpp"


ExampleClass::ExampleClass() {
    this->priv_number = 5;
}

void ExampleClass::set_number(int p_num) {
    this->priv_number = p_num;
}

int ExampleClass::get_number() {
    return this->priv_number;
}