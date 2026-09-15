#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> veca(n);
    for (auto &x : veca)
    {
        cin >> x;
    }

    int m;
    cin >> m;
    vector<int> vecb(m);
    for (auto &x : vecb)
    {
        cin >> x;
    }
    unordered_map<int, int> ma;
    unordered_map<int, int> mb;
    for (auto x : veca)
    {
        ma[x]++;
    }
    for (auto x : vecb)
    {
        mb[x]++;
    }

    unordered_set<int> ans;
    for (auto x : vecb)
    {
        if (ma[x] < mb[x] && ans.find(x) == ans.end())
        {
            cout << x << " ";
            ans.insert(x);
        }
    }

    return 0;
}