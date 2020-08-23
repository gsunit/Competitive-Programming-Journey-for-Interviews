// Majority Element: https://www.interviewbit.com/problems/majority-element/

// Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.

// You may assume that the array is non-empty and the majority element always exist in the array.

#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int> &A) {
    int n = A.size();
    int curr = A[0];
    int currCnt = 0;
    for(int i=0; i<n; i++) {
        if(A[i] == curr) {
            currCnt++;
        }
        else {
            currCnt--;
            if(currCnt < 0) { //check equality
                curr = A[i];
                currCnt = 1;
            }
        }
    }
    
    return curr;
}