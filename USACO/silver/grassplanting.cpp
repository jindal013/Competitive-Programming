#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);

    int n;
    cin >> n;

    vector<vector<int>> adj(n);

    for (int i = 0; i < n-1; ++i){
        int x, y;
        cin >> x >> y;
        adj.at(x-1).push_back(y-1);
        adj.at(y-1).push_back(x-1);
    }

    int ans = 0;

    for (vector<int> &i : adj){
        ans = max(ans, int(i.size()) + 1);
    }

    cout << ans << endl;

}