//
// Created by Matthew Johnson on 12/14/22.
//

#include "Cat.h"

Cat::Cat(const string &name, const double  &weight, const string &breed) : Animal(name, weight) {
    this->breed = breed;
}

string Cat::getBreed() const {
    return this->breed;
}

void Cat::chaseMouse() const {
    cout << "I'm chasing a mouse!!!" << endl;
}

string Cat::makeNoise() const {
    return "Meow!";
}

string Cat::eat() const {
    return "Eating some cat food :)";
}


