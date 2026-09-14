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
        string s1, s2;
        cin >> s1 >> s2;
        int a1 = 0;
        int b2 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'a')
                a1++;
            if (s2[i] == 'b')
                b2++;
        }

        cout << (a1 == b2 ? "YES" : "NO") << endl;
    }

    return 0;
}