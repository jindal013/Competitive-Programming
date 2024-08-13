#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n;
        string s;
        vector<int> nums(n);

        for (int &i : nums){
            cin >> i;
        }

        cin >> m;

        for (int i = 0; i < m; i++){
            cin >> s;
            if (int(s.size()) != n){
                cout << "NO" << endl;
            }
            else{
                map<int, char> m;
                map<char, int> m2;
                string ans = "YES";

                for (int j = 0; j < n; j++){
                    if (m.count(nums.at(j)) > 0){
                        if (m[nums.at(j)] != s.at(j)){
                            ans = "NO";
                            break;
                        }
                    }
                    m[nums.at(j)] = s.at(j);
                }

                for (int j = 0; j < n; j++){
                    if (m2.count(s.at(j)) > 0){
                        if (m2[s.at(j)] != nums.at(j)){
                            ans = "NO";
                            break;
                        }
                    }
                    m2[s.at(j)] = nums.at(j);
                }

                cout << ans << endl;
            }
        }



    }
}