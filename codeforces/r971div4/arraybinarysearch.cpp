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
        ll n, k;

        cin >> n >> k;

        ll constant = ((n*k) + (((n-1)*n)/2));
        // cout << "CONSTANT IS: " << constant << endl;

        ll left = k;
        ll right = k+n-1;

        const int ops = 100;
        int num_ops = 0;
        ll middle;
        
        while (num_ops < ops){
            middle = (left + right + 1)/2;

            ll to_search = (middle - k + 1);

            ll exp = (2*((to_search*k) + (((to_search-1)*(to_search))/2))) - constant;
            // cout << "LEFT : " << left << endl << "RIGHT: " << right << endl;
            // cout << "middle is: " << middle << " AND exp is: " << exp << endl;
            
            if (exp < 0){
                left = middle;
            }
            else{
                right = middle;
            }
            num_ops++;
        }
        // cout << "LEFT IS: " << left << endl;
        // cout << "RIGHT IS: " << right << endl;
        ll ans = INT64_MAX;
        // ll final_ans = left;

        for (ll i = left - 2; i < right + 2; i++){
            
            if ((i < k) || (i > (k+n-1))){
                continue;
            }
            // cout << "POTENTIAL CANDIDATE: " << i << endl;

            // i = (i-k+1);
            ll to_do = i - k + 1;

            ll exp = abs((2*((to_do*k) + (((to_do-1)*(to_do))/2))) - constant);
            // cout << "ExPression in the end is: " << exp << endl;
            if (exp < ans){
                ans = exp;
                // final_ans = to_do;
            }
            // ans = min(ans, abs(exp));

        }

        cout << ans << endl;

        // ll a_val = 1;
        // ll b_val = 2*k - 1;
        // ll c_val = ((n*k) + (((n-1)*n)/2));

        // ll discrim = b_val*b_val - (4*a_val*c_val);

        // double sq_discrim = (sqrt(discrim) - b_val)/2;

        // ll closest = floor(sq_discrim)-1;

        // ll ans1 = INT64_MAX;





                

    }
}