#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularList {
private:
    Node *head;
    Node *tail;

public:
    CircularList() {
        head = tail = NULL;
    }

    void insertAtHead(int val) {
        Node *newNode = new Node(val); 
        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void deleteAtHead() {
        if (head == NULL) {
            cout << "Circular Linked List is empty.\n";
            return;
        }

        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }

    void deleteAtTail() {
        if (head == NULL) {
            cout << "Circular Linked List is empty.\n";
            return;
        }

        if (head == tail) {
            delete tail;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        temp->next = head;
        delete tail;
        tail = temp;
    }

    void printcll() {
        if (head == NULL) {
            cout << "Circular Linked List is empty.\n";
            return;
        }

        Node *temp = head;
        do {
            cout << temp->data << "\n";
            temp = temp->next;
        } while (temp != head);
    }
};

int main() {
    CircularList cll;

    cll.insertAtHead(1);
    cll.insertAtHead(1);
    cll.deleteAtHead();
    cll.deleteAtTail();
    cll.insertAtHead(1);

    cll.printcll();

    return 0;
}
