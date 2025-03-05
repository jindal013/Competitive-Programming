#include <iostream>
#include <vector>
#include <string.h>
#define endl "\n"
using namespace std;

void setIO(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int component = 1;
int threshold;
vector<int> visited;
vector<vector<pair<int, int>>> adj;

void dfs(int s){
    visited[s] = component;

    for (const auto &[u, w] : adj[s]){
        if (!visited[u] && w >= threshold){
            dfs(u);
        }
    }
}

int main(){
    setIO("wormsort");
    int n, m, a, b, w;
    cin >> n >> m;

    vector<int> pi(n, 0);
    for (auto &i : pi){
        cin >> i;
        --i;
    }

    adj = vector<vector<pair<int, int>>>(n);
    int max_weight = 0;

    for (int i = 0; i < m; i++){
        cin >> a >> b >> w;
        adj.at(--a).emplace_back(--b, w);
        adj.at(b).emplace_back(a, w);
        max_weight = max(max_weight, w);
    }

    int l = 0, h = max_weight + 1, valid = -1;
    // cout << "max weight " << max_weight  << endl;
    while (l <= h){
        int mid = (l + h)/2;
        visited.assign(n, 0);
        threshold = mid;
        // get all connected components with edges that are >= mid

        for (int i = 0; i < n; i++){
            if (visited[i]) continue;
            dfs(i);
            component++;
        }

        // check if this value works
        bool works = true;
        for (int i = 0; i < n; i++){
            if (visited[i] != visited[pi[i]]){
               works = false; 
               break;
            }
        }

        if (works){
            valid = mid;
            l = mid + 1;

        }
        else{
            h = mid - 1;
        }
    }

    cout << ((valid == max_weight + 1) ? -1 : valid) << endl;

}