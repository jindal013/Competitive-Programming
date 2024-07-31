#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b, linex = 0, liney = 0;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    int ans = 100;

    cin >> n >> b;

    vector<pair<int, int>> cords(n);

    for (auto &it : cords){
        cin >> it.first >> it.second;
    }

    // vector<pair<int, int>> cords_sortedy = cords_sortedx;

    // sort(cords_sortedx.begin(), cords_sortedx.end(), [](auto &a, auto &b){return a.first < b.first;});
    // sort(cords_sortedy.begin(), cords_sortedy.end(), [](auto &a, auto &b){return a.second < b.second;});

    set<int> unique_x;
    set<int> unique_y;
    for (auto &it : cords){
        unique_x.insert(it.first);
        unique_y.insert(it.second);
    }

    for (int i : unique_x){
        linex = i+1;
        for (int j : unique_y){
            liney = j+1;

            q1 = 0;
            q2 = 0;
            q3 = 0;
            q4 = 0;

            for (auto &it : cords){
                if (it.first < linex){
                    if (it.second < liney){
                        q3++;
                    }
                    else{
                        q2++;
                    }
                }
                else{
                    if (it.second < liney){
                        q4++;
                    }
                    else{
                        q1++;
                    }
                }
            }

            ans = min(ans, max(max(max(q1, q2), q3), q4));



        }
    }

    cout << ans;

}