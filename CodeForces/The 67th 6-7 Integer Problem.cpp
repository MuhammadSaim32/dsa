#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        pair<int, int> Max = {INT_MIN, -1};
        for (int i = 0; i < 7; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (Max.first < a)
            {
                Max.first = a;
                Max.second = i;
            }
        }
        int Nsum = 0;

        for (int i = 0; i < 7; i++)
        {
            if (i != Max.second)
            {

                Nsum += arr[i];
            }
        }
        cout << Max.first - Nsum << endl;
    }
    return 0;
}