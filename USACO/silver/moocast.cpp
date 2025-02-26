#include <iostream>
#include <vector>
#include <tuple>
#include <math.h>
#define endl "\n"
using namespace std;

int n;
tuple<int, int, int> cows[205];
vector<int> adj[205];
int ans = 0;
bool visited[205];

int dfs(int s){
    if (visited[s]) return 0;
    int ans = 1;
    visited[s] = true;

    for (auto u : adj[s]){
        ans += dfs(u);
    }
    return ans;
}

int main(){
    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> get<0>(cows[i]) >> get<1>(cows[i]) >> get<2>(cows[i]);
    }

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            int dis = pow((get<0>(cows[j]) - get<0>(cows[i])), 2) + pow((get<1>(cows[j]) - get<1>(cows[i])), 2);
            if (dis <= pow(get<2>(cows[i]), 2)){
                adj[i].push_back(j);
            }
            if (dis <= pow(get<2>(cows[j]), 2)){
                adj[j].push_back(i);
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            visited[j] = false;
        }
        // for (auto &u : visited){
        //     u = false;
        // }

        int num = dfs(i);
        ans = max(num, ans);

        // do the dfs here with starting node i and calcluate the max notes that it can go to
    }

    cout << ans << endl;
}


// issues that i fixed:
// 1: the i infinite loop instead of j (which is why i was getting the seg faults)
// 2: the iterative loop for (auto u : visited) was modifying a copy not the actual __throw_invalid_argument
// 3: starting the dfs from node 0 and not node 1, when the actual thing is 1 indexed