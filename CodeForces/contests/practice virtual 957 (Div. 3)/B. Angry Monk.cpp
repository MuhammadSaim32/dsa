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
    int k;
    cin >> n;
    cin >> k;
    
    vi vec(k);
    int ans = 0;

    for (auto &x : vec)
        cin >> x, ans += x;

    sort(all(vec));

    for (int i = 0; i < k - 1; i++)
    {

        if (vec[i] > 1)
        {
            ans += vec[i] - 1;
        }
    }

    cout << ans - vec[k - 1] << endl;
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