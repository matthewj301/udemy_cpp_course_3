//
// Created by Matthew Johnson on 12/15/22.
//

#ifndef UDEMY_CPP_COURSE_3_MAGE_H
#define UDEMY_CPP_COURSE_3_MAGE_H
#include "Player.h"

class Mage : public Player{
  public:
    Mage(const string &, const Race &);
    string attack();
};


#endif //UDEMY_CPP_COURSE_3_MAGE_H
