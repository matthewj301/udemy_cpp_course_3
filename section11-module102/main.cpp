//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "stack"
#include "vector"

using namespace std;

void storeReverse(const string &, stack<char> &);

bool isPalindrome(const string &);

void printResult(const string &);

int main() {
    vector<string> palindromeList{"cool", "racecar", "yes", "toot", "civic", "tool"};
    for (const auto &str: palindromeList) {
        printResult(str);
    }


    return 0;
}

void storeReverse(const string &originalString, stack<char> &reverseStack) {
    for (char c: originalString) {
        reverseStack.push(c);
    }
}

bool isPalindrome(const string &originalString) {
    bool result{true};
    stack<char> reverseStack;
    storeReverse(originalString, reverseStack);

    if (originalString.length() == reverseStack.size()) {
        for (char c: originalString) {
            char currentChar = reverseStack.top();
            if (currentChar != c) {
                result = false;
                break;
            }
            reverseStack.pop();
        }

    } else {
        result = false;
    }
    return result;

}

void printResult(const string &originalString) {
    if (isPalindrome(originalString)) {
        cout << originalString << " is a palindrome!" << endl;
    } else {
        cout << originalString << " is not a palindrome :(" << endl;
    }

}