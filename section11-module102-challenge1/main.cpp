//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "queue"
#include "vector"

using namespace std;

queue<string> generateQueue(const vector<string> &);
void moveThroughQueue(queue<string> &);
void printQueueMovement(const vector<string> &);


int main() {

    vector<string> people {"John", "Sally", "Bob", "Sam", "Ali", "Karen"};
    printQueueMovement(people);

    return 0;
}

queue<string> generateQueue(const vector<string> &personList) {
    queue<string> personQueue;
    for (const auto& person: personList) {
        cout << person << " added to queue." << endl;
        personQueue.push(person);
    }
    return personQueue;
}

void moveThroughQueue(queue<string> &personQueue) {
    personQueue.pop();
}

void printQueueMovement(const vector<string> &personList) {
    queue<string> masterPersonQueue = generateQueue(personList);
    cout << "The queue length is " << masterPersonQueue.size() << endl;
    while (!masterPersonQueue.empty()) {
        cout << masterPersonQueue.front() << " is up the the queue!" << endl;
        moveThroughQueue(masterPersonQueue);
        cout << "The queue length is now " << masterPersonQueue.size() << endl << endl;
    }
}