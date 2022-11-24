#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main() {
    int input_count {0};
    vector<string> names {};
    vector<int> weights {};
    string tmp_name {};
    int tmp_weight {0};

    while (input_count < 5) {
        cout << "Enter a full name: ";
        getline(cin, tmp_name);
        cout << "Enter " << tmp_name << "'s weight: ";
        cin >> tmp_weight;
        cin.get(); // consume newline char

        names.push_back(tmp_name);
        weights.push_back(tmp_weight);

        input_count++;
        cout << endl;
    }

    for (int i {0}; i < names.size(); i++) {
        cout << names[i] << " weighs " << weights[i] << "lbs." << endl;
    }



    return 0;
}
