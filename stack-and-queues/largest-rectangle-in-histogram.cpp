// https://www.interviewbit.com/problems/largest-rectangle-in-histogram/

int Solution::largestRectangleArea(vector<int> &A) {
    int maxAr = -1;
    stack<int> S; //stack of indices
    int curr, prev;
    int n = A.size();
    for(int i=0; i<A.size(); i++) {
        while(!S.empty() && A[i]<A[S.top()]) {
            curr = S.top(); S.pop();
            prev = (S.empty()) ? -1 : S.top();
            maxAr = max(maxAr, A[curr]*(i-1-prev));
        }
        S.push(i);
    }
    while(!S.empty()) {
        curr = S.top(); S.pop();
        prev = (S.empty()) ? -1 : S.top();
        maxAr = max(maxAr, (A[curr]*(n-1-prev)));
    }
    
    return maxAr;
}