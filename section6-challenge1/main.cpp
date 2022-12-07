#include <iostream>
#include <array>

using namespace std;

class House {
private:
    int numStories;
    int numWindows;
    string color;
public:
    int getNumStories() const {
        return this->numStories;
    }

    int getNumWindows() const {
        return this->numWindows;
    }

    string getColor() const {
        return this->color;
    }

    void setNumStores(int numStories) {
        this->numStories = numStories;
    }

    void setNumWindows(int numWindows) {
        this->numWindows = numWindows;
    }

    void setColor(string color) {
        this->color = color;
    }
};

void printHouseData(const House&);

int main() {
    cout << boolalpha;

    House myHouse;
    House yourHouse;

    myHouse.setColor("Green");
    myHouse.setNumStores(5);
    myHouse.setNumWindows(12);
    yourHouse.setColor("Black");
    yourHouse.setNumStores(3);
    yourHouse.setNumWindows(6);

    printHouseData(myHouse);
    printHouseData(yourHouse);

    return 0;
}

void printHouseData(const House& house) {
    cout << "My house is " << house.getColor() << " and has "
         << house.getNumStories() << " stories and "
         << house.getNumWindows() << " windows." << endl;
}