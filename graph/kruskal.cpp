#include <bits/stdc++.h>
using namespace std;

void make_set(int v, vector<int>& parent, vector<int>& rank) {
	parent[v] = v;
	rank[v] = 0;
}

int find_set(int v, vector<int>& parent, vector<int>& rank) {
	if(v == parent[v]) return v;
	parent[v] = find_set(parent[v]);
	return parent[v];
}

void union_sets(int a, int b, vector<int>& parent, vector<int>& rank) {
	a = find_set(a, parent, rank);
	b = find_set(b, parent, rank);

	if(a != b) {
		if(rank[a] < rank[b]) {
			swap(a, b);
		}
		parent[b] = a;
		if(rank[a] == rank[b]) {
			rank[a]++;
		}
	}
}

struct Edge {
	int u, v, wt;

	bool operator<(Edge const& other) {
		return wt < other.wt;
	}
};

int main() {
	vector<int> parent;
	vector<int> rank;
	int n, m;
	vector<Edge> edges;
	vector<Edge> MSTedges;
	int MSTwt;

	cin >> n >> m;

	parent.resize(n);
	rank.resize(n);
	edges.resize(m);

	for(int i=0; i<n; i++) {
		make_set(i, parent, rank);
	}

	sort(edges.begin(), edges.end());

	for(Edge e: edges) {
		if(MSTedges.size() == n-1) break;
		else if(find_set(e.u, parent, rank) != find_set(e.v, parent, rank)) {
			MSTwt += e.wt;
			MSTedges.push_back(e);
			union_sets(e.u, e.v, parent, rank);
		}
	}

	return 0;
}

