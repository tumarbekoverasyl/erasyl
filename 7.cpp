#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest is " << (p * r * t / 100) << "." << endl;
    return 0;
}
