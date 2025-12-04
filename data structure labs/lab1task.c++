
// code force 
// ex 1: 
#include <iostream>
using namespace std;

int main() {
    int gemeni;
    int chat;
    int claude;

    cout << "Enter your three numbers: ";
    cin >> gemeni >> chat >> claude;
    int m=max ({gemeni,chat,claude});
    int mn=min ({ gemeni,chat,claude});
    if(m-mn>=10){
        cout<<"check again"
    }
    else{
         int median = gemeni + chat + claude - mx - mn;
        cout << "final " << median;
    }

    return 0;



}


//ex 2:
#include <iostream>
using namespace std;
int main(){
    string s;
    string t;
    string test ;
    int q;
    cin>>q;

    for(int i=0; i<q;i++){
        int n;
        cin>>n;
        string s, t;
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

//ex 3:
#include <iostream>
using namespace std;

    int main(){
        int n1;
        int n2;
        int n3;
        int n4;

        cout<<"enter your 4 numbers";
        cin>>n1>>n2>>n3>>n4;
        if(n1 == n2 && n2 == n3 && n3 == n4){
            cout<<" yes this is a square"  << endl;

        }
        else{
            cout<<"no this is not"<< endl;
        }
        return 0;

            
        
    }

// ex4: Sequence Game   i dont understand 
#include <iostream>
using namespace std;

    int main(){
        int t;
        cin>>t;
        for( int i=0;i<t;i++){
            int n;
            cin>>n;

        }


    }
//ex5;  i took a look to undrstand the code on chat
//The Problem in Short
//You have a set of numbers, where some numbers can appear more than once (this is called a multiset).
//The goal: divide the numbers into groups (partitions).
#include <iostream>
using namespace std;
    int main(){

        int t;
        cin>>t;
        for(int test=0;test<n;test++){
            int n;
            cin>>n;
            int freq[100]={0};
             for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            freq[a]++;
        }

        int score = 0;
        if (freq[0] == 0) {
            score = 0;
        } else if (freq[1] == 0) {
            score = 1;
        } else {
            score = 2;
        }

        cout << score << endl;
    }

    return 0;
}
//ex6:

        
        
#include <iostream>
using namespace std;

int main() {
    int x ;
    int y;
    int m;
    int n;
    cin >> x >> y >> n >> m;

    int a[100]; 
    int b[100]; 

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int horizontal = 0;
    int vertical = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] < y) horizontal++;
    }

   
    for (int i = 0; i < m; i++) {
        if (b[i] > 0 && b[i] < x) vertical++;
    }

    int total_crossings = horizontal+ vertical;

    cout << total_crossings << endl;

    return 0;
}

//ex 7
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}



//ex8
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}

//ex9
#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count;
    return 0;
}


//ex10
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.find("++") != -1) {
            x++;
        } else {
            x--;
        }
    }

    cout << x;
    return 0;
}

//ex11
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;
    cout << rows * cols << '\n';
    return 0;
}

//ex12
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    cout << (M * N) / 2 << endl;
    return 0;
}
//ex13
#include <iostream>
using namespace std;

int main() {
    int n, k, score, threshold;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> score;
        if (i == k) threshold = score;
    }
    int count = 0;
    for (int i = 1; i <= k; i++) {
        if (score >= threshold && score > 0) count++;
    }
    for (int i = k + 1; i <= n; i++) {
        cin >> score;
        if (score >= threshold && score > 0) count++;
    }
    cout << count;
    return 0;
}
    
 //ex 14
 #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, val;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3);
    return 0;
}
// ex 15
#include <iostream>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) n /= 10;
        else n--;
    }

    cout << n;
    return 0;
}

//ex 16
#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y;
            break;
        }
    }
    return 0;
}

//ex17
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[j]) j++;
        if (j == 5) break;
    }
    if (j == 5) cout << "YES";
    else cout << "NO";
    return 0;
}
//ex18
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
        cout << (b - a % b) % b << endl;
    }
    return 0;
}

//ex19
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2) cout << "I hate";
        else cout << "I love";
        if(i == n) cout << " it";
        else cout << " that ";
    }
    return 0;
}





