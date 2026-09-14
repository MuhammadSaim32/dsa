#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;

    for (char x : s)
    {
        if (x == '1')
        {
            one++;
            zero = 0;
        }
        else
        {
            zero++;
            one = 0;
        }

        if (one >= 7 || zero >= 7)
        {
            break;
        }
    }

    cout << ((zero >= 7 || one >= 7) ? "YES" : "NO") << endl;

    return 0;
}