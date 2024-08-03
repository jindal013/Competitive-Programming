#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio 

    vector<vector<char>> board(8, vector<char>(8));
    vector<int> rows{0, 1, 2, 3, 4, 5, 6, 7};
    int ans = 0;

    for (auto &it : board){
        for (auto &it2: it){
            cin >> it2;
        }
    }

    do {

        int works = 1;
        
        set<int> pdiagonals;
        set<int> ndiagonals;

        for (int i = 0; i < 8; i++){
            if (board.at(rows.at(i)).at(i) == '*') { works = 0; };
            pdiagonals.insert(i+rows.at(i));
            ndiagonals.insert(i-rows.at(i));
        }

        if (pdiagonals.size() != 8 || ndiagonals.size() != 8){
            works = 0;
        }

        ans += works;

    } while (next_permutation(rows.begin(), rows.end()));

    cout << ans;


}