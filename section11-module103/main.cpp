//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "vector"
#include "map"
#include "string"
#include "algorithm"
#include "ctime"
#include "cstdlib"

using namespace std;

void fillVector(vector<int> &);

void sortVector(vector<int> &);

void printVector(const vector<int> &);

void countInputNum(const vector<int> &, int);


int main() {
    map<string, string> contacts;
    contacts["John Stuff"] = "332-121-1231";
    contacts["Steff Stuff"] = "123-121-1231";
    contacts["Ok Stuff"] = "332-131-1231";

    //for (pair<string, string> elm: contacts) {
    //    cout << elm.first << " " << elm.second << endl;
    //}

    vector<int> myVec;
    fillVector(myVec);
    printVector(myVec);
    countInputNum(myVec, 5);

    cout << "Replacing 5s with 99s" << endl;
    replace(myVec.begin(), myVec.end(), 5, 99);

    printVector(myVec);
    countInputNum(myVec, 99);

    sortVector(myVec);
    printVector(myVec);


    return 0;
}

void fillVector(vector<int> &myVec) {
    // seed
    srand(time(nullptr));
    int temp{};
    for (int i{0}; i < 20; i++) {
        temp = rand() % 5 + 1; // [1 - 5]
        myVec.push_back(temp);
    }
}

void sortVector(vector<int> &myVec) {
    sort(myVec.begin(), myVec.end());
}

void printVector(const vector<int> &myVec) {
    for (int vecObj: myVec) {
        cout << vecObj << endl;
    }

}

void countInputNum(const vector<int> &myVec, int numToCount) {
    int numCount = count(myVec.begin(), myVec.end(), numToCount);
    cout << "num of " << numToCount << "s: " << numCount << endl;
}