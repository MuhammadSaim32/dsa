#include <iostream>
#include <vector>
#include <algorithm>
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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int count = 0;
        int mn = *min_element(arr.begin(), arr.end());
        for (auto val : arr)
        {
            
                count += val - mn;
            
        }
        cout << count << endl;
    }
    return 0;
}