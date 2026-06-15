#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            int value = max(a, b) - min(a, b);
            int count = 0;
            if (value >= 10)
            {
                count += value / 10;
                value %= 10;
                if (value != 0)
                {
                    count++;
                }
            }
            else if (value > 0)
            {
                value -= value;
                count++;
            }

            cout << count << endl;
        }
    }
    return 0;
}