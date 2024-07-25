#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    // freopen("measurement.in", "r", stdin);
    // freopen("measurement.out", "w", stdout);

    int n, change = 0;
    string s;
    cin >> n;

    vector<tuple<int, int, int>> vec(n);

    for (int i = 0; i < n; i++){
        cin >> get<0>(vec.at(i));
        cin >> s;
        if (s[0] == 'B'){
            get<1>(vec.at(i)) = 0;
        }
        else if (s[0] == 'E'){
            get<1>(vec.at(i)) = 1;
        }
        else{
            get<1>(vec.at(i)) = 2;
        }
        cin >> get<2>(vec.at(i));
        
    }

    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return get<0>(a) < get<0>(b);
    });


    vector<int> sim{7, 7, 7};

    for (auto &it : vec){
        sim.at(get<1>(it)) += get<2>(it);
        
    }



}