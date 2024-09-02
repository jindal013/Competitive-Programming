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

        vector<pair<int, int>> perm(n);
        vector<int> ans(n, 0);
        vector<int> chosen(n, 0);

        for (auto &i : perm){
            cin >> i.first;
        }
        
        string s;
        cin >> s;

        for (int i = 0; i < n; i++){
            perm.at(i).second = int(s.at(i)) - 48;
        }

        // for (auto &i : perm){
        //     cin >> i.second;
        // }

        for (int i = 0; i < n; i++){
            if (perm.at(i).second == 0 && !chosen.at(i)){
                // code here
                int num_blacks = 0;
                vector<int> nums;
                
                int start = i;
                int next = perm.at(i).first - 1;
                // ans.at(next)++;
                nums.push_back(next);
                chosen.at(next) = 1;
                if (perm.at(next).second == 0){
                    num_blacks++;
                }
                
    
                while (next != start){
                    int temp = next;
                    next = perm.at(temp).first - 1;
                    
                    nums.push_back(next);
                    chosen.at(next) = 1;
                    if (perm.at(next).second == 0){
                        num_blacks++;
                    }
                }

                for (int &j : nums){
                    ans.at(j) = num_blacks;
                }

            }
        }

        cout << ans.at(0);
        for (int i = 1; i < n; i++){
            cout << " " << ans.at(i);
        }
        cout << endl;
    }
}