#include <bits/stdc++.h>
using namespace std;


void solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;
    int z = 0;
    int o = 0;

    for (auto x : str)
    {
        if (x == '0')
            z++;
    }
    if (str[0] == '1')
    {
        cout << z << endl;
        return;
    }

    int ans = INT_MAX;
    for (auto x : str)
    {
        o += (x == '1');
        z -= (x == '0');
        ans = min(ans, o + z);
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}