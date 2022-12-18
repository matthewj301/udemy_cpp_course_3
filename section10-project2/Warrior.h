//
// Created by Matthew Johnson on 12/15/22.
//

#ifndef UDEMY_CPP_COURSE_3_WARRIOR_H
#define UDEMY_CPP_COURSE_3_WARRIOR_H
#include "Player.h"

class Warrior : public Player {
  public:
    Warrior(const string &, const Race &);
    string attack() override;
};

#endif //UDEMY_CPP_COURSE_3_WARRIOR_H
