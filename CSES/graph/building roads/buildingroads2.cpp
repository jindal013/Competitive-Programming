#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int n, m;
vector<int> adj[100005];
bool visited[100005];
vector<int> ans;

void dfs(int i){
    if (visited[i]) return;
    visited[i] = true;
    
    for (auto u : adj[i]){
        dfs(u);
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
        ans.push_back(i);
        dfs(i);   
    }

    int req = ans.size() - 1;
    cout << req << endl;

    for (int j = 0; j < req; j++){
        cout << ans[j] << " " << ans[j+1] << endl;
    }
}