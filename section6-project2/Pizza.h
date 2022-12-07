//
// Created by Matthew Johnson on 12/4/22.
//

#ifndef UDEMY_CPP_COURSE_3_PIZZA_H
#define UDEMY_CPP_COURSE_3_PIZZA_H
#include "string"
#include "iostream"
#include "vector"

using namespace std;

class Pizza {
private:
    string name;
    double cost;
    int diameter;
    vector<string> toppings;
public:
    Pizza(string, double, int, vector<string>);
    void addToppings(string);
    double getCost() const;
    void printToppings() const;
    void printCost() const;
    void printPizza() const;


};


#endif //UDEMY_CPP_COURSE_3_PIZZA_H
