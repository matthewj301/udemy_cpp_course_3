//
// Created by Matthew Johnson on 12/15/22.
//

#ifndef UDEMY_CPP_COURSE_3_PRIEST_H
#define UDEMY_CPP_COURSE_3_PRIEST_H
#include "Player.h"

class Priest : public Player {
  public:
    Priest(const string &, const Race &);
    string attack();
};


#endif //UDEMY_CPP_COURSE_3_PRIEST_H
