#include <bits/stdc++.h>
using namespace std;

vector<int>* prefixTable(string& P) {
    // Prefix table is of size m+1, with index 0's default value set to 0
    int m = P.size();

    vector<int>* table = new vector<int>(); // table[i+1] corresponds to prefix value of P[i]
    table->push_back(0); // default table[0] = 0
    table->push_back(0); // table[1] = 0 as prefix of P[0] has to be 0
    int val, j=0;
    for(int i=1; i<m; i++) {
        if(P[i] == P[j]) {
            val = table->at(i)+1; //adding 1 to the value of the previous character
            j++;
        }
        else {
            val=0;
            j=0;
        }
        table->push_back(val);
    }
    return table;
}

int kmpIndex(string& A, string& P, vector<int>*& prefixTable) {
    // Returns the index of the first instance of pattern P matching string A
    int n = A.size();
    int m = P.size();

    if(m==0 || n==0) return -1;

    int j=0;
    for(int i=0; i<n; i++) {
        if(A[i] == P[j+1]) j++;
        else j = prefixTable->at(j);

        if(j+1==m) return i-m+1; // complete match for P found in A
    }
    return -1;
}

void printVec(vector<int>*& vec) {
    cout << "prefix table: ";
    for(int i=0; i<vec->size(); i++) {
        cout << vec->at(i) << " ";
    }
    cout << endl;
}

int main() {

    string pattern = "abdab";
    string A       = "ababdaba";

    vector<int>* table = prefixTable(pattern);
    printVec(table);

    int index = kmpIndex(A, pattern, table);

    cout << index << endl;
}