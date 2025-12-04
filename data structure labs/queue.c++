#include <iostream>
using namespace std;

const int MAX = 100;
int queue[MAX];
int front = 0;
int rear = -1;

void enqueue(int x) {
    rear++;
    queue[rear] = x;
}

void dequeue() {
    if (front <= rear)
        front++;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main() {
    enqueue(5);
    display();

    enqueue(6);
    display();

    cout << queue[front] << endl;
    dequeue();

    display();

    return 0;
}


    

