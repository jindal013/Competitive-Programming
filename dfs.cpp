#include <iostream>
#include <vector>
using namespace std;

void dfs(int s){
    constexpr int N = 5;
    vector<int> adj[N];
    bool visited[N];
    
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u : adj[s]){
        dfs(u);
    }
}


int main(){
    constexpr int N = 5;

    vector<int> adj[N];
    bool visited[N];
}