//
// Created by Matthew Johnson on 12/14/22.
//

#ifndef UDEMY_CPP_COURSE_3_CAT_H
#define UDEMY_CPP_COURSE_3_CAT_H

#include "Animal.h"
#include "iostream"

class Cat : public Animal {
  private:
    string breed;
  public:
    Cat(const string &, const double &, const string &);

    string getBreed() const;

    void chaseMouse() const;

    string makeNoise() const override;

    string eat() const override;


};


#endif //UDEMY_CPP_COURSE_3_CAT_H
