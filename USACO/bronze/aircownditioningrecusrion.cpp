#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;


int n, m, a, b, c;
int ans = 20000;

vector<int> cows(101, 0);
vector<tuple<int, int, int, int>> ac;
vector<tuple<int, int, int, int>> subsets;

bool valid;
int cost;

void search(int index){
    
    if (index == m){
        vector<int> dup = cows;
        valid = true;
        cost = 0;

        for (auto &it : subsets){
            dup.at(get<0>(it)-1) -= get<2>(it);
            dup.at(get<1>(it)) += get<2>(it);
            cost += get<3>(it);
        }

        for (int j = 0; j < 101; j++){
            if (j == 0){
                if (dup.at(j) > 0){
                    valid = false;
                }
            }
            else{
                dup.at(j) += dup.at(j-1);
                if (dup.at(j) > 0){
                    valid = false;
                }
            }
        }

        if (valid){
            ans = min(ans, cost);
        }

        return;
    }
    search(index + 1);
    subsets.push_back(ac.at(index));
    search(index + 1);
    subsets.pop_back();

}


int main(){
    fastio 

    cin >> n >> m;
    ac.resize(m);

    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        cows.at(a-1) += c;
        cows.at(b) -= c;
    }

    for (auto &it : ac){
        cin >> get<0>(it) >> get<1>(it) >> get<2>(it) >> get<3>(it); 
    }
    
    search(0);

    cout << ans << endl;
}