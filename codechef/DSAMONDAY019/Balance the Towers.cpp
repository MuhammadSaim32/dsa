#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n, k;

    cin >> n >> k;
    vector<long long int> vec(n);

    for (auto &x : vec)
        cin >> x;
    vector<long long int> ans;

    for (auto x : vec)
    {
        if (x - k >= 0)
        {
            ans.push_back(x - k);
        }
        ans.push_back(x + k);
    }
    long long int maxEl = *max_element(ans.begin(), ans.end());
    long long int minEl = *min_element(ans.begin(), ans.end());

    cout << maxEl - minEl << endl;

    return 0;
}