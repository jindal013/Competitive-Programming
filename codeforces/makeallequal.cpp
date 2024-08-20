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

        map<int, int> m;

        int x;

        for (int i = 0; i<n; i++){
            cin >> x;
            if (m.count(x)){
                m[x]++;
            }
            else{
                m[x] = 1;
            }
        }

        int max_num = -1;

        for (auto &it : m){

            if (it.second > max_num){
                max_num = it.second;
            }
            
        }

        cout << (n-max_num) << endl;
    }
}