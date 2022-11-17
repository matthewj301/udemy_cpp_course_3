#include <iostream>
#include <sstream>
#include <array>
#include <map>
#include "string"
#include "vector"
#include "JamPackage.h"
using namespace std;


int main() {
    string package_name;
    int jams_purchased;
    cout << "Welcome to the Jam Package Store!" << endl;
    cout << "Please enter the name of the package you would like to purchase: ";
    cin >> package_name;
    auto *jam_package = new JamPackage(package_name);
    cout << "You have selected the " << jam_package->get_package_name() << " package." << endl;
    cout << "The " << jam_package->get_package_name() << " package costs $" << jam_package->get_monthly_cost() << " per month." << endl;
    cout << "The " << jam_package->get_package_name() << " package comes with " << jam_package->get_package_jam_quantity() << " jars of jam." << endl;
    cout << "Please enter the number of jams you would like to purchase: ";
    cin >> jams_purchased;
    cout << "Your total cost is: $" << jam_package->calculate_jam_cost(jams_purchased) << endl;


    return 0;
}
