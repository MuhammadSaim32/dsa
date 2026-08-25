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

    void dijkstra()
    {
        vector<int> dis(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dis[0] = 0;
        pq.push({0, 0});
        while (pq.size() != 0)
        {
            int u = pq.top().second;
            pq.pop();
            for (auto neb : adj[u])
            {
                if (dis[neb.first] > dis[u] + neb.second)
                {
                    dis[neb.first] = dis[u] + neb.second;
                    pq.push({dis[neb.first], neb.first});
                }
            }
        }

        for (auto val : dis)
        {
            cout << val;
        }
    }
};

int main()
{

    Graph g(6);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 5, 5);
    g.addEdge(4, 3, 2);

    g.dijkstra();

    return 0;
}