#include<iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front, end;

public:
    Queue() {
        front = end = -1;
    }

    void push(int val) {
        if (end == 4) {
            cout << "Queue is full...\n";
            return;
        }

        if (front == -1) {
            front = 0;
            end = 0;
        } else {
            end++;
        }

        arr[end] = val;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty...\n";
            return;
        }

        cout << arr[front++] << " ";

        if (front > end) {
            front = end = -1;
        }
    }

    bool empty() {
        return front == -1;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);


    while (!q.empty()) {
        q.pop();
    }

    return 0;
}
