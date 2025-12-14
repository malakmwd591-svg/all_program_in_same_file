#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int index = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == target[index]) {
            index++;
        }
        if(index == 5) break;
    }

    if(index == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
