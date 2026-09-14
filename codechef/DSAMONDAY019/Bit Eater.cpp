#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;
    int m;
    cin >> m;
    for (auto x : vec)
    {
        cout << (x >> m) << " ";
    }
    cout << endl;
    return 0;
}