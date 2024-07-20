#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n, a, b, g, temp;
    vector<int> ans{0, 0, 0};
    vector<int> s1{1, 0, 0};
    vector<int> s2{0, 1, 0};
    vector<int> s3{0, 0, 1};

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> a >> b >> g;
        a--;
        b--;
        g--;

        swap(s1[a], s1[b]);
        swap(s2[a], s2[b]);
        swap(s3[a], s3[b]);

        ans[0] += s1[g];
        ans[1] += s2[g];
        ans[2] += s3[g];

    }
    
    sort(ans.begin(), ans.end());
    cout << ans[2] << endl;
}