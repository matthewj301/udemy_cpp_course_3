//
// Created by Matthew Johnson on 12/4/22.
//

#include "House.h"
#include "iostream"
#include <utility>

void House::print() const {
    cout << "My house is " << color << " and has "
         << numStories << " stories and "
         << numWindows << " windows." << endl;
}

int House::getNumStories() const {
    return numStories;
}

int House::getNumWindows() const {
    return numWindows;
}

string House::getColor() const {
    return color;
}

void House::setNumStores(int passedNumStories) {
    numStories = passedNumStories;
}

void House::setNumWindows(int passedNumWindows) {
    numWindows = passedNumWindows;
}

void House::setColor(string passedColor) {
    color = std::move(passedColor);
}
