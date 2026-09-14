#include <bits/stdc++.h>
using namespace std;

pair<bool, int> isCandi(int target, int idx, vector<int> &arr)
{
    int i = idx;
    int j = idx;

    // left loop
    while (j > 0 && arr[j] == arr[j - 1])
    {
        j--;
    }

    // right loop
    while (i < arr.size() - 1 && arr[i] == arr[i + 1])
    {
        i++;
    }

    if (j > 0 && arr[j - 1] <= arr[j])
    {
        return {false, i};
    }

    if (i < arr.size() - 1 && arr[i + 1] <= arr[i])
    {
        return {false, i};
    }

    return {true, i};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            pair<bool, int> val = isCandi(arr[i], i, arr);
            if (val.first)
            {
                ans.push_back(arr[i]);
            }
            i = val.second ;
        }

        cout << (ans.size() == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}