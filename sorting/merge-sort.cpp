#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& A, int l, int m, int r) {
    int n1 = m-l+1;
    int n2 = r-m;

    vector<int> L, R;
    L.assign(A.begin()+l, A.begin()+l+n1);
    R.assign(A.begin()+m+1, A.begin()+m+1+n2);

    int i=0, j=0, k=l;
    while(i<n1 && j<n2) {
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        A[k++] = L[i++];
    }
    while(j<n2) {
        A[k++] = R[j++];
    }
}
void mergeSort(vector<int>& A, int l, int r) {
    if(l>=r || l<0 || r>=A.size()) return;
    int m = l+(r-l)/2;
    mergeSort(A, l, m);
    mergeSort(A, m+1, r);
    merge(A, l, m, r);
}

int main() {
    int n; cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    mergeSort(A, 0, n-1);
    for(int i=0; i<n; i++) cout << A[i] << " ";
    cout << endl;
}