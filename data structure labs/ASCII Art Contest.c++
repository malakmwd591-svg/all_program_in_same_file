#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int gemeni;
    int chat;
    int claude;

    cout << "Enter your three numbers: ";
    cin >> gemeni >> chat >> claude;

    int m = max({gemeni, chat, claude});
    int mn = min({gemeni, chat, claude});

    if (m - mn >= 10) {
        cout << "check again";
    }
    else {
        int median = gemeni + chat + claude - m - mn;
        cout << "final: " << median;
    }

    return 0;
}
