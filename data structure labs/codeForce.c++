//ex1:median check
#include <iostream>
using namespace std;

int main() {
    int gemeni, chat, claude;
    cin >> gemeni >> chat >> claude;

    int mx = max({gemeni, chat, claude});
    int mn = min({gemeni, chat, claude});

    if (mx - mn >= 10) {
        cout << "check again" << endl;
    } else {
        int median = gemeni + chat + claude - mx - mn;
        cout << "final " << median << endl;
    }

    return 0;
}
//ex2;square check
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    if (n1 == n2 && n2 == n3 && n3 == n4)
        cout << "yes this is a square" << endl;
    else
        cout << "no this is not" << endl;

    return 0;
}




//ex3: Sequence Game template
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
       
    }
    return 0;
}
 
//ex4:Multiset groups
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++){
        int n;
        cin >> n;
        int freq[101] = {0};
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            freq[a]++;
        }

        int score = 0;
        if(freq[0] == 0) score = 0;
        else if(freq[1] == 0) score = 1;
        else score = 2;

        cout << score << endl;
    }
    return 0;
}

//ex 5:Crossings
#include <iostream>
using namespace std;

int main() {
    int x, y, n, m;
    cin >> x >> y >> n >> m;

    int a[100], b[100];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int horizontal = 0, vertical = 0;
    for(int i = 0; i < n; i++) if(a[i] > 0 && a[i] < y) horizontal++;
    for(int i = 0; i < m; i++) if(b[i] > 0 && b[i] < x) vertical++;

    int total_crossings = horizontal + vertical;
    cout << total_crossings << endl;

    return 0;
}

//ex 6:
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if(w % 2 == 0 && w > 2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

//ex7:Word abbreviation
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        if(word.length() > 10)
            cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
        else
            cout << word << endl;
    }
    return 0;
}
//ex 8:Team problems solved
#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a + b + c >= 2) count++;
    }
    cout << count << endl;
    return 0;
}


//ex9 :  Theatre Square
#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;
    cout << rows * cols << endl;
    return 0;
}


//ex10:Domino Piling
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    cout << (M * N) / 2 << endl;
    return 0;
}


//ex 11:
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    cout << (M * N) / 2 << endl;
    return 0;
}
//ex11:Hulk
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2) cout << "I hate";
        else cout << "I love";
        if(i == n) cout << " it\n";
        else cout << " that ";
    }
    return 0;
}
//ex12:Modulo
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;   
        long long steps;
        
        if(remainder == 0) 
            steps = 0;  
            steps = b - remainder;  

        cout << steps << endl;
    }

    return 0;
}
//ex13:Chat room “hello”
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


//ex 14:Next Round
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, val;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> val;
            if(val == 1){ x = i; y = j; }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << endl;
    return 0;
}
