#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    vector<int> limits(101);
    vector<int> speed(101);

    int n, m, a, b, prev = 1, ans = 0;

    cin >> n >> m;

    while(n--){
        cin >> a >> b;
        for (int i = 0; i < a; i++){
            limits.at(prev+i) = b;
        }
        prev += a;
    }

    prev = 1;

    while(m--){
        cin >> a >> b;
        for (int i = 0; i < a; i++){
            speed.at(prev+i) = b;
        }
        prev += a;
    }

    for (int i = 1; i<101; i++){
        ans = max(ans, (speed.at(i)-limits.at(i)));
    }

    cout << ans << endl;

}