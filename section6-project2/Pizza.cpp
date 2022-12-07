//
// Created by Matthew Johnson on 12/4/22.
//

#include "Pizza.h"

Pizza::Pizza(string iName, double iCost, int iDiameter, vector<string> iToppings) {
    if (std::find(iToppings.begin(), iToppings.end(), "Cheese") == iToppings.end()) {
        iToppings.emplace_back("Cheese");
    }
    name = iName;
    cost = iCost;
    diameter = iDiameter;
    toppings = std::move(iToppings);
}

void Pizza::addToppings(string newTopping) {
    toppings.emplace_back(newTopping);
}

double Pizza::getCost() const {
    return cost;
}

void Pizza::printToppings() const {
    cout << "Toppings: ";
    for (const auto& topping: toppings) {
        cout << topping << " ";
    }
    cout << endl;
}
void Pizza::printCost() const {
    cout << "Cost: $" << getCost() << endl;
}

void Pizza::printPizza() const {
    cout << "Pizza name: " << name << endl;
    printCost();
    printToppings();
    cout << endl;
}