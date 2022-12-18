//
// Created by Matthew Johnson on 12/14/22.
//
#include "Animal.h"
#include "Cat.h"


int main() {
    Animal* catPtr = new Cat("Beth", 75, "Short Hair");

    cout << "Name: " << catPtr->getName() << endl;
    cout << "Weight: " << catPtr->getWeight() << endl;
    cout << "Breed: " << dynamic_cast<Cat*>(catPtr)->getBreed() << endl;
    cout << "Noise: " << catPtr->makeNoise() << endl;
    cout << "Eating: " << catPtr->eat() << endl;
    dynamic_cast<Cat*>(catPtr)->chaseMouse();
    // OR
    reinterpret_cast<Cat*>(catPtr)->chaseMouse();

    // NOTE: need to recast the Animal pointer to a Cat pointer in order to
    // call Cat methods

    delete catPtr;
    catPtr = nullptr;


    return 0;
}