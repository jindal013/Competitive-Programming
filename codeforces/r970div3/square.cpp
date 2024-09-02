#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int check_square(int a){
    int b = floor(sqrt(a) + 2);
    for (int i = 1; i < b; i++){
        if (i*i == a){
            return i;
        }
    }
    return 0;
}

int main(){
    fastio
    // cout << check_square(15) << endl;
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int sqrt_n = check_square(n);

        if (sqrt_n){
            int sum = 0;
            char c;
            for (int i = 0; i < n; i++){
                cin >> c;
                sum += (int(c) - 48);
            }

            if ((n-sum) == (sqrt_n-2)*(sqrt_n-2)){
                cout << "Yes" << endl;
                continue;
            }
            cout << "No" << endl;            
        }
        else{
            string s; cin >> s;
            cout << "No" << endl;
        }


        // string elements;
        // cin >> elements;

        // if (check_square(n)){
        //     int b = check_square(n);
        //     if (b == 1){
        //         if (elements.at(0) == '1')
        //             cout << "Yes" << endl;
        //         else{
        //             cout << "No" << endl;
        //         }
        //         continue;
        //     }
        //     else if (b == 2){
        //         int no_zero = 1;
        //         for (int i = 0; i < 4; i++){
        //             if (elements.at(i) == '0') no_zero = 0;
        //         }

        //         if (no_zero){
        //             cout << "Yes" << endl;
        //         }
        //         else{
        //             cout << "No" << endl;
        //         }
        //         continue;
        //     }
        //     else{
        //         int sum = 0;

        //         for (char &i : elements){
        //             sum += (int(i)-48);
        //         }
        //         // cout << sum << endl;

        //         int diff = n - sum;
        //         if (diff == ((b-2)*(b-2))){
        //             cout << "Yes" << endl;
        //         }
        //         else{
        //             cout << "No" << endl;
        //         }

        //     }
        // }
        // else{
        //     cout << "No" << endl;
        // }
        

    }
}