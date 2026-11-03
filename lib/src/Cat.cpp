#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name, int age) : Pet(name, age) {
}

void Cat::speak() {
    std::cout << name << ": Няв!" << std::endl;
}

void Cat::purr() {
    std::cout << name << " муркоче" << std::endl;
}
