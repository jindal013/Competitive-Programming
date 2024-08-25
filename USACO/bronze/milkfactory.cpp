#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    // freopen("factory.in", "r", stdin);
    // freopen("factory.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> vec(n, 0);

    for (int i = 0; i < n-1; ++i){
        int a, b;
        cin >> a >> b;
        vec.at(a-1)++;
    }

    int count = 0;
    int ind = -1;

    for (int i = 0; i < n; ++i){
        if (vec.at(i) == 0){
            count++;
            ind = i+1;
        }
    }

    cout << ((count == 1) ? ind : -1);
    
}