#include <iostream>
#include "House.h"
using namespace std;


int main() {
    House myHouse;
    House yourHouse;

    myHouse.setColor("Green");
    myHouse.setNumStores(5);
    myHouse.setNumWindows(12);
    yourHouse.setColor("Black");
    yourHouse.setNumStores(3);
    yourHouse.setNumWindows(6);

    myHouse.print();
    yourHouse.print();

    return 0;
}
