//
// Created by Matthew Johnson on 12/11/22.
//

#include "string"
#include "fstream"
#include "iostream"
#include "vector"
#include <numeric>

using namespace std;

const string scoresFilePath{"/Users/mjohnson/git/learning/udemy_cpp_course_3/section9-project1/scores.txt"};

double calculateVectorAverage(vector<int>);

int main() {
    const int MAX_SCORE_VALUE{100};
    const int MIN_SCORE_VALUE{0};
    ifstream scoresFile;

    vector<int> scores;

    int tmpScore{};
    int minScore{MAX_SCORE_VALUE};
    int maxScore{MIN_SCORE_VALUE};

    scoresFile.open(scoresFilePath);

    if (!scoresFile) {
        cout << "Ran into issues opening file, exiting..." << endl;
        return 1;
    }

    while (!scoresFile.eof()) {
        scoresFile >> tmpScore;
        if (tmpScore >= MIN_SCORE_VALUE && tmpScore <= MAX_SCORE_VALUE) {
            if (tmpScore > maxScore) {
                maxScore = tmpScore;
            }
            if (tmpScore < minScore) {
                minScore = tmpScore;
            }
            scores.push_back(tmpScore);
        } else {
            cout << "Bad int: " << tmpScore << endl;
        }
    }

    cout << "Max Score: " << maxScore << endl;
    cout << "Min score: " << minScore << endl;
    cout << "Average of all scores: " << calculateVectorAverage(scores) << endl;


    return 0;
}

double calculateVectorAverage(vector<int> vectorToAvg) {
    double vecSum{0};
    for (auto v: vectorToAvg) {
        vecSum += v;
    }
    return vecSum / vectorToAvg.size();
}