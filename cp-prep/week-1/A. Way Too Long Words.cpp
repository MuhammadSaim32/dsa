#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string w;
        cin >> w;
        if (w.size() > 10)
        {
            cout << w[0] + to_string(w.size() - 2) + w[w.size() - 1]
                 << endl;
        }
        else
        {
            cout << w << endl;
        }
    }
    return 0;
}