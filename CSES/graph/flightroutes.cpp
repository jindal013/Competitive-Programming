#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int s){
    if (visited[s]) return;
    visited[s] = true;
    
    for (int u : adj[s]){
        dfs(u);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    
    cin >> n >> m;
    adj.assign(n, {});
    visited.assign(n, false);

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj.at(--a).push_back(--b);
    }

    for (int i = 0; i < n; i++){
        visited.assign(n, false);
        // cout << "RUNNING THIS LOOP" << endl;
        dfs(i);
        for (int j = 0; j < n; j++){
            if (!visited[j]){
                cout << "NO" << endl;
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}
