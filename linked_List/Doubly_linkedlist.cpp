#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
private:
    Node *head;
    Node *tail;

public:
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        if (head == NULL) {
            push_front(val);
        } else {
            Node *newNode = new Node(val);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout << "Doubly linked list is empty...\n";
            return;
        }

        Node *temp = head;
        if (temp->next != NULL) {
            head = temp->next;
            head->prev = NULL;
        } else {
            head = tail = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "Doubly linked list is empty...\n";
            return;
        }

        Node *temp = tail;
        if (temp->prev != NULL) {
            tail = temp->prev;
            tail->next = NULL;
        } else {
            head = tail = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }

    void printdll() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << "\n";
            temp = temp->next;
        }
    }
};

int main() {
    DoublyList dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.pop_back();
    dll.pop_front();

    dll.printdll();

    return 0;
}
