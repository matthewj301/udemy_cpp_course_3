//
// Created by Matthew Johnson on 12/11/22.
//
#include "iostream"
#include "fstream"
#include "iomanip"
#include "string"
#include "vector"

using namespace std;

const string namesFilepath{"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module87/names.txt"};
const string agesFilepath{"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module87/ages.txt"};
const string outFilePath{"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-module87/output.txt"};

int main() {
    ifstream namesInFile;
    ifstream agesInFile;
    ofstream outFile;

    string tmpName{};
    int tmpAge{};

    cout << "Opening files..." << endl;

    namesInFile.open(namesFilepath);
    agesInFile.open(agesFilepath);
    outFile.open(outFilePath);

    if (!namesInFile || !agesInFile) {
        cout << "Problem opening files..." << endl;
        return 1;
    }

    while (!namesInFile.eof() && !agesInFile.eof()) {
        getline(namesInFile, tmpName);
        agesInFile >> tmpAge;
        outFile << tmpName << " " << tmpAge << endl;
    }


    namesInFile.close();
    agesInFile.close();
    outFile.close();
    cout << "Done!" << endl;

    return 0;
}
