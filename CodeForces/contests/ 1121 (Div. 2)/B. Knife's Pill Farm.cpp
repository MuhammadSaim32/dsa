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

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;

    vector<int> vec2(vec);

    sort(all(vec2));
    vector<int> ans;
    ans.pb(0);

    int orgVec = 0;
    int sorVec = 0;

    while (orgVec < n && sorVec < n)
    {
        if (ans.size() - 1 == m - 1)
            break;
            
        if (vec[orgVec] == vec2[sorVec])
        {
            ans.pb(vec[orgVec]);
            orgVec++;
            sorVec++;
        }
        else
        {

            orgVec++;
        }
    }

    int maxValue = *max_element(vec.begin() + orgVec, vec.end());
    ans.pb(maxValue);

    debugv(ans);
    ll sum = 0;
    for (int i = 1; i <= m; i++)
    {

        sum += i * (ans[i] - ans[i - 1]);
    }

    cout << sum << endl;
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