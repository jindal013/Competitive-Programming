#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int n;
    cin >> n;
    vector<tuple<char, int, int>> cows(n);
    vector<int> ans(n, INT32_MAX);

    for (auto &it : cows){
        cin >> get<0>(it) >> get<1>(it) >> get<2>(it);
    }



    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                continue;
            }

            if (get<0>(cows.at(i)) == 'N'){
                if (get<0>(cows.at(j)) == 'N'){
                    if (get<1>(cows.at(i)) == get<1>(cows.at(j))){
                        if (get<2>(cows.at(i)) < get<2>(cows.at(j))){
                            ans.at(i) = min(ans.at(i), get<2>(cows.at(j))-get<2>(cows.at(i)));
                        }
                    }
                }
                else{
                    if ((get<2>(cows.at(i)) < get<2>(cows.at(j))) && ( get<1>(cows.at(i)) >= get<1>(cows.at(j)) )){
                        int t1 = get<1>(cows.at(i)) - get<1>(cows.at(j));
                        int t2 = get<2>(cows.at(j)) - get<2>(cows.at(i));
                        if (t1 < t2){
                            ans.at(i) = min(ans.at(i), t2);
                        }
                    }
                }
            }
            else{
                if (get<0>(cows.at(j)) == 'E'){
                    if (get<2>(cows.at(i)) == get<2>(cows.at(j))){
                        if (get<1>(cows.at(i)) < get<1>(cows.at(j))){
                            ans.at(i) = min(ans.at(i), get<1>(cows.at(j))-get<1>(cows.at(i)));
                        }
                    }
                }
                else{
                    if ((get<1>(cows.at(i)) < get<1>(cows.at(j))) && ( get<2>(cows.at(i)) >= get<2>(cows.at(j)) )){
                        int t1 = get<2>(cows.at(i)) - get<2>(cows.at(j));
                        int t2 = get<1>(cows.at(j)) - get<1>(cows.at(i));
                        if (t1 < t2){
                            ans.at(i) = min(ans.at(i), t2);
                        }
                    }
                    
                    
                    // 1st east, 2nd north
                }
            }

        }
    }

    for (int &i : ans){
        cout << (i == INT32_MAX ? "Infinity" : to_string(i)) << endl;
    }
    



    // sort(cows.begin(), cows.end(), [](auto &a, auto &b){
    //     if (get<0>(a) == 'N'){
    //         if (get<0>(b) == 'E'){
    //             return bool(1);
    //         }
    //         else{
    //             if (get<1>(a) == get<1>(b)){
    //                 return (get<2>(a) < get<2>(b));
    //             }
    //             else{
    //                 return (get<1>(a) < get<1>(b));
    //             }
    //         }
    //     }
    //     else{
    //         if (get<0>(b) == 'N'){
    //             return bool(0);
    //         }
    //         else{
    //             if (get<2>(a) == get<2>(b)){
    //                 return (get<1>(a) < get<1>(b));
    //             }
    //             else{
    //                 return (get<2>(a) > get<2>(b));
    //             }
    //         }
    //     }
    // });

    // cout << "BEGIN" << endl;

    // for (auto &it : cows){
    //     cout << get<0>(it) << " " << get<1>(it) << " " << get<2>(it);
    //     cout << endl;
    // }


    // map<int, int> m{{1, 2}, {2, 3}};

    // for (const auto &it : m){
    //     cout << it.first << " " << it.second;
    //     cout << endl;
    // }

}