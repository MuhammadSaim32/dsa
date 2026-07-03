#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int a, b;
        cin >> a >> b;
        cout << (n == m && a == b ? 2 : n + m) << endl;
    }
    return 0;
}
