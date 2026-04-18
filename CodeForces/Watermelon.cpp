#include <iostream>
using namespace std;

int main()
{

    int w;
    cin >> w;
    string ans = (w % 2 == 0 && w >= 4) ? "YES" : "NO";
    cout << ans;
    return 0;
}