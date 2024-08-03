#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio 

    // code here 
    int n, m;

    cin >> n >> m;

    vector<tuple<int, int, int>> cows(n);
    vector<tuple<int, int, int, int>> ac(m);

    for (auto &it : cows){
        cin >> get<0>(it) >> get<1>(it) >> get<2>(it); 
    }

    for (auto &it : ac){
        cin >> get<0>(it) >> get<1>(it) >> get<2>(it) >> get<3>(it); 
    }

    // code here after storing everything

}