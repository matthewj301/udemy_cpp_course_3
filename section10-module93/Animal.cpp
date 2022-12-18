//
// Created by Matthew Johnson on 12/13/22.
//

#include "Animal.h"

#include <utility>

Animal::Animal(string name, double weight) {
    this->name = std::move(name);
    this->weight = weight;
};

string Animal::getName() const {
    return this->name;
};

void Animal::setName(string pName) {
    this->name = std::move(pName);
};

double Animal::getWeight() const {
    return this->weight;
};

void Animal::setWeight(double pWeight) {
    this->weight = pWeight;
};