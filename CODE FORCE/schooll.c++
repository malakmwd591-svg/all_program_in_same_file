#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string pair;
    cin >> pair;

    for (int second = 0; second < t; second++) {
        for (int i = 0; i < n - 1; i++) {
            if (pair[i] == 'B' && pair[i + 1] == 'G') {
                char temp = pair[i];
                pair[i] = pair[i + 1];
                pair[i + 1] = temp;
                i++;
            }
        }
    }

    cout << pair;
    return 0;
}
