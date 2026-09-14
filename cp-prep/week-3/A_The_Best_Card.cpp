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
        bool flag = true;
        if ((n + 1) % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 3; i < n + 1; i += 2)
            {
                if ((n + 1) % i == 0)
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}