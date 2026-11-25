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

int returnSize(int idx, string s)
{
    unordered_map<char, vi> ma;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        ma[s[i]].push_back(i);
    }

    int ans = 0;
    for (auto x : ma)
    {
        int n = x.second.size();
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {

            if ((x.second[i] - x.second[i - 1]) == 1)
            {
                cnt++;
            }
        }

        ans += x.second.size() - cnt;
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, vi> ma;

    for (int i = 0; i < n; i++)
    {
        ma[s[i]].push_back(i);
    }

    int ans = 0;
    for (auto x : ma)
    {
        int n = x.second.size();
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {

            if ((x.second[i] - x.second[i - 1]) == 1)
            {
                cnt++;
            }
        }

        ans += x.second.size() - cnt;
    }
    // debug(ans);

    int cnt = ans;
    for (int i = 1; i < n - 1; i++)
    {
        int p = 0;

        if ((s[i] != s[i - 1] && s[i] != s[i + 1]))
        {
            p++;

            if (s[i + 1] == s[i - 1])
            {
                p++;
            }
        }

        // debug(p);

        cnt = min(cnt, ans - p);
    }

    cout << (cnt == n ? cnt - 1 : cnt) << endl;
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