#include <bits/stdc++.h>
using namespace std;

class DSU
{
public:
    int n;
    vector<int> rank, par;

    DSU(int val)
    {
        n = val;
        for (int i = 0; i < n; i++)
        {
            rank.push_back(0);
            par.push_back(i);
        }
    }

    int find(int x)
    {
        if (par[x] == x)
            return x;

        return par[x] = find(par[x]);
    }

    void unionRank(int a, int b)
    {
        int parA = find(a);
        int parB = find(b);
        if (parA == parB)
            return;
        if (rank[parA] == rank[parB])
        {
            par[parB] = parA;
            rank[parA]++;
        }
        else if (rank[parA] > rank[parB])
        {
            par[parB] = parA;
        }
        else
        {
            par[parA] = parB;
        }
    }

    void print(vector<int> v)
    {
        for (auto x : v)
            cout << x << " ";
        cout << '\n';
    }

    void getInfo()
    {
        print(par);
        print(rank);
    }
};

class Graph
{
public:
    int n;
    vector<pair<int, pair<int, int>>> adj;
    Graph(int val)
    {
        n = val;
    }

    void AddEdge(int wt, int u, int v)
    {

        adj.push_back({wt, {u, v}});
    }

    void Kruskal()
    {
        sort(adj.begin(), adj.end());
        DSU obj(n);
        int minCost = 0;
        for (auto edge : adj)
        {
            int wt = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;
            int parA = obj.find(u);
            int parB = obj.find(v);
            if (parA != parB)
            {
                obj.unionRank(u, v);
                minCost += wt;
            }
        }

        cout << minCost << endl;
    }
};

int main()
{
    // DSU obj(6);
    // obj.unionRank(0, 2);
    // cout << obj.find(2) << endl;
    // obj.unionRank(1, 3);
    // obj.unionRank(2, 5);
    // obj.unionRank(0, 3);
    // cout << obj.find(2) << endl;
    // obj.unionRank(0, 4);
    // obj.getInfo();

    Graph g(4);
    g.AddEdge(10, 0, 1);
    g.AddEdge(6, 0, 2);
    g.AddEdge(5, 0, 3);
    g.AddEdge(15, 1, 3);
    g.AddEdge(4, 2, 3);
    g.Kruskal();
    return 0;
}