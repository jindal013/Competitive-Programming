#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<int> ans(n, 1);
    vector<set<int>> adj(n);

    for (int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        adj.at(--a).insert(--b);
        adj.at(b).insert(a);
    }

    for (int i = 0; i < n; ++i){
        for (auto &it : adj.at(i)){
            if (ans.at(it) == ans.at(i)){
                ans.at(it)++; // = (ans.at(it) % 4) + 1;

                // gotta check if nothing is broken from previous, beacuse prev it could have been like values of 3, 2, and now those would be 3, 3 and not work anymore for ans.at(it)
                //bool update = false;
                for (int j = 0; j < i; ++j){
                    for (auto &it2 : adj.at(j)){
                        if (ans.at(it2) == ans.at(j)){
                            ans.at(it)++;
                        }
                    }
                }
            }
        }
    }

    for (int &i : ans){
        cout << i;
    }
    
}