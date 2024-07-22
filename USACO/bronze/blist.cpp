#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n, s, t, b, ans = 0;
    vector<int> buckets(1001, 0);

    cin >> n;

    while (n--){
        cin >> s >> t >> b;
        for (int i = s; i < t; i++){
            buckets.at(i) += b;
        }
    }

    for (int i : buckets){
        ans = max(ans, i);
    }

    cout << ans;

}