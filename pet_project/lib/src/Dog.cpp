#include "Dog.h"
#include <iostream>

Dog::Dog(std::string name, int age) : Pet(name, age) {
}

void Dog::speak() {
    std::cout << name << ": Гав-гав!" << std::endl;
}

void Dog::fetch() {
    std::cout << name << " приніс паличку" << std::endl;
}
