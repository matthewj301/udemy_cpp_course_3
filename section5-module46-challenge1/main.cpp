#include <iostream>
#include <array>
#include <vector>

using namespace std;

int getResult(int);
int getResult(int, int);
string getResult(const string&, const string&);


int main() {
    string str1 {"Hello"};
    string str2 {"Goodbye!"};

    cout << getResult(5) << endl;
    cout << getResult(12, 5) << endl;
    cout << getResult(str1, str2) << endl;

    return 0;
}

int getResult(int inputCube) {
    return inputCube * inputCube;
}

int getResult(int num1, int num2) {
    return num1 * num2;
}

string getResult(const string& str1, const string& str2) {
    return str1 + " " + str2;
}
