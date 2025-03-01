#include <iostream>
#include <vector>
#include <queue>
#define endl "\n"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b;
    cin >> n >> m;

    // vector<int> adj[n + 1];
    vector<vector<int>> adj(n+1, vector<int>());
    // bool visited[n + 1];
    vector<bool> visited(n+1, false);
    vector<int> connected;

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            visited[i] = true;
            connected.push_back(i);
            queue<int> q;
            q.push(i);
            while (!q.empty()){
                int curr = q.front(); 
                q.pop();

                for (int u : adj[curr]){
                    if (!visited[u]){
                        visited[u] = true;
                        q.push(u);
                    }
                }
            }
        }
    }

    int size = connected.size() - 1;

    cout << size << endl;

    for (int i = 0; i < size; i++){
        cout << connected[i] << " " << connected[i+1] << endl;
    }

}