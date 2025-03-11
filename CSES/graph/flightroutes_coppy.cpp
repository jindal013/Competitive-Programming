#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

vector<vector<int>> adj[2];
vector<bool> visited;

int dfs(int node, int dir){
    if (visited[node]) return 0;
    int count = 1;
    visited[node] = true;

    for (int u : adj[dir][node]){
        count += dfs(u, dir);
    }

    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;

    cin >> n >> m;
    adj[0] = vector<vector<int>>(n);
    adj[1] = vector<vector<int>>(n);

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[0].at(--a).push_back(--b);
        adj[1].at(b).push_back(a);
    }

    visited = vector<bool>(n, false);

    if (dfs(0, 0) != n){
        for (int k = 0; k < n; k++){
            if (!visited[k]){
                cout << "NO" << endl;
                cout << 1 << " " << k+1 << endl;
                return 0;
            }
        }
    }
    
    visited.assign(n, false);

    if (dfs(0, 1) != n){
        for (int k = 0; k < n; k++){
            if (!visited[k]){
                cout << "NO" << endl;
                cout << k+1 << " " << 1 << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    
}