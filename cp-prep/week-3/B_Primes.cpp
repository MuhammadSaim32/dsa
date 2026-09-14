#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n - 2))
    {
        cout << 2 << " " << n - 2;
    }
    else
    {
        cout << -1;
    }

    return 0;
}