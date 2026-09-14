#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int h;
    cin >> h;

    vector<int> vec(n);
    int ans = 0;
    for (auto &x : vec)
    {
        cin >> x;
        ans += x > h ? 2 : 1;
    }
    cout << ans;
    return 0;
}