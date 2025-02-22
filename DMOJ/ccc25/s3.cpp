#include <bits/stdc++.h>
#include <string>
// #define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    // fastio
    
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> ans(q + 1, 0);

    if ((q == 0) && (m != 1)){
        long long ans = 0;
        vector<pair<int, int>> colour_pen(m + 1, {0, 0});
        int min_of_max_pen = INT32_MAX;
        int max_of_min_pen = 0;

        for (int i = 1; i <= n; i++){
            int c, p;
            cin >> c >> p;

            if (p > colour_pen[c].first){
                colour_pen[c].second = colour_pen[c].first;
                colour_pen[c].first = p;
            }
            else if (p > colour_pen[c].second){
                colour_pen[c].second = p;
            }

        }

        // cout << "STARTS HERE!" << endl;

        // for (auto it : colour_pen){
        //     cout << it.first << " " << it.second << endl;
        // }

        for (int i = 1; i <= m; i++){
            ans += colour_pen[i].first;
            min_of_max_pen = min(min_of_max_pen, colour_pen[i].first);
            max_of_min_pen = max(max_of_min_pen, colour_pen[i].second);
        }

        // cout << "HERE" << endl;
        // cout << min_of_max_pen << " " << max_of_min_pen << endl;

        if (max_of_min_pen > min_of_max_pen){
            ans += max_of_min_pen - min_of_max_pen;
        }

        cout << ans << endl;
    }
    else if (m == 1){

        multiset<int> preSet;
        vector<int> current_pretty(n+1); 


        for (int i = 1; i <= n; i++){
            int c, p;
            cin >> c >> p;
            current_pretty[i] = p;
            preSet.insert(p);
        }
        
        cout << *preSet.rbegin() << endl;
        
        for (int i = 0; i < q; i++){
            int type, idx, val;
            cin >> type >> idx >> val;
            
            if (type == 2){
                preSet.erase(preSet.find(current_pretty[idx]));
                current_pretty[idx] = val;
                preSet.insert(val);
            }
            
            cout << *preSet.rbegin() << endl;
        }
    }
    else if (m == 2){

        vector<int> color(n+1), pretty(n+1);
        multiset<int> group_1, group_2;
        
        for (int i = 1; i <= n; i++){
            int c, p;
            cin >> c >> p;
            color[i] = c;
            pretty[i] = p;
            if (c == 1)
                group_1.insert(p);
            else
                group_2.insert(p);
        }
        
        auto get_best_and_second = [&](const multiset<int>& s) -> pair<int,int> {
            int best = 0, second = 0;
            if (!s.empty()){
                best = *s.rbegin();
                auto it = s.rbegin();
                ++it;
                if (it != s.rend()){
                    second = *it;
                }
            }
            return make_pair(best, second);
        };
        
        auto compute_ans = [&]() -> long long {
            auto grp1 = get_best_and_second(group_1);
            auto grp2 = get_best_and_second(group_2);
            long long ans = (long long)grp1.first + grp2.first;
            int extra = max(grp1.second, grp2.second) - min(grp1.first, grp2.first);
            if (extra > 0)
                ans += extra;
            return ans;
        };
        
        cout << compute_ans() << endl;
        
        for (int i = 0; i < q; i++){
            int type, idx, val;
            cin >> type >> idx >> val;
            
            if (type == 1){
                int old_color = color[idx];
                int p = pretty[idx];
                if (old_color == 1){
                    group_1.erase(group_1.find(p));
                }
                else{
                    group_2.erase(group_2.find(p));
                }
                color[idx] = val;
                if (val == 1)
                    group_1.insert(p);
                else
                    group_2.insert(p);
            }
            else if (type == 2){
                int cur_color = color[idx];
                int old_pretty = pretty[idx];
                if (cur_color == 1){
                    group_1.erase(group_1.find(old_pretty));
                    group_1.insert(val);
                }
                else{
                    group_2.erase(group_2.find(old_pretty));
                    group_2.insert(val);
                }
                pretty[idx] = val;
            }
            
            cout << compute_ans() << endl;
        }
    }
    else {
        //answer here for that
    }

}
