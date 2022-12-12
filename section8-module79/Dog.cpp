//
// Created by Matthew Johnson on 12/9/22.
//

#include "Dog.h"

#include <utility>


Dog::Dog(std::string name, std::string breed) {
    this->name = std::move(name);
    this->breed = std::move(breed);
}

std::string Dog::getName() const {
    return name;
}

std::string Dog::getBreed() const {
    return breed;
}
