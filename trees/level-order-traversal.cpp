#include<bits/stdc++.h>
using namespace std;

// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

// ITERATIVE SOLUTION
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    if(A==NULL) return ans;
    ans.push_back(vector<int>());
    
    queue<TreeNode*> Q;
    Q.push(A);
    Q.push(NULL);
    
    TreeNode* curr;
    while(!Q.empty()) {
        curr = Q.front(); Q.pop();
        
        if(curr==NULL) {
            if(!Q.empty()) {
                Q.push(NULL);
                ans.push_back(vector<int>());   
            }
        }
        else {
            ans[ans.size()-1].push_back(curr->val);
            if(curr->left) Q.push(curr->left);
            if(curr->right) Q.push(curr->right);
        }
    }
    return ans;
}

// RECURSIVE SOLUTION
void solve(TreeNode* A, int level, vector<vector<int>>& ans) {
    if(A==NULL) return;
    if(level >= ans.size()) ans.push_back(vector<int>());
    
    ans[level].push_back(A->val);
    solve(A->left, level+1, ans);
    solve(A->right, level+1, ans);
}
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    solve(A, 0, ans);
    return ans;
}
