#include <iostream>
using namespace std;

/*
Note: Each pattern is implemented and tested sequentially by modifying the existing code below.
Problem 1, 2, & 3
Practice Problem 4 & 5
Problem 6: Triangle Patterns
Problem 7 & 8
Problem 9
Problem 10: Reverse triangle pattern
Problem 11 & 12: Floyd's Triangle Pattern
Problem 13: Inverted triangle pattern
Problem 14: Pyramid pattern
*/

int main() {
    int n;
    cin >> n;

    // Basic Square Patterns (Stars, Numbers, Alphabets)

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << char(j + 65) << " ";
    //     }
    //     cout << endl;
    // }

    // Continuous Square Pattern
    // Example Layout:
    // 1 2 3 
    // 4 5 6
    // 7 8 9

    // for(int i = 0; i < n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << char((n * i) + j + 96) << " ";
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for(int i = 0; i < n; i++) {
    //     for(int c = 0; c < i; c++) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= n - i; j++) {
    //         cout << num;
    //     }
    //     num++;      
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++) {
            cout << k;
        }
        for (int c = i; c > 0; c--) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
