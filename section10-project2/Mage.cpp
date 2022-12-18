//
// Created by Matthew Johnson on 12/15/22.
//

#include "Mage.h"

Mage::Mage(const string & name, const Race & race) : Player(name, race, 150, 150){};

string Mage::attack() {
    return "I will crush you with the power of my arcane missiles!";
}
