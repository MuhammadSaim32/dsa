#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

class Graph
{
public:
    int V;
    vector<vector<pair<int, int>>> adj;
    Graph(int v)
    {
        V = v;
        adj.resize(V);
    }

    void addEdge(int u, int v, int wt)
    {
        adj[u].push_back({v, wt});
    }

    void Prims()
    {
        vector<bool> inMst(V, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        int minCost = 0;
        while (pq.size() != 0)
        {
            int wt = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            if (!inMst[u])
            {
                inMst[u] = true;
                minCost += wt;
                for (auto neb : adj[u])
                {
                    if(!inMst[neb.first])
                    pq.push({neb.second, neb.first});
                }
            }
        }

        cout<<minCost<<" ";
    }
};

int main()
{

    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(1, 0, 10);
    g.addEdge(0, 3, 30);
    g.addEdge(3, 0, 30);
    g.addEdge(0, 2, 15);
    g.addEdge(2, 0, 15);

    g.addEdge(2, 3, 50);
    g.addEdge(3, 2, 50);
    g.addEdge(1, 3, 40);
    g.addEdge(3, 1, 40);
    g.Prims();

    return 0;
}