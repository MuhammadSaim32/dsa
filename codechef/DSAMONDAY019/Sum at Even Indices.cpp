#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    int ans = 0;
    for (auto &x : vec)
        cin >> x;
    for (int i = 0; i < vec.size(); i += 2)
    {

        if (vec[i] > (2 * k))
        {
            ans += vec[i];
        }
    }
    cout << ans << endl;
    return 0;
}