#include<bits/stdc++.h>
using namespace std;

#define INF 10000000

int main() {
    int t; int V;
    cin >> t;
    string temp;
    while(t--) {
        cin >> V;
        int graph[V][V];
        for(int i=0; i<V; i++) {
            for(int j=0; j<V; j++) {
                cin >> temp;
                graph[i][j] = (temp[0] == 'I') ? INF : stoi(temp);
            }
        }

        for(int k=0; k<V; k++) {
            for(int i=0; i<V; i++) {
                for(int j=0; j<V; j++) {
                    if(graph[i][j] > graph[i][k] + graph[k][j]) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }

        for(int i=0; i<V; i++) {
            for(int j=0; j<V; j++) {
                if(graph[i][j] >= 10000000) cout << "INF" << " ";
                else cout << graph[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}