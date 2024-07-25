#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m, ans = 0;

    cin >> n >> m;
    vector<vector<char>> spots(n, vector<char>(m));
    vector<vector<char>> plain(n, vector<char>(m));

    for (auto &it:spots){
        for (char &c : it){
            cin >> c;
        }
    }

    for (auto &it:plain){
        for (char &c : it){
            cin >> c;
        }
    }

    //cout << spots.at(2).at(3) << endl;

    for (int i = 0; i<m-2; i++){
        for (int j = i+1; j<m-1; j++){
            for (int k = j+1; k < m; k++){

                set<string> set_spots;
                set<string> set_plain;

                for (int l = 0; l < n; l++){
                    string temp = "";
                    temp += spots.at(l).at(i);
                    temp += spots.at(l).at(j);
                    temp += spots.at(l).at(k);
                    set_spots.insert(temp);
                    temp = "";
                    temp += plain.at(l).at(i);
                    temp += plain.at(l).at(j);
                    temp += plain.at(l).at(k);
                    set_plain.insert(temp);
                }

                int num = 1;

                for (auto &s : set_spots){
                    if (set_plain.count(s) > 0){
                        num = 0;
                        break;
                    }
                }

                ans += num;
                //cout << endl;

            }
        }
    }

    cout << ans;


}