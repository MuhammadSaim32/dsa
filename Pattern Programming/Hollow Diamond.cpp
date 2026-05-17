#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int last;

    for (int i = 0; i < n; i++)
    {

        for (int c = 1; c < n - i; c++)
        {
            cout << " ";
        }

        cout << "*";

        for (int j = 1; j <= i + i - 1; j++)
        {
            cout << " ";
        }

        if (i >= 1)
            cout << "*";
        cout << endl;

        last = i + i - 1;
    }

    for (int i = 1; i < n; i++)
    {
        last = last - 2;

        for (int c = 1; c <= i; c++)
        {
            cout << " ";
        }
        cout << "*";

        for (int l = 1; l <= last; l++)
        {
            cout << " ";
        }
        if (i != n - 1)
            cout << "*";
        cout << endl;
    }

    return 0;
}