#include "Parrot.h"

namespace pets {

Parrot::Parrot(const std::string& name, int age, double weight)
    : Pet(name, age, weight) {}

std::string Parrot::speak() const {
    if (vocabulary_.empty()) {
        return name_ + ": Чик-чирик!";
    }
    // Повторює останнє вивчене слово
    return name_ + ": " + vocabulary_.back() + "!";
}

std::string Parrot::kind() const { return "Папуга"; }

std::string Parrot::info() const {
    return Pet::info() + ", слів у словнику: " + std::to_string(vocabulary_.size());
}

void Parrot::learnWord(const std::string& word) {
    vocabulary_.push_back(word);
}

std::string Parrot::fly() const { return name_ + " літає по кімнаті."; }

} // namespace pets
