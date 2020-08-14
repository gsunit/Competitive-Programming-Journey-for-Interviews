// Referred this solution on Codeforces: https://codeforces.com/contest/427/submission/80524508

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

#define NUM 100001

ll n; ll m; ll u; ll v;

vector<ll> g[NUM], g_i[NUM]; // graph and inverse graph

stack<ll> s; // nodes entered into stack once they are completely finished (whole depth originating from it has been explored)

ll vis[NUM]; // visited array

void dfs(ll x) {
    cout << x << "-> ";
    vis[x] = 1;
    for(auto i:g[x]) {
        if(!vis[i]) dfs(i);
    }
    s.push(x);
}

void dfs_i(ll x) {
    cout << x << "-> ";
    vis[x] = 1;
    for(auto i:g_i[x]) {
        if(!vis[i]) dfs_i(i);
    }
}

int main() {

    cin >> n >> m;

    for(ll i=0; i<m; i++) {
        cin >> u >> v;
        g[u].pb(v);
        g_i[v].pb(u);
    }

    for(ll i=1; i<=n; i++) {
        if(!vis[i]) {
            dfs(i);
            cout << endl;
        }
    }
    cout << "Now printing SCC" << endl;
    for(ll i=1; i<=n; i++) vis[i]=0;

    while(!s.empty()) {
        if(!vis[s.top()]) {
            dfs_i(s.top());
            cout << endl;
        }
        s.pop();
    }

    /* Sample test case
        5
        5
        1 3
        4 1
        3 4
        2 4
        4 5
    */


    return 0;
}