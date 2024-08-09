#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){ // https://usaco.org/index.php?page=viewproblem2&cpid=667 sets and maps bronze module
    fastio
    // freopen("citystate.in", "r", stdin);
    // freopen("citystate.out", "w", stdout);

    int n, ans = 0;
    cin >> n;
    string city, state;

    map<string, vector<string>> m;

    for (int i = 0; i < n; i++){
        cin >> city >> state;
        string code = city.substr(0, 2);
        m[code].push_back(state);        
    }

    for (auto it = m.begin(); it != m.end(); it++){
        for (int i = 0; i < int((it->second).size()); i++){
            string s2 = (it->second).at(i);
            if (m.count(s2)){
                for (int j = 0; j < int(m[s2].size()); j++){
                    if (m[s2].at(j) == (it->first)){
                        ans++;
                    }
                }
            }
        } 
    }

    cout << ans/2 << endl;


}