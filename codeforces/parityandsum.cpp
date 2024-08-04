#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long t, n;
    cin >> t;

    while (t--){
        cin >> n;
        long long ans = 0;
        vector<long long> nums(n);

        bool odd = false;
        long long maxodd = 0;
        vector<long long> evens;


        for (long long &i : nums){
            cin >> i;
            if (i % 2 == 1){
                maxodd = max(maxodd, i);
                odd = true;
            }
            else{
                evens.push_back(i);
            }
        }

        if (!odd){
            cout << 0 << endl;
            continue;
        }

        sort(evens.begin(), evens.end());
        int addon = 0;


        for (long long i = 0; i < (long long)(evens.size()); i++){
            if (evens.at(i) < maxodd){
                maxodd += evens.at(i);
            }
            else{
                addon = 1;
                maxodd += 2*evens.at(i);
            }
            ans++;
        }

        cout << (ans+addon) << endl;


    }


}