#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;

    sort(vec.begin(), vec.end());
    for (auto x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}