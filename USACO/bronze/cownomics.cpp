#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m, ans = 0;
    bool is_in;
    string s;

    cin >> n >> m;

    vector<set<int>> vec1(m);
    vector<set<int>> vec2(m);

    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < m; j++){
            vec1.at(j).insert(s[j]);
        }
    }

    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < m; j++){
            vec2.at(j).insert(s[j]);
        }
    }

    for (int i = 0; i < m; i++){
        is_in = false;
        for (int j : vec1.at(i)){
            if (vec2.at(i).find(j) != vec2.at(i).end()){
                is_in = true;
            }
        }
        if (!is_in){
            ans++;
        }
    }

    cout << ans << endl;

}