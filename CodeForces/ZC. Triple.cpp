#include <iostream>
#include <unordered_map>
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
        vector<int> arr;
        vector<int> ans;
        unordered_map<int, int> ma;
        for (int i = 0; i < n; i++)
        {

            int c;
            cin >> c;
            arr.push_back(c);
        }

        for (auto val : arr)
        {
            if (ma.find(val) != ma.end())
            {
                ma[val]++;
                if (ma[val] == 3)
                {
                    ans.push_back(val);
                }
            }
            else
            {
                ma[val] = 1;
            }
        }

        cout << (ans.size() > 0 ? ans[ans.size() - 1] : -1) << endl;
    }

    return 0;
}