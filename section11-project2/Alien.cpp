//
// Created by Matthew Johnson on 1/10/23.
//

#include "Alien.h"

Alien::Alien(int weight, int height, char gender) {
    this->weight = weight;
    this->height = height;
    this->gender = toupper(gender);
}

int Alien::getWeight() const {
    return this->weight;
}

int Alien::getHeight() const {
    return this->height;
}

char Alien::getGender() const {
    return this->gender;
}

int Alien::getPrestige() const {
    int genderPoints{};
    if (this->gender == 'M') {
        genderPoints = 2;
    } else {
        genderPoints = 3;
    }
    return this->height * this->weight * genderPoints;
}

bool Alien::operator==(Alien &otherAlien) const {
    if (this->getPrestige() == otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

bool Alien::operator!=(Alien &otherAlien) {
    if (this->getPrestige() != otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

bool Alien::operator>(Alien &otherAlien) {
    if (this->getPrestige() > otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

bool Alien::operator>=(Alien &otherAlien) {
    if (this->getPrestige() >= otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

bool Alien::operator<(Alien &otherAlien) {
    if (this->getPrestige() < otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

bool Alien::operator<=(Alien &otherAlien) {
    if (this->getPrestige() <= otherAlien.getPrestige()) {
        return true;
    }
    return false;
}

void Alien::operator=(Alien &otherAlien) {
    this->weight = otherAlien.weight;
    this->height = otherAlien.height;
    this->gender = otherAlien.gender;
}

Alien Alien::operator+(Alien &breedingAlien) {
    srand(time(nullptr));
    int childWeight{(this->weight + breedingAlien.weight) / 2};
    int childHeight{(this->height + breedingAlien.height) / 2};
    char childGender{};
    int childGenderRandomizer = rand() % 10 + 1;
    if (childGenderRandomizer < 4) {
        childGender = 'F';
    } else {
        childGender = 'M';
    }

    Alien childAlien{childWeight, childHeight, childGender};
    return childAlien;
}

void Alien::printAttrs() const {
    cout << "Alien attrs" << endl;
    cout << "weight: " << this->weight << endl;
    cout << "height: " << this->height << endl;
    cout << "gender: " << this->gender << endl;
    cout << "prestige: " << this->getPrestige() << endl << endl;
}