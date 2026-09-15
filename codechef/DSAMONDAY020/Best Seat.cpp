#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<long long> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    long long avg = vec[0] + ((vec[vec.size() - 1] - vec[0]) / 2);

    long long ans = binary_search(vec.begin(), vec.end(), avg);
    if (ans)
    {
        cout << 30;
    }
    else
    {

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > avg)
            {
                idx = i;
                break;
            }
        }

        long long left = abs(avg - vec[idx - 1]);
        long long right = abs(avg - vec[idx]);
        if (left == right)
        {
            cout << min(vec[idx], vec[idx - 1]);
        }
        else
        {
            if (left > right)
            {
                cout << vec[idx];
            }
            else
            {
                cout << vec[idx - 1];
            }
        }
    }

    return 0;
}