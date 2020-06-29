#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::BFS(int s) {
    int visited[V]; // unvisited(0), in-queue(1), completed(2)
    int pre[V]; // predecessors
    int dist[V]; // distance from source
    for(int i=0; i<V; i++) {
        visited[i] = 0; //white
    }
    visited[s] = 1; //gray
    pre[s] = -1;
    dist[s] = 0;

    queue<int> Q;
    Q.push(s);

    int u;
    while(Q.empty() == false) {
        u = Q.front();
        Q.pop();
        cout << u << "-> ";
 
        for(auto v:adj[u]) {
            if(visited[v] == 0) {
                visited[v] = 1;
                dist[v] = dist[u] + 1;
                pre[v] = u;
                Q.push(v);
            }
        }
        visited[u] = 2; //black
    }
}

int main() {

    int V; int E; int v; int w; int s;
    cin >> V >> E;
    Graph G(V);
    for(int i=0; i<E; i++) {
        cin >> v >> w;
        G.addEdge(v,w);
    }
    cin >> s;

    G.BFS(s);
    return 0;
}