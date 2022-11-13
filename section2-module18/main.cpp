#include <iostream>
#include "string"
using namespace std;

int main() {
    string fullName {};
    string location {};
    int initialScore {};

    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your location: ";
    getline(cin, location);
    cout << "Enter a number 0-100: ";
    cin >> initialScore;
    cout << "Hello " << fullName << " from " << location << " with a score of " << initialScore << ". ";
    cout << "With 5 points added, your score is now " << initialScore + 5 << endl;
    return 0;
}
