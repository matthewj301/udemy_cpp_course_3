//
// Created by Matthew Johnson on 12/11/22.
//

#include "string"
#include "fstream"
#include "iostream"
#include "vector"
#include <numeric>
#include "Rectangle.h"

using namespace std;

const string rectangleFilePath {"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-project2/rectangles.txt"};
const string outeFilePath {"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-project2/output.txt"};

void populateRectVector(vector<Rectangle*>&, ifstream&);
void writeRectVectData(const vector<Rectangle*>&, ofstream&);
void cleanUpMemory(vector<Rectangle*>&);
int main() {
    ifstream inFile;
    ofstream outFile;

    vector<Rectangle*> rectangles {};


    inFile.open(rectangleFilePath);
    outFile.open(outeFilePath);
    if (!inFile || !outFile) {
        cout << "Error opening  input or output file, exiting..." << endl;
        return 1;
    }

    populateRectVector(rectangles, inFile);
    writeRectVectData(rectangles, outFile);
    cleanUpMemory(rectangles);

    inFile.close();
    outFile.close();

    return 0;
}

void populateRectVector(vector<Rectangle*> &rectVector, ifstream &rectFile) {
    double tmpLength {};
    double tmpWidth {};
    Rectangle *rect;
    while (!rectFile.eof()) {
        rectFile >> tmpLength;
        rectFile >> tmpWidth;
        rect = new Rectangle(tmpWidth, tmpWidth);
        rectVector.push_back(rect);
    }
}

void writeRectVectData(const vector<Rectangle*> &rectVector, ofstream &outFile) {
    for (auto rect: rectVector) {
        outFile << rect->area() << endl;
        outFile << rect->perimeter() << endl << endl;
    }
}

void cleanUpMemory(vector<Rectangle*> &rectangleVector) {
    for (auto recPtr: rectangleVector) {
        delete recPtr;
    }
    rectangleVector.clear();
}
