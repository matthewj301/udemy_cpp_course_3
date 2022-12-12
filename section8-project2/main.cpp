#include <iostream>
#include "Circle.h"

using namespace std;

void printCircles(Circle**, int);

int main() {
    int ARRAY_SIZE {};
    double tmpRadius {};
    cout << "How many circles do u want? ";
    cin >> ARRAY_SIZE;

    Circle** circlePtrArray = new Circle*[ARRAY_SIZE];

    for (int i {0}; i < ARRAY_SIZE; i++) {
        cout << "What should the radius be for circle " << i << "? ";
        cin >> tmpRadius;
        circlePtrArray[i] = new Circle(tmpRadius);
    }

    printCircles(circlePtrArray, ARRAY_SIZE);

    for (int i {0}; i < ARRAY_SIZE; i++) {
        delete circlePtrArray[i];
        circlePtrArray[i] = nullptr;
    }

    delete []circlePtrArray;

    return 0;
}

void printCircles(Circle** circleArray, int circleCount) {
    for (int i {0}; i<circleCount; i++) {
    cout << "circle " << i << endl;
    circleArray[i]->print("all");
    }
}