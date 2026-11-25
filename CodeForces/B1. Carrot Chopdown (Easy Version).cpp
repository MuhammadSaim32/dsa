#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define pob pop_back
#define ll long long
#define all(x) x.begin(), x.end()
#define allrev(x) x.rbegin(), x.rend()
#define endl '\n'
#define vi vector<int>
#define vl vector<ll>

// Debug

#define debug(x) cerr << #x << " = " << x << '\n'
#define debugv(v)         \
    cerr << #v << ": ";   \
    for (auto x : v)      \
        cerr << x << ' '; \
    cerr << '\n'

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> vec(n);
    vector<int> freq(m + 1);
    for (auto &x : vec)
    {
        cin >> x;
        freq[x]++;
    }
    vector<int> suffix(m + 2);
    for (int i = m; i >= 1; i--)
    {
        suffix[i] = freq[i] + suffix[i + 1];
    }

    int ans = INT_MIN;
    for (int i = 1; i <= m; i++)
    {
        int x = suffix[i];
        if ((2 * i) <= m)
        {
            x += freq[2 * i];
        }

        ans = max(ans, x);
    }
    cout << ans << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}