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
#define debugv(v)             \
    {                         \
        cerr << #v << ": ";   \
        for (auto x : v)      \
            cerr << x << ' '; \
        cerr << '\n'          \
    }

using namespace std;

void solve()
{

    int n;
    cin >> n;
    char c;

    cin >> c;

    string s;
    cin >> s;
    // debug(s);
    // debug(c);
    // debug(n);
    int i = 0;
    int j = n - 1;
    int ans = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            if (s[i] == c || s[j] == c)
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
        i++;
        j--;
    }

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