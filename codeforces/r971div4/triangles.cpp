#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;
using ll = long long;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;
        vector<pair<ll, ll>> ys;
        map<ll, ll> y_0;
        map<ll, ll> y_1;

        ll a, b;

        for (ll i =0; i < n; i++){
            cin >> a >> b;
            ys.push_back({a, b});
            // ys.emplace_back(a, b);
            if (b == 0){
                y_0[a] = 1;
            }
            else{
                y_1[a] = 1;
            }
        }

        sort(ys.begin(), ys.end());

        // int count = 0;
        ll ans = 0;

        for (ll i = 0; i < n-1; i++){
            if (ys.at(i).first == ys.at(i+1).first){
                // count++;
                ans += (n-2);
            }
        }

        // ans += (count*(n-2));

        for (auto &i : y_0){
            if (y_0.count((i.first)+2)){
                if (y_1.count((i.first)+1)){
                    ans++;
                }
            }
        }

        for (auto &i : y_1){
            if (y_1.count((i.first)+2)){
                if (y_0.count((i.first)+1)){
                    ans++;
                }
            }
        }

        cout << ans << endl; 

            
    }
}