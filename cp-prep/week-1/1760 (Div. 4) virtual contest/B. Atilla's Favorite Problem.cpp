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
        string msg;
        cin >> msg;
        int maxChar = INT_MIN;
        for (char ch : msg)
        {
            maxChar = max(maxChar, int(ch));
        }
        cout << maxChar-96 << endl;
    }
    return 0;
}