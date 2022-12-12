//
// Created by Matthew Johnson on 12/11/22.
//
#include "iostream"
#include "fstream"
#include "iomanip"
#include "vector"

using namespace std;

string integersFilePath {"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module87-challenge/integers.txt"};
string outputFilePath {"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module87-challenge/output.txt"};

int main() {
    ifstream inFile;
    ofstream outFile;

    int tmpInt {};
    vector<int> doubledInputs {};

    inFile.open(integersFilePath);
    outFile.open(outputFilePath);

    if (!inFile || !outFile) {
        cout << "Input file is corrupt... exiting..." << endl;
        return 1;
    }

    while (!inFile.eof()) {
        inFile >> tmpInt;
        doubledInputs.push_back(tmpInt*2);
    }

    for (auto num:doubledInputs) {
        cout << num << endl;
        outFile << num << endl;
    }

    outFile.close();
    inFile.close();
    return 0;
}
