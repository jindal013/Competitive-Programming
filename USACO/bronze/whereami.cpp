#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;
    string s;
    int ans = -1;
    cin >> n;
    cin >> s;

    for (int i = 1; i<=n; i++){
        set<string> mails;
        //cout << "value of n-i is " << n-i << endl;
        for (int j = 0; j<=n-i; j++){
            //cout << j << " ";
            mails.insert(s.substr(j, i));
        }

        // cout << "length is " << i << endl;
        // for (auto &it : mails){
        //     cout << it << " ";
        // }
        // cout << endl;

        if (int(mails.size()) == n-i+1){
            ans = i;
            break;
        }
    }

    cout << ans;



}