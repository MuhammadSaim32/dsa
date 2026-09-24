#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define pob pop_back
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'

// Debug

#define debugv(v)         \
    cerr << #v << ": ";   \
    for (auto x : v)      \
        cerr << x << " "; \
    cerr << '\n';

#define debug(x) cerr << #x << " = " << x << '\n';

using namespace std;

bool isSorted(vector<ll> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
            return false;
    }

    return true;
}

void solve()
{

    int a;
    cin >> a;
    vector<ll> vec(a);
    for (auto &x : vec)
        cin >> x;

    int l = -1;
    int r = -1;
    for (int i = 0; i < a - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            if (l == -1)
                l = i;

            r = i + 1;
        }
    }

    if (l == -1)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
        return;
    }

    reverse(vec.begin() + l, vec.begin() + r + 1);

    if (isSorted(vec))
    {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1;
        return;
    }

    cout << "no";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}