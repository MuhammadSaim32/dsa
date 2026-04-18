#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;

        int length = w.length();
        string ans = "";
        if (length > 10)
        {
            ans += w[0];
            ans += to_string(length - 2);
            ans += w[length - 1];
            cout << ans << endl;
        }
        else
        {
            cout << w << endl;
        }
    }

    return 0;
}