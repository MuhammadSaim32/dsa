#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        --N;
        cout << (N == K ? "No" : "Yes") << endl;
    }
    return 0;
}