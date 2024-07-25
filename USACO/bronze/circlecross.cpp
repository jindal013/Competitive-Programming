#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    vector<vector<int>> cows(26, vector<int>(26, 0));
    vector<int> check(26, 0);

    string s;
    int ans = 0;
    cin >> s;

    for (int i = 0; i < 51; i++){
        //cows.at(int(s[i])-65);
        //cout << s[i] << " ";
        if (check.at(int(s[i])-65) == 0){
            for (int j = i+1; j<52; j++){
                if (s[i] == s[j]){
                    //cout << "NOW!" << endl;
                    break;
                }
                cows.at(int(s[i])-65).at(int(s[j])-65)++;
            }
        }
        check.at(int(s[i])-65) = 1;
    }

    for (auto it : cows){
        for (int i : it){
            if (i == 1){
                ans++;
            }
        }
    }

    cout << ans/2;

}