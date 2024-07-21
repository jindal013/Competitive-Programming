#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> ai(n);
    vector<int> id_final(n);
    vector<int> moveto(n);

    for (int &i:ai){
        cin >> i;
    }

    for (int i = 1; i < (n+1); i++){
        moveto.at(ai.at(i-1)-1) = i-1;
    }

    for (int &i:id_final){
        cin >> i;
    }

    for (int i = 0; i < 3; i++){
        vector<int> ans(n);

        for (int j = 0; j < n; j++){
            ans.at(moveto.at(j)) = id_final.at(j);
        }

        id_final = ans;

    }

    for (int &i:id_final){
        cout << i << endl;
    }    

}