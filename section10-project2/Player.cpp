//
// Created by Matthew Johnson on 12/15/22.
//

#include "Player.h"

#include <utility>

Player::Player(const string &name, const Race &race, const int &hitPoints, const int &magicPoints) {
    this->name = name;
    this->race = race;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
}

string Player::getName() const {
    return this->name;
}

Race Player::getRace() const {
    return this->race;
}

string Player::whatRace() const {
    switch (this->race) {
        case HUMAN:
            return "Human";
        case ELF:
            return "Elf";
        case DWARF:
            return "Dwarf";
        case ORC:
            return "Ork";
        case TROLL:
            return "Troll";
        default:
            return "Invalid race.";

    }
}

int Player::getHitPoints() const {
    return this->hitPoints;
}

int Player::getMagicPoints() const {
    return this->magicPoints;
}

void Player::setName(string pName) {
    this->name = std::move(pName);
}

void Player::setRace(Race pRace) {
    this->race = pRace;
}

void Player::setHitPoints(int pHitPoints) {
    this->hitPoints = pHitPoints;
}

void Player::setMagicPoints(int pMagicPoints) {
    this->magicPoints = pMagicPoints;
}