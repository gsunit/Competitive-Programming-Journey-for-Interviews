// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/

int maxRectHistogram(vector<int>& A) {
    int n = A.size();
    stack<int> S;
    int curr, prev;
    int ans = -1;
    for(int i=0; i<n; i++) {
        while(!S.empty() && A[i]<A[S.top()]) {
            curr = S.top(); S.pop();
            prev = (S.empty()) ? -1 : S.top();
            ans = max(ans, A[curr]*(i-1-prev));
        }
        S.push(i);
    }
    while(!S.empty()) {
        curr = S.top(); S.pop();
        prev = (S.empty()) ? -1 : S.top();
        ans = max(ans, A[curr]*(n-1-prev));
    }
    return ans;
}

int Solution::maximalRectangle(vector<vector<int> > &A) {

    int maxA = 0;
    int row = A.size();
    int col = A[0].size();
    
    for(int i = 1; i<row; i++) {
        for(int j = 0; j<col; j++) {
            if(A[i][j] == 1)
                A[i][j] += A[i-1][j];
        }
    }
    
    for(vector<int> vec: A) {
        maxA = max(maxA, maxRectHistogram(vec));
    }
    
    return maxA;

}
