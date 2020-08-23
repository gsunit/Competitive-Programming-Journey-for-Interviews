// List Cycle: https://www.interviewbit.com/problems/list-cycle/

// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

// Try solving it using constant additional space.


#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A==NULL || A->next == NULL || A->next->next == NULL) {
        return NULL;
    }
    
    else if(A->next == A || A->next->next == A || A->next->next->next == A) {
        return A;
    }
    
    ListNode* hare = A->next->next;
    ListNode* tort = A->next;
    
    // hare goes two steps and tort goes one step
    while(hare != tort) {
        if(hare == NULL || hare->next == NULL || tort == NULL) {
            return NULL;
        }
        hare = hare->next->next;
        tort = tort->next;
    }
    
    
    // now both hare and tort go one step
    hare = A;
    while(hare != tort) {
        hare = hare->next;
        tort = tort->next;
    }
    
    return tort;
}
