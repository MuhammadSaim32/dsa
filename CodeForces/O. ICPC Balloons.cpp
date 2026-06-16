#include <iostream>
#include <unordered_set>
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
        unordered_set<char> se;
        int count = 0;
        for (char val : s)
        {
            if (se.find(val) == se.end())
            {
                se.insert(val);
                count += 2;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
