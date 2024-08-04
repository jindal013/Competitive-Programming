#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, n, ans;
    char c;

    cin >> t;

    while (t--){
        cin >> n;
        ans = 0;

        vector<int> used(4, 0);

        for (int i = 0; i < 4*n; i++){
            cin >> c;
            if (c == '?'){
                continue;
            }
            else{
                used.at(int(c)-int('A'))++;
            }
        }

        for (int i = 0; i < 4; i++){
            if (used.at(i) > n){
                ans += n;
            }
            else{
                ans += used.at(i);
            }
        }

        cout << ans << endl;

    }


}