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
        vector<int> arr(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        if (arr[0] + arr[1] > arr[2])
        {
            cout << arr[2] - arr[0]<<endl;
        }
        else
        {
            arr[2] = arr[0] + arr[1];
            cout << arr[2] - arr[0]<<endl;
        }
    }

    return 0;
}