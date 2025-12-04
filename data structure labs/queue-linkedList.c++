// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class Queue {
//     Node* front;
//     Node* rear;
// public:
//     Queue() {
//         front = rear = NULL;
//     }

//     void enqueue(int x) {
//         Node* new_node = new Node;
//         new_node->data = x;
//         new_node->next = NULL;
//         if (rear == NULL) {
//             front = rear = new_node;
//             return;
//         }
//         rear->next = new_node;
//         rear = new_node;
//     }

//     void dequeue() {
//         if (front == NULL) {
//             cout << "Queue is empty";
//             return;
//         }
//         Node* temp = front;
//         front = front->next;
//         if (front == NULL)
//             rear = NULL;
//         delete temp;
//     }

//     void display() {
//         Node* temp = front;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.display();
//     q.dequeue();
//     q.display();
//     return 0;
// }