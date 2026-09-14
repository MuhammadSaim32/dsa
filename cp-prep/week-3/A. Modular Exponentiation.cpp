#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
    if (b == 0)
        return 1;
    int x = pow(a, b / 2);
    int ans = 0;
    if (b % 2 != 0)
    {
        ans = x * x * a;
        return ans;
    }
    ans = x * x;
    return ans;
}

int main()
{

    int n;
    int mod;
    cin >> n >> mod;

    cout << (n >= 27 ? mod : mod % (pow(2, n)));

    return 0;
}