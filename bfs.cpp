#include <bits/stdc++.h>
using namespace std;

#define NUM 100000

int n, m;
int u, v;
vector<int> g[NUM];
queue<int> Q;
int vis[NUM];
int curr;

void bfs(int x) {
    Q.push(x);
    vis[x] = 1;
    while(!Q.empty()) {
        curr = Q.front(); Q.pop();
        cout << curr << "-> ";
        for(auto i:g[curr]) {
            if(!vis[i]) Q.push(i);
            vis[i] = 1;
        }
    }
}

int main() {
    
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> u >> v;
        g[u].push_back(v);
    }

    bfs(0);

    return 0;
}