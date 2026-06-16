#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int count = 0;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            count += b < a ? 1 : 0;
        }
        cout << count << endl;
    }

    return 0;
}