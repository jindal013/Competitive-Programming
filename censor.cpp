#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    // freopen("censor.in", "r", stdin);
    // freopen("censor.out", "w", stdout);

    string s, censor;
    cin >> s >> censor;
    set<int, greater<int>> startpoints;

    int length = s.size();
    int clength = censor.size();

    for (int i = 0; i < length; i++){
        if (s[i] == censor[0]){
            startpoints.insert(i);
        }
    }
    
    for (int i : startpoints){
        if (i+clength <= length){
            if (s.substr(i, clength) == censor){
                s = s.substr(0, i) + s.substr(i+clength);
            }
        }
    }
    
    cout << s;
    
}