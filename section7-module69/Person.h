//
// Created by Matthew Johnson on 12/6/22.
//

#ifndef UDEMY_CPP_COURSE_3_PERSON_H
#define UDEMY_CPP_COURSE_3_PERSON_H
#include "string"
#include <utility>

using namespace std;

class Person {
  private:
    string name;
  public:
    explicit Person(string);
    string getName() const noexcept;
    void setName(string);
};


#endif //UDEMY_CPP_COURSE_3_PERSON_H
