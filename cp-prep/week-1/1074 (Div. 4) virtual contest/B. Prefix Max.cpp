#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxValue = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            maxValue = max(value, maxValue);
        }
        cout << maxValue * n << endl;
    }

    return 0;
}