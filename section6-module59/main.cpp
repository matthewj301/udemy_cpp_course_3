#include <iostream>
#include "House.h"
using namespace std;


int main() {
    House myHouse;
    House yourHouse;
    House newHouse(12, 55, "Black");

    myHouse.setColor("Green");
    myHouse.setNumStores(5);
    myHouse.setNumWindows(12);
    yourHouse.setColor("Black");
    yourHouse.setNumStores(3);
    yourHouse.setNumWindows(6);

    myHouse.print();
    yourHouse.print();
    newHouse.print();

    return 0;
}
