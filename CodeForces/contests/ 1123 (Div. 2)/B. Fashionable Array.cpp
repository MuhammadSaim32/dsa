#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define pob pop_back
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'

// Debug

#define debug(x) cerr << #x << " = " << x << '\n'
#define debugv(v)         \
                          \
    cerr << #v << ": ";   \
    for (auto x : v)      \
        cerr << x << ' '; \
    cerr << '\n'

using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> vec2;

    set<int> se;
    for (auto &x : vec)
    {
        cin >> x;
        se.insert(x);
    }

    for (auto x : se)
    {
        vec2.pb(x);
    }

    reverse(all(vec2));

    unordered_map<int, int> ma;
    int maxValue = 0;
    for (auto x : vec)
    {
        ma[x]++;
        maxValue = max(ma[x], maxValue);
    }

    for (int i = 1; i <= maxValue; i++)
    {
        for (auto x : vec2)
        {
            if (ma[x] > 0)
            {
                cout << x << " ";
                ma[x]--;
            }
        }
    }

    cout << endl;
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