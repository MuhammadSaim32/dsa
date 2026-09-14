#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
int feb(int x, unordered_map<long long int, long long int> &ma)
{
    if (x == 1 || x == 2)
        return 1;
    if (ma.find(x) != ma.end())
        return ma[x];
    ma[x] = ((feb(x - 1, ma) % MOD) + (feb(x - 2, ma) % MOD)) % MOD;
    return ma[x];
}
int main()
{

    long long int n, q;
    cin >> n >> q;
    vector<long long int> vec(n);
    for (auto &x : vec)
        cin >> x;

    unordered_map<long long int, long long int> ma;
    for (auto &x : vec)
    {
        x = feb(x, ma);
    }

    for (int i = 1; i < n; i++)
    {
        vec[i] = ((vec[i - 1] % MOD) + (vec[i] % MOD)) % MOD;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l = l - 1;
        r = r - 1;

        if (l - 1 >= 0)
        {
            int ans = (vec[r] - vec[l - 1] + MOD) % MOD;

            cout << ans << endl;
        }
        else
        {
            int ans = vec[r];

            cout << ans << endl;
        }
    }
    return 0;
}