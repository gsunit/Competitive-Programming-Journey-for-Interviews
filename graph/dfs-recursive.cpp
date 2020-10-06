#include <bits/stdc++.h>
using namespace std;

#define NUM 10000000

int vis[NUM];
vector<int> g[NUM];

void dfs(int x) {
    cout << x << "-> ";
    vis[x] = 1;
    for(auto i:g[x]) {
        if(!vis[i]) dfs(i);
    }
}

int n; int m;
int u, v;
int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> u >> v;
        g[u].push_back(v);
    }

    for(int i=0; i<n; i++) {
        if(!vis[i]) {
            dfs(i);
            cout << endl;
        }
    }

    return 0;
}