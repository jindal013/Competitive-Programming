#include <iostream> //fix <bits/stdc++.h>> for macOS
#include <vector>
using namespace std;

int main(){
    int n, q, sum = 0, best = 0; 

    cin >> n;
    vector<int> arr(n+1);

    for (int i = 1; i < (n+1); i++){ // we don't even need to 1-index this
        cin >> q;
        arr.at(i) = q;
    }

    for (int i = 0; i<(n+1); i++){
        sum = max(arr.at(i), sum + arr.at(i)); 
        // arr.at(i) = sum; we don't even need to update this since we don't use this value again
        best = max(sum, best);
    }

    cout << best << endl;

}