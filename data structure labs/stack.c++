#include <iostream>
using namespace std;

const int MAX = 100;
int stackArr[MAX];
int top = -1;

void push(int x) {
    top++;
    stackArr[top] = x;
}

void pop() {
    if (top >= 0)
        top--;
}

void display() {
    for (int i = 0; i <= top; i++)
        cout << stackArr[i] ;
    cout << endl;
}

int main() {
    push(5);
    display();

    push(6);
    display();

    cout << stackArr[top] << endl;  
    pop();

    display();

    return 0;
}
