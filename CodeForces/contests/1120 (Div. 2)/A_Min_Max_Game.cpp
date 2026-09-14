#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int One = 0;
        int Zero = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
                One++;
        }
        Zero = n - One;
        cout << (One >= Zero ? "Bessie" : "Elsie") << endl;
    }
    return 0;
}