#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void SetIO(string s){
    freopen(((s) + ".in").c_str(), "r", stdin);
    freopen(((s) + ".out").c_str(), "w", stdout);
}

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        int64_t n;
        cin >> n;

        int64_t sum = 0;
        int64_t factor = (n+1)/2;

        int num, num2, diff;
        bool ans = 0;
        cin >> num;

        int x = num;
        diff = num;
        sum += num;

        for (int64_t i = 1; i < n; i++){
            // int num2;
            cin >> num2;
            diff = num2 - num;
            num = diff;

            if (i % 2){
                if (diff < 0) ans = 1;
            }
            else{
                x = min(diff, x);
            }

            sum += diff;

        }

        if (ans || x < 0 || ((n%2 == 0) && (diff != 0)) || ((n%2 == 1) && (diff != x))){ // figure out why this gets testcase 2 wrong
            cout << -1 << endl;
        }
        else{
            // cout << sum << " ";
            cout << 2*(sum-(factor*x)) << endl;
            // cout << x << endl;
        }



        // for (int64_t i = 1; i < n; i++){
        //     int x;
        //     cin >> x;
        // }


        
    }

}