#include <iostream>
#include "Rectangle.h"
using namespace std;


int main() {
    Rectangle r1;
    Rectangle r2(2.3, 5.9);

    cout << "R1 area: " << r1.area() << endl;
    cout << "R2 area: " << r2.area() << endl;

    r1.setLength(22);
    r1.setWidth(12);
    cout << "R1 new area: " << r1.area() << endl;
    r2.setLength(1.2);
    r2.setWidth(3.4);
    cout << "R2 new area: " << r2.area() << endl;

    cout << "R1 perimeter ("
    << r1.getLength() << " + "
    << r1.getLength() << " + "
    << r1.getWidth() << " + "
    << r1.getWidth() << "): 2"
    << r1.perimeter() << endl;

    cout << "R2 perimeter ("
    << r2.getLength() << " + "
    << r2.getLength() << " + "
    << r2.getWidth() << " + "
    << r2.getWidth() << "): 2"
    << r2.perimeter() << endl;



    return 0;
}
