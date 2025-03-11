#include <iostream>
#include <vector>
#include <stack>
#define endl "\n"
using namespace std;

void setIO(string s){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("revegetate");
    char c;
    int n, m, a, b;

    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n);
    vector<int> visited(n, 0);

    for (int i = 0; i < m; i++){
        cin >> c >> a >> b;
        adj.at(--a).emplace_back(--b, c == 'D');
        adj.at(b).emplace_back(a, c == 'D');
    }

    int count = 0;
    int poss = true;

    for (int i = 0; i < n; i++){
        if (visited[i]) continue;
        count++;
        // cout << "starting dfs at: " << i << endl;
        visited.at(i) = 1;

        stack<int> dfs;
        dfs.push(i);
        while (!dfs.empty()){
            int node = dfs.top();
            dfs.pop();
            int curr = visited[node];
            // cout << "node: " << node << endl;
            
            for (auto u : adj[node]){
                // cout << "neighbor: " << u.first << endl;
                // if node visited, then check if it satisfies condition
                if (visited[u.first] && ((curr == visited[u.first]) == u.second)){
                    poss = false;
                    goto end;
                }
                else if (!visited[u.first]){
                    visited[u.first] = u.second == 1 ? curr % 2 + 1 : curr;
                    dfs.push(u.first);
                }
            }
        }
    }
end:
    if (poss){
        cout << 1;
        for (int i = 0; i < count; i++){
            cout << 0;
        }
        cout << endl;
        return 0;
    }
    cout << 0 << endl;

}