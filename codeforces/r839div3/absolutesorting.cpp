#include <iostream>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void SetIO(string s){
    freopen(((s) + ".in").c_str(), "r", stdin);
    freopen(((s) + ".out").c_str(), "w", stdout);
}

int main(){
    fastio
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;

        int l = 0, r = 1e9;
        int x, y;
        cin >> x;
        // int ans = 0;

        for (int i = 0; i < n-1; i++){
            cin >> y;

            if (y < x){
                l = max((x + y + 1)/2, l);
            }
            else if (y > x){
                r = min((x + y) / 2, r);
            }
            x = y;
            // if (l > r){
            //     ans = -1;
            // }
        }

        cout << ((l > r) ? -1 : l) << endl;

        // if (l > r){
        //     cout << -1 << endl;
        // }
        // else{
        //     cout << l << endl;
        // }
    }
}