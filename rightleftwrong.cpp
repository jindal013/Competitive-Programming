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
        ll n;
        cin >> n;

        vector<ll> nums(n);
        vector<ll> lefts;
        vector<ll> rights;
        char c;

        for (ll &i : nums){
            cin >> i;
        }

        for (ll i = 0; i < n; i++){
            cin >> c;
            if (c == 'L'){
                lefts.push_back(i);
            }
            else{
                rights.push_back(i);
            }
        }

        sort(rights.rbegin(), rights.rend());

        vector<ll> prefix(n+1, 0);

        for (ll number = 0; number < (ll)(min(lefts.size(), rights.size())); number++){
            if (lefts.at(number) < rights.at(number)){
                prefix.at(lefts.at(number))++;
                prefix.at(rights.at(number)+1)--;
            }
        }
        
        ll sum = 0;

        for (ll i = 0; i < n; i++){
            prefix.at(i+1) += prefix.at(i);
            sum += prefix.at(i)*nums.at(i);
        }

        cout << sum << endl;

    }
}