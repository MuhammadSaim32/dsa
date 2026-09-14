#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int> &rank)
{
    if (x == rank[x])
    {
        return x;
    }

    return rank[x]= find(rank[x], rank);
}

void unionByRank(int a, int b, vector<int> &rank, vector<int> &par)
{
    int parA = find(a, par);
    int parB = find(b, par);
    if (parA == parB)
    {
        cout << "Invalid query!" << endl;
        return;
    }
    if (rank[parA] > rank[parB])
    {
        par[parB] = parA;
    }
    else if (rank[parA] < rank[parB])
    {
        par[parA] = parB;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> rank(n + 20);
        for (int i = 1; i < n + 1; i++)
        {
            cin >> rank[i];
        }

        vector<int> par(n + 20);
        for (int i = 1; i < n + 1; i++)
        {
            par[i] = i;
        }

        cout << endl;
        int q;
        cin >> q;
        while (q--)
        {
            int type;
            cin >> type;
            if (type)
            {
                int x;
                cin >> x;

                cout << find(x, par) << endl;
            }
            else
            {
                int x, y;
                cin >> x >> y;
                unionByRank(x, y, rank, par);
            }
        }
    }
    return 0;
}