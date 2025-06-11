#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << ((celsius * 9 / 5) + 32) << endl;
    return 0;
}
