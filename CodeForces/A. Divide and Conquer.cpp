#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int x, y;
        cin >> x >> y;
        int idx = 1;
        bool True = false;
        while (true)
        {
            int ans = idx * y;
            if (ans == x)
            {
                True = true;
                break;
            }
            else if (ans > x)
            {
                True = false;
                break;
            }

            idx++;
        }

        cout << (True ? "YES" : "NO") << endl;
    }

    return 0;
}