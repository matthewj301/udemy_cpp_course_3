#include <iostream>

using namespace std;

int main() {
   int a = 10;
   int b = 4;
   int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    int result = 10;

    result += 10; // result = result + 10;
    cout << result << endl;
    result -= 10; // result = result - 10;
    cout << result << endl;
    result ++;
    cout << result << endl;
    result --;
    cout << result << endl;
    ++ result;
    cout << result << endl;
    -- result;
    cout << result << endl;

    cout << "Sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "quotient: " << quotient << endl;
    cout << "remainder: " << remainder << endl;
    return 0;
}
