#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t;
    string x;
    cin >> t;

    while (t--){
        int n, x;
        cin >> n;

        int le, re;

        cin >> le;

        re = le;
        string ans = "YES";

        for (int i = 1; i < n; i++){
            cin >> x;
            if (x < le){
                if (le - x > 1){
                    ans = "NO";
                    continue;
                }
                else{
                    le = x;
                }
            }
            else if (x > re){
                if (x-re > 1){
                    ans = "NO";
                    continue;
                }
                else{
                    re = x;
                }
            }
            else{
                ans = "NO";
                continue;
            }
        }

        cout << ans << endl;


    }
}