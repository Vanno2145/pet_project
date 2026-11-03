#include <iostream>
#include "Dog.h"
#include "Cat.h"

int main() {
    Dog dog("Рекс", 3);
    Cat cat("Мурка", 2);

    std::cout << "--- Собака ---" << std::endl;
    dog.printInfo();
    dog.speak();
    dog.eat();
    dog.fetch();

    std::cout << "--- Кіт ---" << std::endl;
    cat.printInfo();
    cat.speak();
    cat.eat();
    cat.purr();

    return 0;
}
