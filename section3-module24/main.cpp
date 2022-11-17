#include <iostream>
#include "string"
using namespace std;

int main() {
    int age {};
    char gender {};

    cout << "Enter your gender (m or f): ";
    cin >> gender;
    gender = tolower(gender);

    cout << "Enter your age: ";
    cin >> age;

    if (gender == 'f' && age >= 60) {
        cout << "You qualify!" << endl;
    } else {
        cout << "You do not qualify..." << endl;
    }



    return 0;
}
