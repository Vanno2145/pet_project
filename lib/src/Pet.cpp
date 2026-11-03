#include "Pet.h"
#include <iostream>

Pet::Pet(std::string name, int age) {
    this->name = name;
    this->age = age;
}

void Pet::speak() {
    std::cout << name << " подає голос" << std::endl;
}

void Pet::eat() {
    std::cout << name << " їсть" << std::endl;
}

void Pet::printInfo() {
    std::cout << "Ім'я: " << name << ", вік: " << age << std::endl;
}
