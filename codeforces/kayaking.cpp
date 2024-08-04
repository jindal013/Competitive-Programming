#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio 
    int n;
    cin >> n;

    vector<int> weights(2*n);

    for (int &i : weights){
        cin >> i;
    }

    sort(weights.begin(), weights.end());

    int ans = INT32_MAX;

    for (int i = 0; i < 2*n - 1; i++){
        for (int j = i+1; j < 2*n; j++){
            
            int alt = 0;
            int ans2 = 0;
            int value;

            for (int k = 0; k < 2*n; k++){

                if (k == i || k == j){
                    continue;
                }
                
                if (!alt){
                    value = weights.at(k);
                    alt = 1;
                }
                else{
                    ans2 += abs(value-weights.at(k)); 
                    alt = 0;
                }
            }

            ans = min(ans, ans2);
        }
    }

    cout << ans << endl;
    

}