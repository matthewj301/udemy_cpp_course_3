//
// Created by Matthew Johnson on 12/11/22.
//
#include "iostream"
#include "fstream"
#include "iomanip"

using namespace std;

void printFormatted(ofstream &, int);

int main() {

    ofstream outfile;
    int topNum {};

    cout << "How high do u want to go? ";
    cin >> topNum;

    cout << "Writing to file!" << endl;

    outfile.open("output.txt");
    outfile << fixed << showpoint;
    cout << fixed << showpoint;

    printFormatted(outfile, topNum);

    outfile.close();

    cout << "Donzo!";

    return 0;
}

void printFormatted(ofstream &outfile, int highNum) {
    for (int i {0}; i <= highNum; i++) {
        outfile << setw(12) << setprecision(2) << (i * 5.2)
        << setw(12) << setprecision(3) << (i * 3.14159) << endl;


        cout << setw(12) << setprecision(2) << (i * 5.2)
        << setw(12) << setprecision(3) << (i * 3.14159) << endl;
    }
}
