#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int x, y, k;
    cin >> x >> y >> k;
    cout << min(x * 12, (y * 12) + k) << endl;
    return 0;
}