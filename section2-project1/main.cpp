#include <iostream>
#include "string"
using namespace std;

int main() {
    double num1 {};
    double num2 {};
    double num3 {};

    double mean {};

    cout << "Please enter your first number: ";
    cin >> num1;
    cout << "Please enter your second number: ";
    cin >> num2;
    cout << "Please enter your third number: " ;
    cin >> num3;

    mean = (num1 + num2+ num3) / 3;
    cout << "The mean of the numbers you entered is " << mean << " !" << endl;



    return 0;
}
