#include <bits/stdc++.h>
using namespace std;

int main()
{

    string n1, n2;
    cin >> n1 >> n2;
    // cout << n1 << " " << n2;
    string ans = "";
    int n = n1.size();
    while (n--)
    {
        char digit1 = n1[n];
        char digit2 = n2[n];
        char curr = '/';

        if (digit1 != digit2)
        {
            curr = '1';
        }
        else
        {
            curr = '0';
        }
        ans += curr;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    // int ans = 0;
    // int mult = 1;

    // if (__builtin_popcount(n1) > __builtin_popcount(n2))
    // {
    //     while (n1 != 0)
    //     {
    //         int digit1 = n1 % 10;
    //         int digit2 = n2 % 10;
    //         n1 /= 10;
    //         n2 /= 10;
    //         int di = digit1 ^ digit2;
    //         ans += di * mult;
    //         mult *= 10;
    //     }
    // }
    // else
    // {
    //     while (n2 != 0)
    //     {
    //         int digit1 = n1 % 10;
    //         int digit2 = n2 % 10;
    //         n1 /= 10;
    //         n2 /= 10;
    //         int di = digit1 ^ digit2;
    //         ans += di * mult;
    //         mult *= 10;
    //     }
    // }
    // cout << ans;
    return 0;
}