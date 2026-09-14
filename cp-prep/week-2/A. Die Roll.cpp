#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int x, y;
    cin >> x >> y;
    int fav = 6 - max(x, y) + 1;

    int g = gcd(6, fav);
    
    
        cout << fav / g << "/" << 6 / g;
    
    return 0;
}