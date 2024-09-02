#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        // int ans = n;

        vector<vector<int>> v(2, vector<int>(26, 0));
        for (int i = 0; i < n; i++){
            v.at(i%2).at(s.at(i)-'a')++;
        }

        if (n % 2 == 0){
            // we just iterate over the vectors and greedily find the max char that occurs in each odd and even
            int ans = n;
            for (int i = 0; i < 2; i++){
                int max_num = 0;
                for (int j = 0; j < 26; j++){
                    max_num = max(max_num, v.at(i).at(j));
                }
                ans -= max_num;
            }
            cout << ans << endl;

        }
        else{
            // what do we do with that vector?
            vector<vector<int>> del(2, vector<int>(26, 0)); // difference vector which will be built backwards
            // vector<int> del_odds(26, 0);
            vector<vector<int>> new_vec(2, vector<int>(26, 0));
            int final_ans = INT32_MAX;

            for (int i = n-1; i >= 0; i--){
                // code to obtain new_vec and then process it
                
                for (int j = 0; j < 2; j++){
                    for (int k = 0; k < 26; k++){
                        new_vec.at(j).at(k) = (v.at(j).at(k) - del.at(j).at(k) + del.at((j+1)%2).at(k));
                    }
                }

                new_vec.at(i%2).at(s.at(i)-'a')--;

                int ans = n-1;
                
                for (int j = 0; j<2; j++){
                    int max_num = 0;
                    for (int k = 0; k < 26; k++){
                        max_num = max(max_num, new_vec.at(j).at(k));
                    }
                    ans -= max_num;
                }

                final_ans = min(final_ans, ans);
                
                del.at(i%2).at(s.at(i)-'a')++;
            }

            cout << final_ans+1 << endl;
            
        }

    }
}