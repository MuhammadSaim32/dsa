#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int cnt = 0;
        long long int prev = -1;
        long long int counter = 0;
        long long int ans = 0;
        long long int candi = 0;
        bool flag = true;
        for (long long int i = 1; i <= k; i++)
        {
            long long int emp = x + cnt;
            long long int pro = y + cnt;
            if (emp < pro)
            {
                long long int candi = pro % emp;
                ans += candi;

                if (prev == candi)
                {
                    counter++;
                }
                else
                {
                    counter = -1;
                }

                if (counter > 5)
                {
                    long long int remain = k - cnt - 1;
                    ans += remain * candi;
                    cout << ans << endl;
                    flag = false;
                    break;
                }
                counter++;
                prev = candi;
            }
            cnt++;
        }
        if (flag)
        {
            cout << ans << endl;
        }
    }
    return 0;
}