#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

bool valid(int &target, vector<int> &config, int &size){
    bool works = true;

    int curr_sum = 0;

    for (int i = 0; i < size; i++){
        curr_sum += config.at(i);
        if (curr_sum == target){
            curr_sum = 0;
        }
        else if (curr_sum > target){
            works = false;
        }
    }

    return works;
}

int solve(int &n, vector<int> &times, int &sum){
    
    int var = 1;

    for (int i = 0; i < n-1 ; i++){
        if (times.at(i) != times.at(i+1)){
            var = 0;
            break;
        }
    }

    if (var){
        return 0;
    }

    for (int i = 2; i <= sum; i++){
        if (sum % i == 0){
            int splits = sum / i;
            if (splits >= n){ continue;}
            int moves = n - splits;

            if (valid(i, times, n)){
                return moves;
            }
        }
    }

    return -1;
}

int main(){
    fastio

    int t, n;
    cin >> t;

    while (t--){
        cin >> n;
        int sum = 0;
        vector<int> values(n);
        for (int &i : values){
            cin >> i;
            sum += i;
        }
        cout << solve(n, values, sum) << endl;
    }


}