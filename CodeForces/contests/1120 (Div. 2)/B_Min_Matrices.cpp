#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        if (k >= n && k <= (n + n - 1))
        {
            vector<vector<int>> vec(n + 1, vector<int>(n + 1, 0));

            for (int i = 1; i <= n; i++)
            {
                vec[i][i] = i;
            }

            int value = n + 1;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == j)
                        continue;
                    vec[i][j] = value++;
                }
            }

            k = k % n;
            for (int i = 1; i <= k + 1; i++)
            {

                swap(vec[i][i], vec[k + 1][i]);
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << vec[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
