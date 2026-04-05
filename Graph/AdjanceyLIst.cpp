#include<iostream>
#include<list>  
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int v){
        this->V=v;
        l=new list<int>[v];
    }

    void AddEdge(int u ,int v){
        l[u].push_back(v);
        l[v].push_back(u);

    }

    void PrintEdge(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int n:l[i]){
                cout<<n<<",";
            }
            cout<<endl;
        }
    }

};

int main(){

Graph g(5);

g.AddEdge(0,1);
g.AddEdge(1,2);
g.AddEdge(1,3);
g.AddEdge(2,3);
g.AddEdge(2,4);

g.PrintEdge();
    return 0;
}
