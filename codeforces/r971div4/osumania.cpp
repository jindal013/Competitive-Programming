#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        // code here
        int n;
        cin >> n;
        vector<int> ans(n);
        // char c;

        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            ans[i] = int(s.find('#')) + 1;
        }

        reverse(ans.begin(), ans.end());
        
        cout << ans.at(0);

        for (int i = 1; i < n; i++){
            cout << " " << ans.at(i);
        }
        cout << endl;

        // for (int i = 0; i<n; i++){
        //     int index = -1;
        //     for (int j = 0; j < 4; j++){
        //         cin >> c;
        //         if (c == '#'){
        //             index = (j+1);
        //         }
        //     }
        //     ans.push_back(index);
        // }

        // cout << ans.at(n-1);

        // for (int i = n-2; i>=0; i--){
        //     cout << " " << ans.at(i);
        // }

        // cout << endl;
        
    }
}