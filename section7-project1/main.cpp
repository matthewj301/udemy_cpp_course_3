#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

string getLetterGrade(int);

int main() {
    int perc {0};
    string letter {};
    cout << "What is your percentage? ";
    cin >> perc;
    try {
            letter = getLetterGrade(perc);
            cout << "Your letter grade is: " << letter << endl;

    } catch (const out_of_range &err) {
        cout << err.what() << endl;
    }
    return 0;
}

string getLetterGrade(int percentage) {
    if (percentage < 0) {
        throw out_of_range("Your percentage cannot be less than 0!");
    } else if (percentage > 100) {
        throw out_of_range("Your percentage cannot be greater than 0!");
    }
    if (percentage <= 59) {
        return "F";
    } else if (percentage <= 69) {
        return "D";
    } else if (percentage <= 79) {
        return "C";
    } else if (percentage <= 89) {
        return "B";
    } else if (percentage < 100) {
        return "A";
    }
}
