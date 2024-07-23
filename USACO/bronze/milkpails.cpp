#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m, max_fill, ans = 0;
    cin >> x >> y >> m;

    int maxnum = m/x;

    for (int i = 0; i <= maxnum; i++){
        max_fill = i*x + ((m - i*x)/y)*y;
        ans = max(ans, max_fill);
        
    }

    cout << ans << endl;

}