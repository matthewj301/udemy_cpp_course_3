//
// Created by Matthew Johnson on 1/8/23.
//

#include "Car.h"
#include <utility>

Car::Car(string color, int numDoors) {
    this->color = std::move(color);
    this->numDoors = numDoors;
}

string Car::getColor() const {
    return this->color;
}

int Car::getNumDoors() const {
    return this->numDoors;
}
