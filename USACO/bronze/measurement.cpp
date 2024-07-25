#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n, change = 0;
    string s;
    cin >> n;

    vector<tuple<int, int, int>> vec(n);

    for (int i = 0; i < n; i++){
        cin >> get<0>(vec.at(i));
        cin >> s;
        if (s[0] == 'B'){
            get<1>(vec.at(i)) = 0;
        }
        else if (s[0] == 'E'){
            get<1>(vec.at(i)) = 1;
        }
        else{
            get<1>(vec.at(i)) = 2;
        }
        cin >> get<2>(vec.at(i));
        
    }

    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return get<0>(a) < get<0>(b);
    });

    // for (auto &it : vec){
    //     cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it) << endl;
    // }


    vector<int> sim{7, 7, 7};
    vector<int> rank1{2, 3};

    for (auto &it : vec){
        sim.at(get<1>(it)) += get<2>(it);
        //cout << sim.at(0) << sim.at(1) << sim.at(2) << endl;
        vector<int> rank(2);
        int max_num = -1, number = 0, index = -1;
        for (int i = 0; i < 3; i++){
            max_num = max(max_num, sim.at(i));
        }
        //cout << max_num << endl;
        for (int i = 0; i < 3; i++){
            if (sim.at(i) == max_num){
                number++;
                index = i;
            }
        }
        rank.at(0) = index;
        rank.at(1) = number;

        if ((rank1.at(0) != rank.at(0)) || (rank1.at(1) != rank.at(1))){
            change++;
            rank1.at(0) = rank.at(0);
            rank1.at(1) = rank.at(1);
        }

    }

    cout << change << endl;

}