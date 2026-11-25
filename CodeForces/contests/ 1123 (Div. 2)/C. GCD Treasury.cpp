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

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a < b)
        {
            b = b % a;
        }
        else
        {
            a = a % b;
        }
    }

    if (a == 0)
        return b;
    return a;
}

void solve()
{
    int n;
    cin >> n;
    int value;
    cin >> value;
    vector<int> vec(n);
    int Even = 0;
    int Odd = 0;

    for (auto &x : vec)
    {
        cin >> x;
        if (x & 1)
        {
            Odd += x;
        }
        else
        {
            Even += x;
        }
    }

    if (value == 1)
    {
        cout << 0 << endl;
        return;
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