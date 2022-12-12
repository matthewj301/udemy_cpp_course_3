//
// Created by Matthew Johnson on 12/11/22.
//
#include "iostream"
#include "fstream"
#include "iomanip"
#include "string"
#include "vector"

using namespace std;

const string filePath {"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module86/input.txt"};

int main() {
    ifstream infile;
    infile.open(filePath);
    vector<int> fileNums {};
    int inputNum;
    int sum {0};

    while (!infile.eof()) {
        infile >> inputNum;
        fileNums.push_back(inputNum);
        sum += inputNum;
    }

    for (auto num: fileNums) {
        cout << num << endl;

    }
    cout << "Sum of text file nums: " << sum << endl;

    infile.close();

    return 0;
}
