#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int ans = 0;
        while (d != 0)
        {
            ans += d % 10;
            d /= 10;
        }
        cout << ans<<endl;
    }
    return 0;
}