#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (auto &x : vec)
            cin >> x;
        int cnt = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != i + 1)
            {
                cnt++;
                ans.push_back(vec[i]);
            }
        }

        reverse(ans.begin(), ans.end());

        if (cnt == 0 && n == 1)
        {
            cout << "YES" << endl;
        }
        else if (isSorted(ans))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}