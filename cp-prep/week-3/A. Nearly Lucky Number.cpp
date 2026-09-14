#include <bits/stdc++.h>
using namespace std;

bool isLucky()
{
}

int main()
{

    string n;
    cin >> n;
    int cnt = 0;
    for (auto &x : n)
    {
        if (x == '7' || x == '4')
            cnt++;
    }
    cout << (cnt == 7 || cnt == 4 ? "YES" : "NO");
    return 0;
}