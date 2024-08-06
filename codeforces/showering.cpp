#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, n, s, m;
    cin >> t;

    while(t--){
        cin >> n >> s >> m;
        //vector<pair<int, int>> times(n);
        int ri = 0;
        int li;
        bool pos = false;

        for (int i = 0; i < n; i ++){
            cin >> li;

            if ((li - ri) >= s){
                pos = true;
            }

            cin >> ri;
        }

        if ((m - ri) >= s){
            pos = true;
        }

        if (pos){
            cout << "YES";
        }
        else{
            cout << "NO";
        }

        cout << endl;

    }
}