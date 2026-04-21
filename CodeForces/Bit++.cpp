#include <iostream>
using namespace std;

int main()
{
    int variable = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        if (line[1] == '+')
        {
            variable++;
        }
        else
        {
            variable--;
        }
    }
    cout << variable;

    return 0;
}