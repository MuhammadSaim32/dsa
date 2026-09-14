#include <bits/stdc++.h>
using namespace std;

bool isLucky(int digit)
{
    while (digit != 0)
    {
        int num = digit % 10;
        digit /= 10;
        if (!(num == 7 || num == 4))
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i))
        {
            if (n % i == 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}