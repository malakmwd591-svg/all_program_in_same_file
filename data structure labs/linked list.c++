#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class linkedlist {
    Node* head;
public:
    linkedlist() {
        head = NULL;
    }

    void add_at_the_beginnig(int x) {
        Node* new_node = new Node;  
        new_node->data = x;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            new_node->next = head;
            head = new_node;
        }
    }

    void add_at_end(int x) {
        Node* new_node = new Node;
        new_node->data = x;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            return;
        }

        Node* end_element = head;
        while (end_element->next != NULL) {
            end_element = end_element->next;
        }
        end_element->next = new_node;
    }

    void add_at_the_location(int data, int position) {
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = NULL;

        if (position == 1) { 
            new_node->next = head;
            head = new_node;
            return;
        }

        Node* x = head;
        int c = 1;
        while (x != NULL && c < position - 1) {
            x = x->next;
            c++;
        }

        if (x != NULL) {
            new_node->next = x->next;
            x->next = new_node;
        }
    }

    void add_before_specific_node(int data, int value) {
        Node* new_node = new Node; 
        new_node->data = data;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            return;
        }

        if (head->data == value) {
            new_node->next = head;
            head = new_node;
            return;
        }

        Node* x = head;
        while (x->next != NULL && x->next->data != value) {
            x = x->next;
        }

        if (x->next != NULL) {
            new_node->next = x->next;
            x->next = new_node;
        } else {
            cout << "Value not found in list" << endl;
        }
    }

    void print_list() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};