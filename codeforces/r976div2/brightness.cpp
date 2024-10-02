#include <iostream>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        int64_t k;
        cin >> k;
        int64_t l = 0, r = 1e10;

        while (l < r){
            int64_t m = (l + r + 1)/2;
            if ((m*m + m) >= k){
                r = m - 1;
            }
            else{
                l = m;
            }
        }

        cout << (k + l + 1) << endl;

    }
}