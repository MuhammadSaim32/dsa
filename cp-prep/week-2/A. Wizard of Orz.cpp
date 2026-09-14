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

        int lastNumber = 0;

        if (n == 1)
        {
            cout << 9;
        }

        if (n == 2)
        {
            cout << 98;
        }

        if (n == 3)
        {
            cout << 989;
        }

        if (n > 3)
        {

            cout << 989;
            n = n - 3;
            while (n--)
            {
                cout << lastNumber;
                if (lastNumber == 9)
                {
                    lastNumber = -1;
                }
                lastNumber++;
            }
        }

        cout << endl;
    }
    return 0;
}