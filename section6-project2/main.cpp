//
// Created by Matthew Johnson on 12/4/22.
//

#include "Pizza.h";

int main() {
    Pizza p1 {"Meat Lovers", 10.99, 12, vector<string> {"Pepperoni", "Sausage"}};
    p1.printPizza();
    p1.addToppings("Mushrooms");
    p1.printCost();
    p1.printToppings();
    p1.printPizza();

    Pizza p2 {"Meat Haters", 10.99, 12, vector<string> {"Cheese", "Mushrooms"}};
    p2.printPizza();
    p2.addToppings("Tomato");
    p2.printCost();
    p2.printToppings();
    p2.printPizza();


    return 0;
}