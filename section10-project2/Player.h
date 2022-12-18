//
// Created by Matthew Johnson on 12/15/22.
//

#ifndef UDEMY_CPP_COURSE_3_PLAYER_H
#define UDEMY_CPP_COURSE_3_PLAYER_H
#include "string"

enum Race {UNKNOWN_RACE, HUMAN, ELF, DWARF, ORC, TROLL};

using namespace std;

class Player {
  private:
    string name;
    Race race;
    int hitPoints;
    int magicPoints;
  public:
    Player(const string&, const Race&, const int&, const int&);
    string getName() const;
    Race getRace() const;
    string whatRace() const;
    int getHitPoints() const;
    int getMagicPoints() const;

    void setName(string);
    void setRace(Race);
    void setHitPoints(int);
    void setMagicPoints(int);
    virtual string attack() = 0;



};


#endif //UDEMY_CPP_COURSE_3_PLAYER_H
