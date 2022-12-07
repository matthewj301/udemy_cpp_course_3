//
// Created by Matthew Johnson on 12/4/22.
//
#include "BankAccount.h"

int main() {
    BankAccount acct1 {"Matthew"};
    BankAccount acct2 {"Katie", 103.23};

    acct1.printAccountDetails();
    acct2.printAccountDetails();

    acct1.deposit(10.23);
    acct1.printAccountDetails();

    acct1.withdraw(5.14);
    acct1.printAccountDetails();

    acct1.deposit(0);
    acct1.deposit(-23);

    acct2.withdraw(50);
    acct2.printAccountDetails();
    acct2.withdraw(150);


    return 1;
}