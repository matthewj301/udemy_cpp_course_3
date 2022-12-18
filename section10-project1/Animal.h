//
// Created by Matthew Johnson on 12/14/22.
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
    double getWeight() const;

    void setName(string);
    void setWeight(double);

    virtual string makeNoise() const = 0;
    virtual string eat() const = 0;

};


#endif //UDEMY_CPP_COURSE_3_ANIMAL_H
