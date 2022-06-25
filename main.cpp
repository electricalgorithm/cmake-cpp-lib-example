#include <iostream>
#include <ExClass.hpp>
#include <ExFuncStore.hpp>

int main() {
    ExampleClass EC1;
    
    std::cout << "Number: " << EC1.get_number() << std::endl;
    EC1.set_number(13);
    std::cout << "Number: " << EC1.get_number() << std::endl;

    func1(5, 5);
    func3(5.4f, 5.2f);
    func2(2, 4.4f);

    return 0;
}