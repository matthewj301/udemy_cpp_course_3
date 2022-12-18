//
// Created by Matthew Johnson on 12/15/22.
//

#include "Warrior.h"

Warrior::Warrior(const string & name, const Race & race) : Player(name, race, 200, 0){};

string Warrior::attack() {
    return "I will destroy you with my sword, foul demon!";
}
