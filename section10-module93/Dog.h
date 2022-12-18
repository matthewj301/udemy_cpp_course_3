//
// Created by Matthew Johnson on 12/13/22.
//

#ifndef UDEMY_CPP_COURSE_3_DOG_H
#define UDEMY_CPP_COURSE_3_DOG_H
#include "Animal.h"

class Dog : public Animal {
  private:
    string breed;
  public:
    Dog(const string&, const double&, const string&);
    string getBreed() const;
    void digHole() const;
    void chaseCat() const;
    string makeNoise() const override;
    string eat() const override;


};


#endif //UDEMY_CPP_COURSE_3_DOG_H
