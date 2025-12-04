#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top; 
public:
    Stack() { top = NULL; }

    void push(int x) {
        Node* new_node = new Node;
        new_node->data = x;
        new_node->next = top;
        top = new_node;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();   

    s.pop();
    s.display();   

    return 0;
}