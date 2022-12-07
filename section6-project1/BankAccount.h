//
// Created by Matthew Johnson on 12/4/22.
//

#ifndef UDEMY_CPP_COURSE_3_BANKACCOUNT_H
#define UDEMY_CPP_COURSE_3_BANKACCOUNT_H

#include "string"
#include "iostream"

using namespace std;

class BankAccount {
private:
    string owner;
    double balance;
public:
    BankAccount(string);
    BankAccount(string, double);
    ~BankAccount();

    string getOwner() const;
    double getBalance() const;

    void deposit(double);
    void withdraw(double);

    void printBalance() const;
    void printAccountDetails() const;

};


#endif //UDEMY_CPP_COURSE_3_BANKACCOUNT_H
