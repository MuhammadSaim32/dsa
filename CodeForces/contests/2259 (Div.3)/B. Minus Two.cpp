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

        int odd = 0;
        int rem0 = 0;
        int rem2 = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x & 1)
                odd++;
            else if ((x / 2) & 1)
                rem0++;
            else
                rem2++;
        }

        cout << max({odd, rem0, rem2}) << '\n';
    }

    return 0;
}