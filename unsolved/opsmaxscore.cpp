#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
#define int long long
using namespace std;

int32_t main(){
    fastio

    int t, n, k;
    cin >> t;

    while(t--){
        // https://codeforces.com/contest/1998/problem/C

        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (auto &it : a){
            cin >> it.first;
        }
        for (auto &it : a){
            cin >> it.second;
        }

        sort(a.begin(), a.end());

        if (n%2 == 1){
            int med1 = (n-1)/2;
            int med2 = med1 - 1;
            int max1_0 = INT32_MAX, max1_1 = INT32_MAX, max2_0 = INT32_MAX, max2_1 = INT32_MAX;
            int max1_final = 0, max2_final = 0;

            for (int i = 0; i < med1; i++){
                if (a.at(i).second == 1){
                    max1_1 = max(max1_1, a.at(i).first);
                }
                else{
                    max1_0 = max(max1_0, a.at(i).first);
                }
            }

            if (a.at(med1).second == 1){
                max1_final = a.at(med1).first + k + max(max1_0, max1_1);
            }
            else{
                max1_final = max(a.at(med1).first + k + max1_1, a.at(med1).first + max1_0); 
            }

            for (int i = med1; i < n; i++){
                if (a.at(i).second == 1){
                    max2_1 = max(max2_1, a.at(i).first);
                }
                else{
                    max2_0 = max(max2_0, a.at(i).first);
                }
            }

            if (a.at(med2).second == 1){
                max2_final = a.at(med2).first + k + max(max2_0, max2_1);
            }
            else{
                max2_final = max(a.at(med2).first + k + max2_1, a.at(med2).first + max2_0); 
            }

            cout << max(max1_final, max2_final) << endl;

        }
        else{
            int med1 = n/2;
            int med2 = med1 - 1;
            int max1_0 = INT32_MAX, max1_1 = INT32_MAX, max2_0 = INT32_MAX, max2_1 = INT32_MAX;
            int max1_final = 0, max2_final = 0;

            for (int i = 0; i < n; i++){
                if (a.at(i).second == 1){
                    max1_1 = max(max1_1, a.at(i).first);
                }
                else{
                    max1_0 = max(max1_0, a.at(i).first);
                }
            }

            if (a.at(med2).second == 0){
               cout << max(max1_1 + k + med2, max1_0 + k + med2); 
            }
            else{
                cout << max(max1_1 + k + med2, max1_0 + k + med2);
            }
        }


      

    }

}