#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> ma;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (ma.find(s[i]) != ma.end())
            {
                if (ma[s[i]] != i - 1)
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
                else
                {
                    ma[s[i]] = i;
                }
            }
            else
            {
                ma[s[i]] = i;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}