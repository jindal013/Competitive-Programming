#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void SetIO(string s){
    freopen(((s) + ".in").c_str(), "r", stdin);
    freopen(((s) + ".out").c_str(), "w", stdout);
}

int main(){
    fastio
    SetIO("div7");

    int64_t n;
    cin >> n;

    vector<tuple<int, int, int>> v(7, make_tuple(INT32_MAX, INT32_MIN, 0));
    
    int64_t x = 0;
    int64_t num = 0;
    get<0>(v.at(0)) = -1;

    for (int i = 0; i < n; i++){
        cin >> num;
        x = ((x + num) % 7);
        if (x){
            get<0>(v.at(x)) = min(get<0>(v.at(x)), i);
            get<1>(v.at(x)) = max(get<1>(v.at(x)), i);
            get<2>(v.at(x)) = 1;
        }
        else{
            get<1>(v.at(x)) = i;
            get<2>(v.at(x)) = 1;
        }
    }

    int ans = 0;

    for (auto &i : v){
        if (get<2>(i)){
            ans = max(get<1>(i) - get<0>(i), ans);
        }
        // cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;
    }

    cout << ans << endl;

}