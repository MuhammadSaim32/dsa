#include <bits/stdc++.h>
using namespace std;

int returnBestPart(vector<pair<int, int>> &arr, int index)
{

    int t = arr.size();
    while (t--)
    {
        int idx = arr[t].second;
        if (idx != index)
            return arr[t].first;
    }
    return -1;
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
        vector<pair<int, int>> sorted(n);
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            sorted[i] = {arr[i], i};
        }
        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = arr[i] - returnBestPart(sorted, i);
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}