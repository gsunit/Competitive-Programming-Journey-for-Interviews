#include <bits/stdc++.h>
using namespace std;

#define NUM 10000000

int vis[NUM];
vector<int> g[NUM];
stack<int> s;
int curr;

void dfs(int x) {
    s.push(x);
    while(!s.empty()) {
        curr = s.top();
        s.pop();
        if(!vis[curr]) {
            vis[curr] = 1;
            cout << curr << "-> ";
            for(auto i:g[curr]) {
                if(!vis[i]) s.push(i);
            }
        }
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

    for(int i=1; i<=n; i++) {
        if(!vis[i]) {
            dfs(i);
            cout << endl;
        }
    }

    return 0;
}