#include <iostream>


using namespace std;

int main()
{
    for (int i = 1; i < 6; i++)
    {

        for (int j = 1; j < 6; j++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
                return 0;
            }
        }
    }

    return 0;
}