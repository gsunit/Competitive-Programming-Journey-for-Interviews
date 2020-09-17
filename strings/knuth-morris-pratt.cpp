#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

void printVec(vector<int>& vec) {
    cout << "prefix table: ";
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {

    string pattern = "ababcdeababa";
    // string A       = "ababdaba";

    vector<int> table = prefix_function(pattern);
    printVec(table);
}