#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int N, M;
bool visited[100005];
vector<int> adj[100005];
vector<int> ans_arr;

void dfs(int s){
    if (visited[s]) return;
    visited[s] = true;

    for (auto u : adj[s]){
        dfs(u);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, ans = -1;
    cin >> N >> M;

    for (int i = 0; i < M; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= N; i++){
        if (visited[i]) continue;
        ans_arr.push_back(i);
        dfs(i);

        ans++;        
    }

    cout << ans << endl;

    for (int i = 0; i < int(ans_arr.size() - 1); i++){
        cout << ans_arr[i] << " " << ans_arr[i+1] << endl;
    }

}