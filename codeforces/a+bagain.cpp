#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        int ans = 0;

        for (char &c : s){
            ans += int(c-'0');
        }

        cout << ans << endl;

    }

}