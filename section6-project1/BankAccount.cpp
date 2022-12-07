//
// Created by Matthew Johnson on 12/4/22.
//

#include "BankAccount.h"
#include <utility>

BankAccount::BankAccount(string ownerName) {
    owner = std::move(ownerName);
    balance = 0;
}

BankAccount::BankAccount(string ownerName, double initialBalance) {
    if (initialBalance > 0) {
        owner = std::move(ownerName);
        balance = initialBalance;
    } else {
        cout << "Bank Account Creation Failed: You cannot create a "
                "new Bank Account with a balance of 0 or a negative number." << endl;
    }
}

BankAccount::~BankAccount() {
    cout << "Closing " << owner << "'s account..." << endl;
}

string BankAccount::getOwner() const {
    return owner;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::deposit(double depositAmount) {
    if (depositAmount > 0) {
        balance += depositAmount;
        cout << "Deposit Successful." << endl;
        printBalance();
    }else if (depositAmount == 0) {
        cout << "Deposit failed: You cannot deposit an amount of 0." << endl;
    } else {
        cout << "Deposit failed: You cannot deposit negative amounts." << endl;
    }
}

void BankAccount::withdraw(double withdrawAmount) {
    if (withdrawAmount > 0) {
        if (withdrawAmount <= getBalance()) {
            balance -= withdrawAmount;
            cout << "Withdrawal Successful." << endl;
            printBalance();
        } else {
            cout << "Withdrawal Failed: You cannot withdraw more than your balance" << endl;
            printBalance();
        }
    }else if (withdrawAmount == 0) {
        cout << "Withdrawal Failed: You cannot withdraw an amount of 0." << endl;
    } else {
        cout << "Withdrawal Failed: You cannot withdraw negative amounts." << endl;
    }
}

void BankAccount::printBalance() const {
    cout << "Balance: $" << getBalance() << endl << endl;
}

void BankAccount::printAccountDetails() const {
    cout << "Account owner: " << getOwner() << endl;
    cout << "Account balance: $" << getBalance() << endl;
    cout << endl;
}