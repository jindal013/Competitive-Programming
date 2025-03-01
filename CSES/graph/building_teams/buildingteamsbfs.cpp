#include <iostream>
#include <vector>
#include <queue>
#define endl "\n"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, a, b;
    bool possible = true;

    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<int> team(n + 1);
    
    for (int i = 1; i <= m; i++){
        cin >> a >> b;
        adj.at(a).push_back(b);
        adj.at(b).push_back(a);
    }

    for (int i = 1; i <= n; i++){
        if (team[i]) continue;
        queue<int> q;
        team[i] = 1;
        q.push(i);
        while (!q.empty()){
            int s = q.front();
            q.pop();

            int ncolour = (team[s] == 1) ? 2 : 1;

            for (int u : adj[s]){
                if (team[u]){
                    if (team[u] != ncolour){
                        possible = false;
                        while (!q.empty()){
                            q.pop();
                        }
                        break;
                    }
                }
                else{
                    team[u] = ncolour;
                    q.push(u);
                }
            }
        }
    }

    if (possible){
        for (int i = 1; i <= n; i++){
            cout << team[i] << " ";
        }
        cout << endl;
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
}