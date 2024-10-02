#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int64_t sum(vector<int64_t> &v){
    int64_t total_sum = 0;
    for (int64_t &i : v){
        total_sum += i;
    }
    return total_sum;
}

int main(){
    fastio
    int64_t t;
    cin >> t;

    while (t--){
        int64_t n, a = 0, ans = 0, exp, other_exp;
        int64_t l = 0;
        cin >> n;

        vector<int64_t> b(n);
        // vector<int64_t> ans_arr(n, 0);
        vector<int64_t> top(3);

        for (int64_t &i : b){
            cin >> i;
            if (a < 3){
                top.at(a) = i;
                a++;
            }
        }

        sort(top.begin(), top.end());

        // ans_arr.at(2) = ;
        ans = sum(top) - 2;

        for (int64_t i = 3; i < n; i++){

            if (b.at(i) > top.at(0)){
                if (top.at(0) == b.at(l)){
                    l++;
                }
                top.at(0) = b.at(i);
                sort(top.begin(), top.end());
            }

            exp = sum(top) - (i - l);
            

            other_exp = b.at(i) + b.at(i-1) + b.at(i-2) - 2;

            if (other_exp >= exp){
                l = i-2;
                top.at(0) = b.at(i);
                top.at(1) = b.at(i-1);
                top.at(2) = b.at(i-2);
                sort(top.begin(), top.end());
                // ans_arr.at(i) = other_exp;
            }
            else{
                // ans_arr.at(i) = exp;
            }
            ans = max(ans, max(other_exp, exp));
        }

        cout << ans << endl;

    }
}