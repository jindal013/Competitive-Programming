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
        // https://codeforces.com/contest/2008/problem/F
        ll n;
        cin >> n;

        ll sum = 0;
        ll sq = 0;

        for (ll i = 0; i < n; i++){
            int a;
            cin >> a;
            sum += a;
            sq += (a*a);
        }

        ll numerator = ((sum*sum) - sq);
        ll denominator = (n)*(n-1);

        cout << "NUMERATOR: " << numerator << " DENOMInATOR: " << denominator << endl;
    }
}