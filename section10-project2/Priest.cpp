//
// Created by Matthew Johnson on 12/15/22.
//

#include "Priest.h"

Priest::Priest(const string &name, const Race &race) : Player(name, race, 100, 200){};

string Priest::attack() {
    return "I will assault you with Holy Wraith!";
}