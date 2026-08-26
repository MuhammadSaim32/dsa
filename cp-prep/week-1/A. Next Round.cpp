#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    int kValue = vec[k - 1];
    int count = 0;
    for (auto val : vec)
    {
        if (val >= kValue && val > 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;

    return 0;
}