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
    int N;
    cin >> N;
    vl arr(N, 0);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    vl ans;
    for (int i = 0; i < N; i++)
    {
        int prevSum = sum;
        int prevValue = arr[i];
        arr[i] = arr[i] * 2;
        sum = sum - prevValue;
        sum += arr[i];
        ans.pb(sum - *max_element(all(arr)));
        sum = prevSum;
        arr[i] = prevValue;
    }

    cout << *max_element(all(ans)) << endl;
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