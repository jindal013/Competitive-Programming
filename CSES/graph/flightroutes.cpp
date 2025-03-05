#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<vector<int>> adj2;
vector<bool> visited;

int dfs(int s){
    if (visited[s]) return 0;
    visited[s] = true;
    int num = 1;
    
    for (int u : adj[s]){
        num += dfs(u);
    }
    return num;
}

int dfs2(int s){
    if (visited[s]) return 0;
    visited[s] = true;
    int num = 1;
    
    for (int u : adj2[s]){
        num += dfs2(u);
    }
    return num;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    
    cin >> n >> m;
    adj.assign(n, {});
    adj2.assign(n, {});
    visited.assign(n, false);

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[--a].push_back(--b);
        adj2[b].push_back(a);
    }

    if (dfs(0) != n){
        cout << "NO" << endl;
        for (int j = 0; j < n; j++){
            if (!visited[j]){
                cout << 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    else{
        visited.assign(n, false);
        if (dfs2(0) != n){
            cout << "NO" << endl;
            for (int j = 0; j < n; j++){
                if (!visited[j]){
                    cout << j + 1 << " " << 1 << endl;
                    return 0;
                }
            }
        }
    }

    // for (int i = 0; i < n; i++){
    //     visited.assign(n, false);
    //     // cout << "RUNNING THIS LOOP" << endl;
    //     if (dfs(i) != n){
    //         cout << "NO" << endl;
    //         for (int j = 0; j < n; j++){
    //             if (!visited[j]){
    //                 cout << i + 1 << " " << j + 1 << endl;
    //                 return 0;
    //             }
    //         }
    //     }
    //     // for (int j = 0; j < n; j++){
    //     //     if (!visited[j]){
    //     //         cout << "NO" << endl;
    //     //         cout << i + 1 << " " << j + 1 << endl;
    //     //         return 0;
    //     //     }
    //     // }
    // }

    cout << "YES" << endl;
}
