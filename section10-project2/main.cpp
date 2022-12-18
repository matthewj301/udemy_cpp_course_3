//
// Created by Matthew Johnson on 12/15/22.
//
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include "iostream"

using namespace std;
enum Class {
    UNKNOWN_CLASS, WARRIOR, PRIEST, MAGE
};

Player *createPlayer(const string &, const Race &, const Class &);

void toLowercase(string &);

void displayRaces();

Race selectRace(string);

void displayClasses();

Class selectClass(string);

void additionalPlayerCreation(bool &, string &);

int main() {
    vector<Player *> players{};
    string playerCreationInput{};
    bool enterMorePlayers{true};

    while (enterMorePlayers) {
        string playerName{};
        Race playerRace{UNKNOWN_RACE};
        string tmpRace{};

        Class playerClass{UNKNOWN_CLASS};
        string tmpClass{};

        cout << "Enter your player's name: ";
        getline(cin, playerName);

        while (playerRace == UNKNOWN_RACE) {
            cout << endl << "Possible Race options: " << endl;
            displayRaces();
            cout << "Select your player's race: ";
            cin >> tmpRace;
            playerRace = selectRace(tmpRace);
        }

        while (playerClass == UNKNOWN_CLASS) {
            cout << endl << "Possible Class options: " << endl;
            displayClasses();
            cout << "Select your player's Class: ";
            cin >> tmpClass;
            playerClass = selectClass(tmpClass);
        }

        players.push_back(createPlayer(playerName, playerRace, playerClass));
        cout << "Do you want to create more players? ";
        cin >> playerCreationInput;
        additionalPlayerCreation(enterMorePlayers, playerCreationInput);
                cin.ignore();

    }

    for (auto mainPlayer: players) {
        cout << endl;
        cout << "Name: " << mainPlayer->getName() << endl;
        cout << "Race Enum: " << mainPlayer->getRace() << endl;
        cout << "Race Str: " << mainPlayer->whatRace() << endl;
        cout << "Hit Points: " << mainPlayer->getHitPoints() << endl;
        cout << "Magic Points: " << mainPlayer->getMagicPoints() << endl;
        cout << "Attack: " << mainPlayer->attack() << endl;
    }

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

void displayClasses() {
    cout << "Warrior" << endl;
    cout << "Priest" << endl;
    cout << "Mage" << endl;
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
        cout << "Please enter a valid race..." << endl << endl;
        return UNKNOWN_RACE;
    }
}

Class selectClass(string enteredClass) {
    toLowercase(enteredClass);
    if (enteredClass == "warrior") {
        return WARRIOR;
    } else if (enteredClass == "priest") {
        return PRIEST;
    } else if (enteredClass == "mage") {
        return MAGE;
    } else {
        cout << "Please enter a valid class..." << endl << endl;
        return UNKNOWN_CLASS;
    }
}

Player *createPlayer(const string &playerName, const Race &playerRace, const Class &playerClass) {
    if (playerClass == WARRIOR) {
        Player *player = new Warrior(playerName, playerRace);
        return player;
    } else if (playerClass == PRIEST) {
        Player *player = new Priest(playerName, playerRace);
        return player;
    } else {
        Player *player = new Mage(playerName, playerRace);
        return player;
    }
}

void additionalPlayerCreation(bool &creationBool, string &userInput) {
    toLowercase(userInput);
    if (userInput == "yes") {
        creationBool = true;
    } else if (userInput == "true") {
        creationBool = true;
    } else {
        creationBool = false;
    }
}