#include <bits/stdc++.h>
#include <string>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

typedef long long ll;

int main(){
    fastio
    
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> graph(n+1);
    for(int i = 0; i < m; i++){
        int u, v, t;
        cin >> u >> v >> t;
        graph[u].push_back({v,t});
        graph[v].push_back({u,t});
    }
    

    vector<bool> visited(n+1, false);

    stack<tuple<int, ll, int>> st;
    
    st.push({1, 0LL, 0});
    
    ll ans = -1;
    
    while(!st.empty()){
        auto [node, cost, boot] = st.top();
        st.pop();
        if(visited[node])
            continue;
        visited[node] = true;
        if(node == n){
            ans = cost;
            break;
        }
        for(auto &edge : graph[node]){
            int nxt = edge.first;
            int temp = edge.second;
            if(!visited[nxt]){
                ll add = abs(boot - temp);
                st.push({nxt, cost + add, temp});
            }
        }
    }
    
    cout << ans << endl;
    
}