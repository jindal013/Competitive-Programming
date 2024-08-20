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
        //int ans = -1;

        if (n % 2 == 0){
            cout << -1 << endl;
        }
        else{
            for (int i = 0; i < ((n+1)/2); i++){
                cout << 2*(i+1) - 1 << " ";
            }

            if (n != 1){
                cout << (n-1);
            }

            for (int i = 0; i < ((n-1)/2)-1; ++i){
                cout << " " << (n-1)-(2*(i+1));
            }
            cout << endl;
        }

    }
}