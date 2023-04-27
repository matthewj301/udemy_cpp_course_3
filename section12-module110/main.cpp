//
// Created by Matthew Johnson on 1/13/23.
//
#include "iostream"
#include "Node.h"

using namespace std;

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node* head);

int main() {
    Node* theHead;
    theHead = createChain();

    printChain(theHead);
    deleteChain(theHead);


    return 0;
}


// This can be confusing, but basically, the chain is linked by the "next" private attr of Node class.
// These heads are not directly linked or stored in a single container
Node* createChain() {
    Node* head = nullptr;

    for (int i {0}; i < 25; i++) {
        head = new Node(i, head);
    }
    return head;

}
void deleteChain(Node*& head) {
    Node* nodeToDelete;
    while (head != nullptr) {
        nodeToDelete = head;
        head = head->getNext();
        delete nodeToDelete;
    }


}
void printChain(Node* head) {
    Node* walker = head;
    int counter {0};
    while (walker != nullptr) {
        cout << walker->getData() << endl;
        walker = walker->getNext();
        counter++;
    }
    cout << "There were " << counter << " elements in this chain" << endl;

}