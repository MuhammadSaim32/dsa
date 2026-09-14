#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s = 4;
    vector<int> candi(4);
    bool isONe = false;
    for (auto &x : candi)
    {
        cin >> x;
        if (x == 1)
            isONe = true;
    }
    int d;
    cin >> d;

    if (isONe)
    {
        cout << d;
    }
    else
    {
        vector<bool> visit(d + 1, false);
        int cnt = 0;
        for (auto x : candi)
        {
            if (x > d)
                continue;

            if (!visit[x])
            {
                visit[x] = true;
                cnt++;
                for (int j = x*1; j <= d; j += x)
                {
                    if (!visit[j])
                    {
                        visit[j] = true;
                        cnt++;
                    }
                }
            }
        }
        cout << cnt;
    }
    return 0;
}