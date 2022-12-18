//
// Created by Matthew Johnson on 12/13/22.
//

#include "Dog.h"
#include "iostream"

Dog::Dog(const string &name, const double &weight, const string &breed) : Animal(name, weight) {
    this->breed = breed;
}

string Dog::getBreed() const {
    return this->breed;
}

void Dog::digHole() const {
    cout << "Digging a hole!!" << endl;
}

void Dog::chaseCat() const {
    cout << "Here, kitty kitty!" << endl;
}

string Dog::makeNoise() const {
    return "Woof!!";
}

string Dog::eat() const {
    return "I love dog food!!";
}
