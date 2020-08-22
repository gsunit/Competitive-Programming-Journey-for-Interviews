
// Longest Palindromic Subsequence: https://www.interviewbit.com/problems/longest-palindromic-subsequence/

// Problem Description
// Given a string A, find the common palindromic sequence ( A sequence which does not need to be contiguous and is a pallindrome), which is common in itself.
// You need to return the length of longest palindromic subsequence in A.


#include <bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string A) {
    int n = A.size();
    int dp[][];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            dp[i][j] = (i==j) ? 1 : 0;
        }
    }

    for(int l=2; l<=n; l++) {
        for(int i=0; i<n-l+1; i++) {
            if(A[i] == A[i+l-1]) {
                dp[i][i+l-1] = dp[i+1][i+l-2] + 2;
            }
            else {
                dp[i][i+l-1] = max(dp[i+1][i+l-1], dp[i][i+l-2]);
            }
        }
    }

    return dp[0][n-1];
}