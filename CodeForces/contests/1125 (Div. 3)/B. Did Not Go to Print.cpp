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
    string commands;
    cin >> commands;
    stack<int> s;
    vi vec;
    for (int i = 0; i < n; i++)
    {
        if (commands[i] == '1')
        {
            s.push(i + 1);
            continue;
        }

        if (commands[i] == '3')
            continue;

        if (commands[i] == '2' && s.size() == 0)
            continue;

        s.pop();

        vec.pb(i + 1);
    }

    cout << vec.size() + s.size() << endl;
    while (s.size() != 0)
    {
        vec.pb(s.top());
        s.pop();
    }
    sort(all(vec));

    for (auto x : vec)
    {
        cout << x << " ";
    }

    cout << endl;
    if (vec.size() == 0)
    {
        cout << "  " << endl;
    }
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