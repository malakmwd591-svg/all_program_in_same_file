#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    cout << "Enter num3: ";
    cin >> c;
    cout << "Enter num4: ";
    cin >> d;

    int product = a * b * c * d;
    cout << "The combinations is: " << product << "\n";

    return 0;
}
