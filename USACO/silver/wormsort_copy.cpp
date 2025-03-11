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

int component = 1;
vector<int> visited_components;
vector<vector<pair<int, int>>> adj;
int mid;

void dfs(int s){
    // if (visited_components[s]) return;
    visited_components[s] = component;

    for (auto u : adj[s]){
        if (!visited_components[u.first] && u.second >= mid){
            dfs(u.first);
        }
    }

}

int main(){
    setIO("wormsort");
    
    int n, m, a, b, w, max_w = 0;

    cin >> n >> m;
    
    vector<int> pi(n);
    adj.assign(n, {});
    visited_components.assign(n, 0);

    for (auto &i : pi){
        cin >> i;
        i--;
    }

    for (int i = 0; i < m; i++){
        cin >> a >> b >> w;
        adj.at(--a).emplace_back(--b, w);
        adj.at(b).emplace_back(a, w);
        max_w = max(max_w, w);
        // cout << "width " << i << " is " << w << endl;
    }

    int l = 0, h = max_w + 1;
    bool valid;
    int ans;
    // cout << "max width: " << max_w << endl;

    while (l <= h){
        valid = true;
        component = 1;
        mid = (l + h) / 2;
        visited_components.assign(n, 0);

        for (int i = 0; i < n; i++){
            if (visited_components[i]) continue;
            // visited_components[i] = component;
            dfs(i); // does dfs on i and assigns the entire component based on threshold weight mid
            component++;
        }

        // check if all things from pi satisfy the given condition, need to use valid here
        for (int i = 0; i < n; i++){
            if (visited_components[pi[i]] != visited_components[i]){
                valid = false;
                break;
            }
        }

        if (valid){
            ans = mid; // forgot to keep track of this before, but we need to make sure that everytime its valid we keep track of it. there's guaranteed to be a solution
            l = mid + 1;
            // cout << "ANSWER WORKS: " << mid << endl;;
        }
        else{
            h = mid - 1;
            // cout << "DOESNT WORK: " << mid << endl;
        }
    }

    cout << ((ans == max_w + 1) ? -1 : ans) << endl;

}