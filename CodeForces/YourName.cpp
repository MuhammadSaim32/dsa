#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        vector<int> gFreq(27, 0);
        vector<int> strFreq(27, 0);

        for (int i = 0; i < n; i++)
        {
            strFreq[s[i] - 'a']++;
        }

        for (int i = 0; i < n; i++)
        {
            gFreq[t[i] - 'a']++;
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (strFreq[s[i] - 'a'] != gFreq[s[i] - 'a'])
            {
                flag = false;
                cout << "NO"<<endl;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"<<endl;
        }
    }

    return 0;
}