#include <iostream>
using namespace std;

int main() {
    int gemeni, chat, claude;
    cin >> gemeni >> chat >> claude;

    int mx = gemeni, mn = gemeni;

    if (chat > mx) mx = chat;
    if (chat < mn) mn = chat;
    if (claude > mx) mx = claude;
    if (claude < mn) mn = claude;

    if (mx - mn >= 10)
        cout << "check again\n";
    else {
        int median = gemeni + chat + claude - mx - mn;
        cout << "final " << median << "\n";
    }

    return 0;
}
