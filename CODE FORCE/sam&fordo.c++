#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string names[100];

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    bool nextToEachOther = false;
    for (int i = 0; i < n - 1; i++) {
        if ((names[i] == "sam" && names[i + 1] == "frodo") ||
            (names[i] == "frodo" && names[i + 1] == "sam")) {
            nextToEachOther = true;
            break;
        }
    }

    if (nextToEachOther)
        cout << "sam and frodo are next to each other";
    else
        cout << "sam and frodo are not next to each other";

    return 0;
}
