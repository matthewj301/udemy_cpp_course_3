//
// Created by Matthew Johnson on 12/13/22.
//

#ifndef UDEMY_CPP_COURSE_3_ANIMAL_H
#define UDEMY_CPP_COURSE_3_ANIMAL_H

#include "string"

using namespace std;

class Animal {
  private:
    string name;
    double weight;
  public:
    Animal(string, double);

    string getName() const;

    void setName(string);

    double getWeight() const;

    void setWeight(double);

    // = 0 is how you make a pure virtual function
    // (base class does not have implementation, but classes
    // that inherit this class are required to have it implemented)
    // NOTE: when you define a pure virtual function, this makes the class an abstract class
    // IE. you cannot initialize this class directly
    // BUT, you can still create pointers of type base class
    virtual string makeNoise() const = 0;

    virtual string eat() const = 0;
};


#endif //UDEMY_CPP_COURSE_3_ANIMAL_H
