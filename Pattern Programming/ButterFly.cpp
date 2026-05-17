#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        for (int c = 1; c <= 2 * (n - i) - 2; c++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        for (int c = 1; c <= i * 2; c++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}