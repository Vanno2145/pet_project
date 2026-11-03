#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(std::string name, int age);

    virtual void speak();
    void eat();
    void printInfo();

protected:
    std::string name;
    int age;
};

#endif
