//
// Created by Matthew Johnson on 12/11/22.
//

#include "fstream"
#include "iostream"
#include "vector"
#include <numeric>
#include "map"

using namespace std;

const string shoppingFilePath{"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-project3/shopping.txt"};

bool checkFileOpen(const ifstream &);

void countGroceries(map<string, int> &, ifstream &);

void printGroceryTotals(const map<string, int> &);

int main() {
    ifstream inFile;

    inFile.open(shoppingFilePath);
    if (!checkFileOpen(inFile)) {
        return 1;
    }

    map<string, int> groceryCount;

    countGroceries(groceryCount, inFile);
    printGroceryTotals(groceryCount);


    return 0;
}

bool checkFileOpen(const ifstream &inFile) {
    if (!inFile) {
        cout << "Error opening input file..." << endl;
        return false;
    }
    return true;

}

void countGroceries(map<string, int> &groceryList, ifstream &groceryFile) {
    string groceryItem{};
    while (!groceryFile.eof()) {
        groceryFile >> groceryItem;
        auto groceryLocator = groceryList.find(groceryItem);
        if (groceryLocator == groceryList.end()) {
            groceryList.insert(pair<string, int>(groceryItem, 1));
        } else {
            groceryLocator->second += 1;
        }

    }
}

void printGroceryTotals(const map<string, int> &groceryList) {
    for (const auto &iter: groceryList) {
        cout << iter.first << " " << iter.second << endl;
    }
}
