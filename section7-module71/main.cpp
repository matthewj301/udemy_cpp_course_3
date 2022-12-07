#include <iostream>
#include "AngryCatException.h"

using namespace std;


void feedKitty(int);

int main() {
    int numTreats {0};
    cout << "How many treats do u want to feed kitty? ";
    cin >> numTreats;
    try {
        feedKitty(numTreats);

    } catch (const AngryCatException &err) {
        cout << err.what() << endl;
    }
    return 0;
}

void feedKitty(int treats) {
    string errMsg {"The cat has had enough!"};
    if (treats < 3) {
        throw AngryCatException(errMsg);
    }
    cout << "Kitty is happy with " << treats << " treats.";

}

