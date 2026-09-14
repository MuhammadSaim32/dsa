#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        int currWindow = 0;
        bool Zero = false;
        int ans = 0;
        for (auto val : str)
        {

            if (val == '0')
            {
                Zero = true;
            }
            currWindow++;

            if (currWindow == k)
            {
                if (!Zero)
                {
                    ans += 1;
                }
                Zero = false;
                currWindow = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}