#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
int visited[100005];
vector<int> adj[100005];
bool poss = true;

void dfs(int s, int col){
    visited[s] = col;
    for (auto u : adj[s]){
        if (!visited[u]){
            dfs(u, 3 - col);
        }
        else if (visited[u] == col){
            poss = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (visited[i]) continue;
        dfs(i, 1);
    }

    if (poss){
        for (int i = 1; i <= n; i++){
            cout << visited[i] << " ";
        }
        cout << endl;
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
}