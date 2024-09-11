#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;
    
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> alpha(26);
        char c;
        
        for (int i = 0; i < n; i++){
            cin >> c;
            alpha[c-'a']++;
        }

        // int factor = n/k;
        int pairs = 0;
        int singles = 0;

        for (int & i : alpha){
            while (i >= 2){
                pairs++;
                i -= 2;
            }
            singles += i;
        }

        int ans = 2*(pairs/k);
        int leftover = pairs % k;
        if (2*leftover + singles >= k){
            cout << ans+1 << endl;
        }
        else{
            cout << ans << endl;
        }

        // cout << pairs << " " << singles << endl;


    }
}