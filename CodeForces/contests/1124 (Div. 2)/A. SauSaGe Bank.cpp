#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define pob pop_back
#define ll long long
#define all(x) x.begin(), x.end()
#define allrev(x) x.rbegin(), x.rend()
#define endl '\n'

// Debug

#define debug(x) cerr << #x << " = " << x << '\n'
#define debugv(v)         \
    cerr << #v << ": ";   \
    for (auto x : v)      \
        cerr << x << ' '; \
    cerr << '\n'

using namespace std;

int pow(int a, int b)
{
    if (b == 0)
        return 1;
    int x = pow(a, b / 2);
    int ans = 0;
    if (b % 2 != 0)
    {
        ans = x * x * a;
        return ans;
    }
    ans = x * x;
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    ll ans = (k - 1) * 2;
    int p = n - (k - 1);
    ans += pow(2, p);
    cout << ans << endl;
    
    
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