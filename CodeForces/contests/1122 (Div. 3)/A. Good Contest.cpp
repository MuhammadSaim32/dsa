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
        vector<int> vec(3);
        for (int &x : vec)
            cin >> x;

        cout << n - *min_element(vec.begin(), vec.end()) << endl;
    }
    return 0;
}