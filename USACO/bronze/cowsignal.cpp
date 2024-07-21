#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;

    cin >> m >> n >> k;
    string ans = "", temp;

    for (int b = 0; b < m; b++){
        
        cin >> temp;

        for (int i = 0; i < k; i++){
            for (char j : temp){
                for (int l = 0; l < k; l++){
                    ans += j;
                }
            }

            cout << ans << endl;
            ans = "";
        }
    }

}