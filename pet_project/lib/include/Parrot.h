#pragma once

#include <string>
#include <vector>
#include "Pet.h"

namespace pets {

class Parrot : public Pet {
public:
    Parrot(const std::string& name, int age, double weight);

    std::string speak() const override;
    std::string kind() const override;
    std::string info() const override;

    void learnWord(const std::string& word); 
    std::string fly() const;

private:
    std::vector<std::string> vocabulary_;
};

} 
