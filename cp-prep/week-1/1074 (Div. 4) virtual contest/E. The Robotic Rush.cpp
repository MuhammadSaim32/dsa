#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        vector<int> robot;
        unordered_set<int> spike;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            int ro;
            cin >> ro;

            robot.push_back(ro);
        }

        for (int i = 0; i < m; i++)
        {
            int s;
            cin >> s;

            spike.insert(s);
        }

        int move = 0;
        for (int i = 0; i < k; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'L')
                move--;
            move++;
        }


        for (int i = 0; i < n; i++) {
            
            int robotPOs=robot[i]+move;
            if(ro)
        }

        cout << endl;
    }

    return 0;
}