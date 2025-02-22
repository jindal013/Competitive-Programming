#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
bool poss = true;
int visited[100005];
vector<int> adj[100005];

void dfs(int s, int col){
    visited[s] = col;
    for (int u : adj[s]){
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
        if (!visited[i]){
            dfs(i, 1);
        }
    }
    
    if (poss){
        for (int i = 1; i <= n; i++){
            cout << visited[i] << " ";
        }
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
    
}

// incorrect solution below where col is toggled as a global var
// doesn't work since the toggling is not mathematically sound with all edges, it can't just toggle after each query
// work through testcase on CSES and trace memory to understand what im talking about here

// #include <iostream>
// #include <vector>
// #define endl "\n"
// using namespace std;

// int n, m, x = 1;
// bool poss = true;
// int visited[100005];
// vector<int> adj[100005];

// void dfs(int s){
//     if (visited[s]){
//         if (visited[s] != x){
//             poss = false;
//         } 
//         x = (x % 2) + 1;
//         return;
//     }
//     visited[s] = x;
//     x = (x % 2) + 1;

//     for (auto u : adj[s]){
//         dfs(u);
//     }
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int a, b;

//     cin >> n >> m;

//     for (int i = 0; i < m; i++){
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }

//     for (int i = 1; i <= n; i++){
//         if (visited[i] > 0) continue;
//         // visited[i] = 1;
//         dfs(i);
//     }

//     if (poss){
//         for (int i = 1; i <= n; i++){
//             cout << visited[i] << " ";
//         }
//         return 0;
//     }
//     cout << "IMPOSSIBLE" << endl;

// }