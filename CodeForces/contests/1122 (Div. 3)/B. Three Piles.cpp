#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long value = a + c;
        if (abs(value - b) < abs(a - b))
        {
            cout << abs(a - b) << endl;
        }
        else
        {
            cout << abs(value - b) << endl;
        }
    }
    return 0;
}