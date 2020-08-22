// Question: https://www.interviewbit.com/problems/longest-common-subsequence/

// Problem Description
// Given two strings A and B. Find the longest common sequence ( A sequence which does not need to be contiguous), which is common in both the strings.
// You need to return the length of such longest common subsequence.

#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string A, string B) {
    
    int m = A.size();
    int n = B.size();
    
    int dp[m+1][n+1];
    
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
            else if(A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[m][n];
}