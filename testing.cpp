#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    vector<int> v{1, 7, 4, 5, 2};

    v.at(2) = 11;

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // prints the values in the vector using the iterator
    }
}