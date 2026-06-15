#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rev(vector<int> &arr, int i, int j)
{

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            arr.push_back(value);
        }
        bool isSort = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                isSort = false;
            }
        }

        if (isSort)
        {
            cout << "Yes"<<endl;
        }
        else if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (k == 1 && n > 1)
        {
            cout << "No"<<endl;
        }
        else
        {
            cout << "Yes"<<endl;
        }
    }

    return 0;
}