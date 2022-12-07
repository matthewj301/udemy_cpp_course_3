//
// Created by Matthew Johnson on 12/6/22.
//

#include "Dog.h"
#include "stdexcept"
#include <utility>

Dog::Dog(string pBreed) {
    if (pBreed != "Poodle") {
        breed = std::move(pBreed);
    } else {
        throw runtime_error("Poodle? That's not a real dog!");
    }
}

string Dog::getBreed() const {
    return breed;
}