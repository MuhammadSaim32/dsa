#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ans = 0;
    int power = 1;
    while (n != 0)
    {
        ans += ((n % 2) * power);
        n /= 2;
        power *= 10;
    }
    cout << ans;

    return 0;
}