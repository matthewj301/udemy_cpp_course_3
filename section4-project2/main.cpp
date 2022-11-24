#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main() {
    int userInput {};
    vector<int> inputVector {};


    while (userInput >= 0) {
        cout << "Enter a positive int (negative will quit the loop): ";
        cin >> userInput;
        if (userInput >= 0) {
            inputVector.push_back(userInput);
        } else {
            cout << "You entered a negative number, exiting loop..." << endl;
        }
    }
    for (auto arr: inputVector) {
        cout << arr * 2 << endl;
    }

    return 0;
}
