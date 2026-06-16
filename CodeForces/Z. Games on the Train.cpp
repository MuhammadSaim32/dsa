#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            arr.push_back(s);
        }

        int mx = *max_element(arr.begin(), arr.end());
        int mn = *min_element(arr.begin(), arr.end());
        cout << (mx - mn) + 1 << endl;
    }

    return 0;
}