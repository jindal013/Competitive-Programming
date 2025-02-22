#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
    constexpr int N = 5;

    vector<int> adj[N];

    queue<int> q;
    bool visited[N];
    int distance[N];

    constexpr int x = 1;

    visited[x] = true;
    distance[x] = 0;
    q.push(x);
    
    while (!q.empty()){
        int s = q.front(); q.pop();
        // process node s

        for (auto u : adj[s]){
            if (visited[u]) continue;
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
}