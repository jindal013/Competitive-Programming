#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
vector<int> adj[100005];
bool visited[100005];
vector<int> unconnected;

void dfs(int s){
    // if (visited[s]) return; can do it here or on line 15
    visited[s] = true;
    for (int u : adj[s]){
        if (!visited[u]){
            dfs(u);
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
        unconnected.push_back(i);
        dfs(i);
    }

    int size_vec = unconnected.size();

    cout << size_vec - 1 << endl;

    for (int i = 1; i < size_vec; i++){
        cout << 1 << " " << unconnected[i] << endl;
    }
}