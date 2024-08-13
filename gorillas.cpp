#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;
using ll = long long;

int main(){
    fastio

    ll t;
    cin >> t;

    while (t--){
        ll n, m, k, w;

        cin >> n >> m >> k >> w;
        vector<ll> weights;

        for (ll i = 1; i <= n; i++){
            // row i
            for (ll j = 1; j <=m; j++){
                // index at row i, col j

                ll x_factor, y_factor;

                ll compare = min(j, m-j+1);
                //int compare_max = max()
                if (k <= compare){
                    x_factor = k;
                }
                else{
                    if (k > (m-compare+1)){
                        x_factor = m-k+1;
                    }
                    else{
                        x_factor = compare;
                    }
                }

                // y-cord now

                compare = min(i, n-i+1);
                //int compare_max = max()
                if (k <= compare){
                    y_factor = k;
                }
                else{
                    if (k > (n-compare+1)){
                        y_factor = n-k+1;
                    }
                    else{
                        y_factor = compare;
                    }
                }

                ll total = x_factor * y_factor;

                weights.push_back(total);

            }
        }

        sort(weights.rbegin(), weights.rend());
        vector<ll> heights_gor(w);
        for (ll &iknow : heights_gor){
            cin >> iknow;
        }
        sort(heights_gor.rbegin(), heights_gor.rend());

        ll final_ans = 0;

        for (ll i = 0; i < w; i++){
            final_ans += heights_gor.at(i)*weights.at(i);
        }

        cout << final_ans << endl;


    }
}