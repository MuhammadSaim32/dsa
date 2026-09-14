#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        if (str.find('1') < str.find('7'))
        {
            cout << "17" << endl;
        }
        else
        {
            cout << "71" << endl;
        }
    }
    return 0;
}