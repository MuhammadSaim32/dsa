#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int ans = abs(a - b);
    cout << (ans % 2 == 0 ? ans / 2 : -1);
    return 0;
}