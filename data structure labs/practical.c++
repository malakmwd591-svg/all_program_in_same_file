// input/output questions
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cin >> name >> age;
    cout << "Name: " << name << " Age: " << age << endl;
    return 0;
}

 

//ex2
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}


//ex3
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double g1, g2, g3;
    cout << "Enter your 3 grades: ";
    cin >> g1 >> g2 >> g3;
    double average = (g1 + g2 + g3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;
    return 0;
}



//ex4
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double c;
    cout << "Enter your number in Celsius: ";
    cin >> c;
    double f = c * 9 / 5 + 32;
    cout << fixed << setprecision(2);
    cout << "Your number in Fahrenheit is: " << f << endl;
    return 0;
}


//ex5
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item;
    int qty;
    double price;
    cin >> item >> qty >> price;
    double total = qty * price;
    cout << fixed << setprecision(2);
    cout << "Total: " << total << endl;
    return 0;
}



//ex6
#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    cout << "Enter your three words: ";
    cin >> a >> b >> c;
    cout << c << " " << b << " " << a << endl;
    return 0;
}

//ex7
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int qty;
    double unit;

    cout << "Enter product name, quantity, and unit price: ";
    cin >> name >> qty >> unit;

    double total = qty * unit;

    cout << fixed << setprecision(2);
    cout << "Item: " << name << endl;
    cout << "Qty: " << qty << endl;
    cout << "Unit: " << unit << endl;
    cout << "Total: " << total << endl;

    return 0;
}

//ex8
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cout << "Enter your radius: ";
    cin >> r;
    const double pi = 3.141592653589793;
    double area = pi * r * r;
    double circ = 2 * pi * r;
    cout << fixed << setprecision(2);
    cout << "Area: " << area << " Circ: " << circ << endl;
    return 0;
}



//ex9
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m1, m2, m3, m4, m5;
    cout << "Enter 5 subject marks: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    double percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;
    cout << fixed << setprecision(2);
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}


//if condetion
//ex1:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}

//ex2:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}

// ex3:
#include <iostream>
using namespace std;

int main() {
    int g;
    cout << "Enter your grade: ";
    cin >> g;

    if (g >= 60)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}

//ex4:
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << endl;
    else
        cout << b << endl;

    return 0;
}


//ex5:
#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter a year: ";
    cin >> y;

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;

    return 0;
}


//ex6:
#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your numeric grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100)
        cout << "A" << endl;
    else if (grade >= 80)
        cout << "B" << endl;
    else if (grade >= 70)
        cout << "C" << endl;
    else if (grade >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;
}

//ex7:
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}


//loops 
//ex 1:
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " "; 
        cout << i;              
    }

    cout << endl; 
    return 0;
}