#include <iostream>
#include <vector>
#include <stdexcept>

void processPositive(int);
void doSomething(int);

using namespace std;

int main() {
    int input {};
    try {
        cout << "Enter a number to process: ";
        cin >> input;
        doSomething(input);
        cout << "Yay! main was able to completely "
              << "process the num!" << endl;
    } catch(const invalid_argument &err) {
        cout << "main says there is an error!" << endl;
        cout << err.what() << endl;
    } catch(const out_of_range &outOfRangeErr) {
        cout << "main says the number is too big!!" << endl;
        cout << outOfRangeErr.what() << endl;
    }
    return 0;
}

void processPositive(int num) {
    cout << "Welcome to the positive integer processor!" << endl;
    if (num >= 0 && num < 100) {
        cout << "Good job! You passed in a positive num to processPositive." << endl;
    } else if (num > 100) {
        cout << "processPositive says the number is too big!" << endl;
        throw out_of_range("Number cannot be greater than 100.");
    } else if (num < 0){
        throw invalid_argument("Negative number passed in!");
    }
}

void doSomething(int num) {
    try {
        processPositive(num);
    } catch (const invalid_argument &invalidArgsErr) {
        cout << "doSomething says there is a problem!" << endl;
        throw;
    } catch (const out_of_range &outOfRangeErr) {
        cout <<"doSomething says the number is too big" << endl;
        throw;
    }
}

