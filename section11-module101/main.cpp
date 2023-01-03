//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "vector"

using namespace std;
//double getBigger(double a, double b);
//int getBigger(int a, int b);
//string getBigger(string a, string b);

// Instead of overriding the above, which produce the same type of response, we should use a template!

template <class T>
        T getBigger(T a, T b);

int main() {
    string name1 {"John"};
    string name2 {"Matthew"};

    double biggerDouble = getBigger(3.12, 44.32);
    int biggerInt = getBigger(3, 12);
    string biggerStr = getBigger(name1, name2);

    cout << "biggerDouble: " << biggerDouble << endl;
    cout << "biggerInt: " << biggerInt << endl;
    cout << "biggerStr: " << biggerStr << endl;

    return 0;
}

//double getBigger(double d1, double d2) {
//    if (d1 > d2) {
//        return d1;
//    }
//    return d2;
//}
//
//int getBigger(int i1, int i2) {
//    if (i1 > i2) {
//        return i1;
//    }
//    return i2;
//}
//
//string getBigger(string s1, string s2) {
//    if (s1 > s2) {
//        return s1;
//    }
//    return s2;
//}

template <class T>
T getBigger(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}