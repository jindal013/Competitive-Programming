#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, a1, a2, b1, b2;
    cin >> t;

    while(t--){
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;

        if ((a1 > b1) && (a2 >= b2)){
            ans += 2;
        }
        if ((a1 == b1) && (a2 > b2)){
            ans += 2;
        }
        if ((a1 > b2) && (a2 >= b1)){
            ans += 2;
        }
        if ((a1 == b2) && (a2 > b1)){
            ans += 2;
        }

        cout << ans << endl;

}
}