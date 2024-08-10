#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, xc, yc, k;
    cin >> t;

    while(t--){
        cin >> xc >> yc >> k;
        for (int i = 0; i < (k/2); i++){
            cout << (xc + i+1) << " " << yc << endl;
            cout << (xc - (i+1)) << " " << yc << endl;
        }
        if (k%2){
            cout << xc << " " << yc << endl;
        }
    }

}