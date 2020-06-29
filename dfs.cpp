#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int>* adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
    void DFSvisit(int v, bool* visited);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::DFSvisit(int v, bool* visited) {
    visited[v] = true;
    cout << v << "-> ";

    for(auto x:adj[v]) {
        if(!visited[x]) {
            DFSvisit(x, visited);
        }
    }
}

void Graph::DFS(int v) {
    bool* visited = new bool[V];
    for(int i=0; i<V; i++) {
        visited[i] = false; //white
    }

    DFSvisit(v, visited);
}

int main() {
    int V; int E; int u; int v;
    cin >> V;
    cin >> E;
    Graph G(V);

    for(int i=0; i<E; i++) {
        cin >> u >> v;
        G.addEdge(u,v);
    }

    G.DFS(2);

    return 0;
}