#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;
using ll = long long;

int good_array(int l, int r){
    int diff = 2*(r - l);
    // int diff2 = 2*diff;
    if (diff == 0) return 1;
    else{
        int n = floor(sqrt(diff));

        while ((n)*(n+1) <= diff){
            n++;
        }

        return n;

    }
}

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        ll l, r;
        cin >> l >> r;
        cout << good_array(l, r) << endl;

    }
}