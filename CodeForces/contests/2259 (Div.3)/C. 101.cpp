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
        while (l <= n - 1)
        {
            if (vec[l] == 1)
                break;
            if (vec[l] == -1)
            {
                vec[l] = 1;
                break;
            }
            l++;
        }

        while (r >= 0)
        {
            if (vec[r] == 1)
                break;
            if (vec[r] == -1)
            {
                vec[r] = 1;
                break;
            }
            r--;
        }

        for (int i = 0; i < n; i++)
        {
            if (vec[i] == -1)
            {
                vec[i] = 0;
            }
        }

        for (auto x : vec)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}