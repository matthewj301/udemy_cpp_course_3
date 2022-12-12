//
// Created by Matthew Johnson on 12/9/22.
//

#ifndef UDEMY_CPP_COURSE_3_DOG_H
#define UDEMY_CPP_COURSE_3_DOG_H
#include "string"

class Dog {
  private:
    std::string name;
    std::string breed;
  public:
    Dog(std::string, std::string);
    std::string getName() const;
    std::string getBreed() const;

};


#endif //UDEMY_CPP_COURSE_3_DOG_H
