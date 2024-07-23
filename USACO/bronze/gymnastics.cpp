#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n, x, ans = 0, points = 0;

    cin >> k >> n;

    vector<vector<int>> scores(k, vector<int>(n));

    for (int i = 0; i < k; i++){
        for (int j = 1; j <= n; j++){
            cin >> x;
            scores.at(i).at(x-1) = j;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int l = 0; l < k; l++){
                if (scores.at(l).at(i) > scores.at(l).at(j)){
                    points++;
                }
                else{
                    points--;
                }
            }
            if (abs(points) == k){
                ans++;
            }
            points = 0;
        }
    }

    cout << ans;

}