//
// Created by Matthew Johnson on 12/14/22.
//

#include "Animal.h"
#include <utility>

Animal::Animal(string name, double weight) {
    this->name = std::move(name);
    this->weight = weight;
}

string Animal::getName() const {
    return this->name;
}

double Animal::getWeight() const {
    return this->weight;
}

void Animal::setName(string pName) {
    this->name = std::move(pName);
}

void Animal::setWeight(double pWeight) {
    this->weight = pWeight;
}