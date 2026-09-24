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
        int ans = abs(N - K);
        cout << (N > K ? 0 : ans * 2) << endl;
    }

    return 0;
}