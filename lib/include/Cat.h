#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(std::string name, int age);

    void speak() override;
    void purr();
};

#endif
