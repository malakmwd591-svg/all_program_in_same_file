#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter first number: ";
    cin >> m;
    cout << "Enter second number: ";
    cin >> n;

    int half_product = (m * n) / 2;
    cout << "Result: " << half_product;

    return 0;
}
