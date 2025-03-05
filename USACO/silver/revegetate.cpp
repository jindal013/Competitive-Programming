#include <iostream>
#include <vector>
#include <bitset>
#define endl "\n"
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> visited;
bool poss = true;

void dfs(int s){
    // do dfs here and check for conditions by making the bipartite graph
    int colour = visited[s];
    int ncolour;

    for (auto u : adj[s]){
        if (u.second){
            ncolour = (colour == 1) ? 2 : 1;
        }
        else{
            ncolour = colour;
        }

        if (visited[u.first] != 0){
            if (visited[u.first] != ncolour){
                poss = false;
            }
        }
        else{
            visited[u.first] = ncolour;
            dfs(u.first);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    int n, m, a, b;
    char c;
    cin >> n >> m;

    adj.assign(n+1, {});
    visited.assign(n+1, 0);
    
    for (int i = 1; i <= m; i++){
        cin >> c;
        cin >> a >> b;
        if (c == 'S'){
            adj.at(a).emplace_back(b, 0);
            adj.at(b).emplace_back(a, 0);
            continue;
        }
        adj.at(a).emplace_back(b, 1);
        adj.at(b).emplace_back(a, 1);
    }

    int ans = 0;

    for (int i = 1; i <=n; i++){
        if (visited[i]) continue;
        visited[i] = 1;
        ans++;
        dfs(i);
    }

    if (poss){
        cout << "1";
        for (int i = 0; i < ans; i++){
            cout << "0";
        }
        cout << endl;
        return 0;
    }
    cout << 0 << endl;


}