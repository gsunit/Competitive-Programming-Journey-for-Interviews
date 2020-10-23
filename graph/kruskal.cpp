// Implementation for Kruskal's Algorithm. Can refer to this question: https://www.interviewbit.com/problems/commutable-islands/

#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, wt;
    
    bool operator<(const Edge& other) {
        return wt < other.wt;
    }
};

void make_set(int v, vector<int>& parent, vector<int>& rank) {
    parent[v] = v;
    rank[v] = 0;
}

int find_set(int v, vector<int>& parent, vector<int>& rank) {
    if(v == parent[v]) return v;
    parent[v] = find_set(parent[v], parent, rank);
    return parent[v];
}

void union_set(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = find_set(u, parent, rank);
    v = find_set(v, parent, rank);
    
    if(u != v) {
        if(rank[u] < rank[v]) {
            swap(u, v);
        }
        parent[v] = u;
        if(rank[u] == rank[v]) {
            rank[u]++;
        }
    }
}

int kruskal(int A, vector<vector<int> > &B) {
    vector<Edge> edges;
    for(int i=0; i<B.size(); i++) {
        edges.push_back(Edge{B[i][0], B[i][1], B[i][2]});
    }
    sort(edges.begin(), edges.end());
    
    int MSTwt = 0;
    vector<Edge> MSTedges;
    vector<int> parent(A+1), rank(A+1);
    
    for(int i=0; i<=A; i++) {
        make_set(i, parent, rank);
    }
        
    for(Edge e: edges) {
        if(MSTedges.size() == A-1) break;
        if(find_set(e.u, parent, rank) != find_set(e.v, parent, rank)) {
            MSTwt += e.wt;
            MSTedges.push_back(e);
            union_set(e.u, e.v, parent, rank);
        }
    }
    return MSTwt;
}
