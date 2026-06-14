#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        for (int i = l; i <= r; i++)
        {
         
            arr.push_back(i);
        }

        // cout << arr.size();
         int i=0; 
         int j = 0;
        while (m != 0)
        {

            if (i < r)
            {
                i++;
                m--;
            }
            if (m == 0)
            {
                break;
            }

            if (j > l)
            {
                j--;
                m--;
            }
        }

        cout << j << " " << i<<endl;
    }

    return 0;
}