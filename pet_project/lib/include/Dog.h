#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(std::string name, int age);

    void speak() override;
    void fetch();
};

#endif
