#include <iostream>
#include <vector>
#include <stdexcept>
#include "Rectangle.h"


using namespace std;


int main() {
    auto recPtr1 = new Rectangle(2.3, 4.5);
    auto recPtr2 = new Rectangle(5.4, 1.2);
    auto recPtr3 = new Rectangle(15.3, 22.1);
    const Rectangle* rectangleArray[3] {recPtr1, recPtr2, recPtr3};

    for (auto rec: rectangleArray) {
        cout << "Rectangle " << endl;
        cout << rec->area() << endl;
        cout << rec->perimeter() << endl;
    }

    for (auto rec: rectangleArray) {
        delete rec;
    }

    return 0;
}