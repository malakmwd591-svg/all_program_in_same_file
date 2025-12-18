#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, x, y;
        cin >> a >> x >> y;

        int mn = min(x, y);
        int mx = max(x, y);

        if (a > mn && a < mx)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
