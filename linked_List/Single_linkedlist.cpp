#include <iostream>
using namespace std;

// indiviual nodes of linked list
class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// to combine all nodes  we use list class
class List {
private:
    Node *head;
    Node *tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val); //creates dynamic object
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            cout << "Linked List is Empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "Linked List is Empty";
            return;
        }
        Node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail; // interneal heap storeage is delted by delete keyword not delete variable
        tail = temp;
    }

    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "invalid position";
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid Postion";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int Search(int val) {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == val) {
                cout << "value found:" << temp->data;
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    void printll() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->next << " ";
            temp = temp->next;
        }

    }
};

int main() {
    List ll;
ll.push_back(1);
ll.push_back(2);
ll.push_back(3);
ll.push_back(4);
ll.printll();
    return 0;
}

// Notes
// new and delete in C++
//     new keyword:
//         Allocates memory dynamically on the heap and returns a pointer to it. It's used when you don't know the size of memory needed at compile time.

//     Syntax:

//         int* ptr = new int;           // allocate memory for 1 int
//         int* arr = new int[5];        // allocate memory for array of 5 ints

//     delete keyword:
//         Frees the memory allocated by new. 

//     Syntax:

//         delete ptr;        // free memory for single variable
//         delete[] arr;      // free memory for array
