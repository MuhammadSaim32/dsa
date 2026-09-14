#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, t;
    cin >> n >> t;
    long long int st = 1;
    long long int end = 1;
    n -= 1;
    while (n--)
    {
        st *= 10;
    }

    end = st * 10;
    for (long long int i = st; i < end; i++)
    {

        if (i % t == 0)
        {
            cout << i;
            return 0;
            
        }
    }

    cout << -1;
    return 0;
}