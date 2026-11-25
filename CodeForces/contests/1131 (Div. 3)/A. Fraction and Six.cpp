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
    int m;
    cin >> n >> m;
    // debug(n);

    // if (m > n)
    // {
    //     cout << "NO" << endl;

    //     return;
    // }

    string p;

    string q;

    cin >> p >> q;

    unordered_map<char, int> ma;

    for (auto x : p)
        ma[x]++;

    for (auto x : q)
        ma[x]--;

    string ans = "";

    for (auto x : ma)
    {
        if (x.second != 0)
        {
            ans += x.first;
        }
    }

    sort(all(ans));
    string six = "six";

    sort(all(six));
    cout << (ans == six ? "YES" : "NO") << endl;
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