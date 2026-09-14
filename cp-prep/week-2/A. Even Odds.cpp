#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, k;
    cin >> n >> k;

    long long int even = n / 2;
    long long int odd = n - even;
    if (k <= odd)
    {
        cout << 2 * k - 1;
    }
    else
    {
        k = k - odd;
        cout << 2 * k + 0;
    }
    return 0;
}