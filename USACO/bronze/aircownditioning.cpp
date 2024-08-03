#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio 

    // code here 
    int n, m, a, b, c;
    int ans = 20000;

    cin >> n >> m;

    vector<int> cows(101, 0);
    vector<tuple<int, int, int, int>> ac(m);

    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        cows.at(a-1) += c;
        cows.at(b) -= c;
    }

    for (auto &it : ac){
        cin >> get<0>(it) >> get<1>(it) >> get<2>(it) >> get<3>(it); 
    }

    // using bitmasks
    for (int mask = 0; mask < (1 << m); mask++){
        int cost = 0; 
        int valid = 1;
        vector<int> dup = cows;
        
        for (int i = 0; i < m; i++){
            if (mask&(1<<i)){
            
            dup.at(get<0>(ac.at(i))-1) -= get<2>(ac.at(i)); 
            dup.at(get<1>(ac.at(i))) += get<2>(ac.at(i));
            cost += get<3>(ac.at(i)); 
                          
            }
        }

        for (int j = 0; j < 101; j++){
            if (j == 0){
                if (dup.at(j) > 0){
                    valid = 0;
                }
            }
            else {
                dup.at(j) += dup.at(j-1);
                if (dup.at(j) > 0){
                    valid = 0;
                }
            }
        }

        if (valid){
            ans = min(cost, ans);
        }

    }

    cout << ans << endl;

}