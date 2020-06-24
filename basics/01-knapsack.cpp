#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    int dp[n+1][W+1];

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=W; j++) {

            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
            else if(wt[i-1] <= j) {
                dp[i][j] = max(
                    val[i-1] + dp[i-1][j-wt[i-1]],
                    dp[i-1][j]
                );
            }
            else {
                dp[i][j] = dp[i-1][j];
            }

        }
    }

    return dp[n][W];
}

int main() {
    int t; int n; int W;
    cin >> t;

    while(t>0) {
        cin >> n;
        cin >> W;
        int val[n];
        int wt[n];

        for(int i=0; i<n; i++) {
            cin >> val[i];
        }
        for(int i=0; i<n; i++) {
            cin >> wt[i];
        }
        cout << knapSack(W, wt, val, n) << endl;
        t--;
    }

    return 0;
}