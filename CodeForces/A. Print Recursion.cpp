#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    cout << "I love Recursion" << "\n";
    return print(--n);
}

int main()
{

    int n;
    cin >> n;
    print(n);
    return 0;
}
