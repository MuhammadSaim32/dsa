#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> arr;

        for (int i = 0; i < a; i++)
        {
            int value;
            cin >> value;
            arr.push_back(value);
        }

        int mValue = *max_element(arr.begin(), arr.end());
        int minValue = *min_element(arr.begin(), arr.end());
        cout << mValue - minValue << endl;
    }

    return 0;
}
