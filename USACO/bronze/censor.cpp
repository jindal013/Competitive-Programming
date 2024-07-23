#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    // freopen("censor.in", "r", stdin);
    // freopen("censor.out", "w", stdout);

    string s, censor, ans = "";
    cin >> s >> censor;
    vector<int> startpoints;

    long long length = s.size();
    long long clength = censor.size();

    // for (long long i = 0; i < length; i++){
    //     ans += s[i];
    //     long long index = ans.size()-censor.size();
    //     if (index >= 0){
    //         if (ans.substr(ans.size()-censor.size()) == censor) {
    //             ans = ans.substr(0, ans.size()-censor.size());
    //         }
    //     }
    // }

    //     for (int i = 0; i < s.size(); i++){
    //     ans += s[i];
    //     int index = ans.size()-censor.size();
    //     if (index >= 0){
    //         if (ans.substr(ans.size()-censor.size()) == censor) {
    //             ans = ans.substr(0, ans.size()-censor.size());
    //         }
    //     }

    // }



    for (int i = 0; i < length; i++){
        if (s[i] == censor[0]){
            startpoints.push_back(i);
        }
    }
    
    //sort(startpoints.begin(), startpoints.end());

    // SOLUTION BELOW DOES NOT WORK BECAUSE BACKWARDS != FORWARDS SWEEP
    for (int i = length-1; i >= 0; i--){
        //cout << s[i] << " ";
        if (s[i] == censor[0]){
            if (i+clength <= length){
                    if (s.substr(i, clength) == censor){
                        s = s.substr(0, i) + s.substr(i+clength);
                    }
                }
        }
        
    
    }

    cout << s;
}