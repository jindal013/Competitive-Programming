#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n, pos, count = 0, answer;
    cin >> n;

    vector<int> ri(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++){
        cin >> ri.at(i);
    }
    
    for (int i = 0; i < n; i++){
        count = 0;
        for (int j = i; j < (n+i); j++){
            pos = j % n;
            ans.at(i) += count * ri.at(pos);
            count++;
        }
        if (i == 0) { answer = ans.at(i); }
        else {answer = min(answer, ans.at(i));}
    }

    cout << answer << endl;

}