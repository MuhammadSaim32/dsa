#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        this->V = v;
        l = new list<int>[v];
    }

    void AddEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void PrintEdge()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (int n : l[i])
            {
                cout << n << ",";
            }
            cout << endl;
        }
    }

    void BSF(int src) // O(V+E)
    {
        vector<bool> vist(V, false);
        queue<int> q;
        q.push(src);
        vist[src] = true;

        while (q.size() != 0)
        {
            int u = q.front();
            q.pop();
            cout << u << ":";
            for (int n : l[u])
            {
                if (!vist[n])
                {
                    q.push(n); // vip : remember why  vist[n]=true   here
                    vist[n] = true;
                }
            }
        }
    }

    void DSF(int src, vector<bool> &vist) // O(V+E)
    {
        if (!vist[src])
        {
            cout << src << " ";
            vist[src] = true;

            for (auto n : l[src])
            {
                DSF(n, vist); // unnecesary calls
            }
        }
    }

    bool CycleDetectDFS(int src, vector<bool> &vist, int par) // O(V+E)
    {

        // cout << src << " ";
        vist[src] = true;

        for (auto n : l[src])
        {
            if (!vist[n])
            {
                if (CycleDetectDFS(n, vist, src))
                    return true;
            }
            else if (n != par)
            {
                return true;
            }
        }
        return false;
    }

    bool CycleDetectBFS(int src, vector<bool> &vist, int par)
    {
        queue<pair<int, int>> Q;
        Q.push({src, par});
        vist[src] = true;

        while (Q.size() != 0)
        {
            int src = Q.front().first;
            int par = Q.front().second;
            Q.pop();
            for (auto n : l[src])
            {
                if (!vist[n])
                {
                    Q.push({n, src});
                    vist[n] = true;
                }
                else
                {
                    if (n != par)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{

    Graph g(5);

    g.AddEdge(0, 1);
    g.AddEdge(1, 2);
    g.AddEdge(1, 3);
    g.AddEdge(2, 4);

    vector<bool> vist(5, false); // can allso make helper function for dfs
    g.PrintEdge();
    // g.BSF(0);
    // g.DSF(0, vist);
    cout << g.CycleDetectDFS(0, vist, -1);

    return 0;
}
