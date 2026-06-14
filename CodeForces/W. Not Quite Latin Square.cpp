#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        vector<char> arr;
        for (int i = 0; i < 3; i++)
        {
            char a, b, c;
            cin >> a >> b >> c;
            arr.push_back(a);
            arr.push_back(b);
            arr.push_back(c);
        }
        int countA = 0;
        int countB = 0;
        int countC = 0;
        for (int i = 0; i < arr.size(); i++)
        {

            if (arr[i] == 'A')
            {
                countA++;
            }
            else if (arr[i] == 'B')
            {
                countB++;
            }
            else if(arr[i]=='C')
            {
                countC++;
            }
        }

        if (countA != 3)
        {
            cout << "A" << endl;
        }

        if (countB != 3)
        {
            cout << "B" << endl;
        }

      
        if (countC != 3)
        {
            cout << "C" << endl;
        }
    }

    return 0;
}