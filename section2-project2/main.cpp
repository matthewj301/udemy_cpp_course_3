#include <iostream>
#include <sstream>
#include <array>
#include <map>
#include "string"
#include "vector"
using namespace std;


int main() {
    array<string, 3> adjectives;
    array<string, 2> occupations;
    map<string, string> name_dict;
    int name_count = 3;

    string placeName {};
    string clothing {};
    string hobby {};

    string adj_string {};
    cout << "Enter 3 adjectives: ";
    getline(cin, adj_string);

    string occ_string {};
    cout << "Enter 2 Occupations: ";
    getline(cin, occ_string);

    cout << "Enter the name of a place: ";
    cin >> placeName;

    cout << "Enter a hobby: ";
    cin >> hobby;

    cout << "Enter a type of clothing: ";
    cin >> clothing;

    pair<string, string> girlInput ("girl_name", "");
    cout << "Enter the name of a girl: ";
    cin >> girlInput.second;

    pair<string, string> boyInput ("girl_name", "");
    cout << "Enter the name of a boy: ";
    cin >> boyInput.second;

    pair<string, string> manInput ("man_name", "");
    cout << "Enter the name of a man: ";
    cin >> manInput.second;

    name_dict.insert(girlInput);
    name_dict.insert(boyInput);
    name_dict.insert(manInput);

    istringstream adj_stream(adj_string);
    while (adj_stream.good()) {
        for (int i {0}; i<=adjectives.size(); i++) {
            adj_stream >> adjectives[i];
        }
    }
    istringstream occ_stream(occ_string);
    while (occ_stream.good()) {
        for (int i {0}; i<=occupations.size(); i++) {
            occ_stream >> occupations[i];
        }
    }
    cout << "Your madlib is..." << endl;
    cout << "There once was a " << adjectives[0] << " girl named " << name_dict["girl_name"];
    cout << " who was a " << adjectives[1] << " " << occupations[0];
    cout << " in the Kingdom of " << placeName << ". She loved to wear " << clothing;
    cout << " and " << hobby << ". She wanted to marry the " << adjectives[2] << " ";
    cout << occupations[1] << " named " << name_dict["boy_name"] << "but her father, King ";
    cout << name_dict["man_name"] << " forbid her from seeing him." << endl;

    return 0;
}
