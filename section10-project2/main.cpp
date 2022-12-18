//
// Created by Matthew Johnson on 12/15/22.
//
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include "iostream"

using namespace std;

Player *createPlayer(string, Race);

void toLowercase(string &);

void displayRaces();

Race selectRace(string);

void displayClasses();

string selectClass();

int main() {
    string playerName{};
    Race playerRace{NONE};
    string tmpRace{};
    string playerClass{};

    cout << "Enter your player's name: ";
    getline(cin, playerName);

    while (playerRace == NONE) {
        cout << "Select your player's race: " << endl;
        cout << "Possible options" << endl;
        displayRaces();
        cin >> tmpRace;
        playerRace = selectRace(tmpRace);
    }

    Player *t1 = new Warrior("Matthew", ORC);

    cout << "Name: " << t1->getName() << endl;
    cout << "Race Enum: " << t1->getRace() << endl;
    cout << "Race Str: " << t1->whatRace() << endl;
    cout << "Hit Points: " << t1->getHitPoints() << endl;
    cout << "Magic Points: " << t1->getMagicPoints() << endl;
    cout << "Attack: " << t1->attack() << endl;

    return 0;
}

void toLowercase(string &stringConvert) {
    transform(stringConvert.begin(), stringConvert.end(), stringConvert.begin(),
              [](unsigned char c) { return std::tolower(c); });
}

void displayRaces() {
    cout << "Human" << endl;
    cout << "Elf" << endl;
    cout << "Dwarf" << endl;
    cout << "Orc" << endl;
    cout << "Troll" << endl;
}

Race selectRace(string enteredRace) {
    toLowercase(enteredRace);
    if (enteredRace == "human") {
        return HUMAN;
    } else if (enteredRace == "elf") {
        return ELF;
    } else if (enteredRace == "dwarf") {
        return DWARF;
    } else if (enteredRace == "orc") {
        return ORC;
    } else if (enteredRace == "troll") {
        return TROLL;
    } else {
        return NONE;
    }
}

Player* createPlayer(string playerName, Race playerRace) {
}