#include <iostream>
#include <vector>
#include <math.h>
#define endl "\n"
using namespace std;

int n, m;
vector<pair<int, int>> cow_xy;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> cords = {INT32_MAX, 0, INT32_MAX, 0};
int ans = INT32_MAX;

void dfs(int s){
    visited[s] = true;
    cords[0] = min(cords[0], cow_xy.at(s).first);
    cords[1] = max(cords[1], cow_xy.at(s).first);
    cords[2] = min(cords[2], cow_xy.at(s).second);
    cords[3] = max(cords[3], cow_xy.at(s).second);

    for (int u : adj[s]){
        if (!visited[u]){
            dfs(u);
        }
    }
}

int main(){
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int x, y, a, b;
    
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        cow_xy.emplace_back(x, y);
    }
    
    adj.assign(n, {});
    visited.assign(n, false);

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj.at(a-1).push_back(b-1);
        adj.at(b-1).push_back(a-1);
    }

    for (int i = 0; i < n; i++){
        if (!visited[i]){
            cords = {INT32_MAX, 0, INT32_MAX, 0};
            dfs(i);
            ans = min(ans, 2*(cords[1] - cords[0] + cords[3] - cords[2]));
        }
    }
    cout << ans << endl;
}