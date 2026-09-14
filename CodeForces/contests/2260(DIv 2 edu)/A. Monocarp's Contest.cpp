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
        vector<int> vec(n);
        for (auto &x : vec)
            cin >> x;

        int l = 0;
        int r = n - 1;
        int ZeroCount = 0;
        for (auto x : vec)
        {
            if (x == 0)
            {
                ZeroCount++;
            }
        }

        if (vec[l] == 0 && vec[r] == 0)
        {
            cout << 0 << endl;
        }
        else if ((vec[l] == 0 || vec[r] == 0) && ZeroCount >= 2)
        {
            cout << 1 << endl;
        }
        else if (ZeroCount >= 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}