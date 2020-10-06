#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int a, b, cost;
};

int n, m, v;
vector<edge> e;
const int INF = 1000000000;

void bellmanFord()
{
    vector<int> d (n, INF);
    d[v] = 0;
    vector<int> p (n - 1);
    int x;

    for (int i=0; i<n; ++i) // n-1 iterations + nth iteration to check for -ve cycles
    {
        x = -1; // to store the last node that was relaxed
        for (int j=0; j<m; ++j)
            if (d[e[j].a] < INF) // dont relax thode edges which end on nodes that have d[]==INF
            // they aren't discovered yet, otherwise, will end up in values like INF-1, INF-2, etc.
            // only a problem when -ve edges are present.
                if (d[e[j].b] > d[e[j].a] + e[j].cost)
                {
                    d[e[j].b] = max (-INF, d[e[j].a] + e[j].cost); // to check overflow (below -INF)
                    // only a problem when -ve cycles are present
                    p[e[j].b] = e[j].a;
                    x = e[j].b;
                }
    }

    if (x == -1) //there must have been no relaxations in the nth iteration
        cout << "No negative cycle from " << v;
    else
    {
        int y = x;
        for (int i=0; i<n; ++i) // going sufficiently backwards to ensure we end up in the -ve cycle
            y = p[y];

        vector<int> path;
        for (int cur=y; ; cur=p[cur])
        {
            path.push_back (cur);
            if (cur == y && path.size() > 1)
                break;
        }
        reverse (path.begin(), path.end());

        cout << "Negative cycle: ";
        for (size_t i=0; i<path.size(); ++i)
            cout << path[i] << ' ';
    }
}