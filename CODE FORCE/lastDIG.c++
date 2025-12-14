#include <iostream>
using namespace std;

bool last_dig(int a, int b, int c) {
    int last_a = a % 10;
    int last_b = b % 10;
    int last_c = c % 10;

    return (last_a * last_b) % 10 == last_c;
}

int main() {
    int a, b, c;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    cout << "Enter num3: ";
    cin >> c;

    if (last_dig(a, b, c))
        cout << "true";
    else
        cout << "false";

    return 0;
}
