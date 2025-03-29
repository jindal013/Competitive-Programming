#include <iostream>
#include <vector>
using namespace std;

vector<int> digits(10);

bool check(){
    for (auto i : digits){
        if (i > 0){
            return false;
        }
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a;
    bool valid;
    vector<int> ans;
    cin >> t;
    // vector<int> arr;

    for (int i = 0; i < t; i++){
        valid = true;
        ans.clear();
        digits = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> a;
            digits[a]--;
            if (check()){
                ans.push_back(j+1);
                valid = false;
            }
        }
        if (valid){
            // arr.push_back(0);
            cout << 0 << endl;
        }
        else{
            // arr.push_back(ans.at(0));
            cout << ans.at(0) << endl;
        }
    }

    // for (auto it : arr){
    //     cout << it << endl;
    // }
}