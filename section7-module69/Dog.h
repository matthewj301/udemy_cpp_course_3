//
// Created by Matthew Johnson on 12/6/22.
//

#ifndef UDEMY_CPP_COURSE_3_DOG_H
#define UDEMY_CPP_COURSE_3_DOG_H
#include "string"

using namespace std;

class Dog {
  private:
    string breed;
  public:
    Dog(string);
    string getBreed() const;
};


#endif //UDEMY_CPP_COURSE_3_DOG_H
