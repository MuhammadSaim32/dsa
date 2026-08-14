#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    cout << (w % 2 == 0 && w != 2 ? "YES" : "NO") << endl;
    return 0;
}

// test code on edge case from small to higest step by step