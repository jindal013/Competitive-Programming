// for substasks 1 & 2 only

#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio

    long long n, m, k;

    cin >> n >> m >> k;

    if ((k<n) || (k >= 2*n)){
        cout << -1 << endl;
    }
    else{
        int q = k-n;
        if (q % 2 == 1){
            for (int i = 0; i < ((q+1)/2); i++){
                if (i == 0) cout << "1 2";
                else cout << " 1 2";
            }

            for (int i = 0; i < (n-1-q); i++){
                cout << " 2";
            }
            cout << endl;
        }
        else{
            for (int i = 0; i < ((q+1)/2); i++){
                if (i == 0) cout << "1 2";
                else cout << " 1 2";
            }
            for (int i = 0; i < (n-q); i++){
                cout << " 1";
            }
            cout << endl;
        }
    }
}