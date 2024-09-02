#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        string s;

        if (n % 2 == 0){
            // n is even so we don't delete any index
            map<char, int> evens;
            map<char, int> odds;

            int max_odd = INT32_MIN, max_even = INT32_MIN;

            for (int i = 0; i < (n/2); i++){
                char c;
                
                cin >> c;
                odds[c]++;

                max_odd = max(max_odd, odds[c]);

                cin >> c;
                evens[c]++;

                max_even = max(max_even, evens[c]);
            }
            cout << (n - max_odd - max_even) << endl;
        }
        else{
            // do this if n is odd
        }

    }
}