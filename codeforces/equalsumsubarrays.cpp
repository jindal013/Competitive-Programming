#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, n;
    cin >> t;

    while(t--){
        // code here
        cin >> n;
        vector<int> perms(n);
        for (int & i : perms){
            cin >> i;
        }

        for (int i = 1; i < n; i++){
            cout << perms.at(i) << " ";
        }       
        cout << perms.at(0) << endl;

    }

}