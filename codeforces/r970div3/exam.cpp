#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        // code here
        int a, b;
        cin >> a >> b;

        // int ans = a + 2*b;

        if (a % 2 == 0){
            if ((a == 0) && (b % 2 == 1)) cout << "NO" << endl;
            else cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }

        // if (ans % 2 == 0){
        //     if (a % 2 == 0){
        //         if ((a == 0) && (b % 2 == 1)){
        //             cout << "NO" << endl;
        //         }
        //         else{
        //             cout << "YES" << endl;
        //         } 
        //     }
        //     else{
        //         cout << "NO" << endl;
        //     }
            
        //     // do thing
        // }
        // else{
        //     cout << "NO" << endl;
        // }
    }
}