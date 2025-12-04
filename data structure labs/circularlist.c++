#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularList {
public:
    Node* head;

    CircularList() {
        head = NULL;
    }

    void add_at_beginning(int x) {
        Node* new_node = new Node;
        new_node->data = x;

        if (head == NULL) {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void add_at_end(int x) {
        Node* new_node = new Node;
        new_node->data = x;

        if (head == NULL) {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = new_node;
        new_node->next = head;
    }

    void add_at_position(int x, int pos) {
        if (pos == 1) {
            add_at_beginning(x);
            return;
        }

        Node* new_node = new Node;
        new_node->data = x;

        Node* temp = head;
        int c = 1;

        while (c < pos - 1 && temp->next != head) {
            temp = temp->next;
            c++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void delete_at_beginning() {
        if (head == NULL) return;
        //lw 3ndha one element

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }
        //lw feha akter mn element(a5er element y4awr 3ala el tane w d3den n8ir el head w b3den n3ml delete)


        Node* temp = head;

        Node* last = head;
        while (last->next != head)
            last = last->next;

        last->next = head->next;
        head = head->next;
        delete temp;
    }

    void delete_at_end() {
        if (head == NULL) return;

        if (head->next == head) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;
        //by2f abl a5er element
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }

    void delete_at_position(int pos) {
        if (head == NULL) return;

        if (pos == 1) {
            delete_at_beginning();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;
        int c = 1;

        while (c < pos && temp->next != head) {
            prev = temp;
            temp = temp->next;
            c++;
        }

        prev->next = temp->next;
        delete temp;
    }

    void print() {
        if (head == NULL) {
            cout << "List is empty";
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }
};























































