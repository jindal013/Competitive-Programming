#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int n;
vector<int> nums;
vector<int> layer2;
vector<int> layer;
int ans = 0;

//TODO - find out why this solution gives RTE (running time exception) - floating point exception. Found - due to mods by 0, had to check 0 condition before anything else

void solve(int index, int value = 0){
    if (index == 3){
        if (value <= 24){
            ans = max(ans, value);
        }
    }
    else{
        solve(index+1, value+nums.at(index+1));
        solve(index+1, value-nums.at(index+1));
        //solve(index+1, nums.at(index+1)-value);
        solve(index+1, value*nums.at(index+1));
        
        if (nums.at(index+1) != 0){
            if ((value % nums.at(index+1) == 0)){solve(index+1, int(value/nums.at(index+1)));}
        }        
        // if (nums.at(index+1) % value == 0 && value != 0){
        //     solve(index+1, nums.at(index+1)/value);
        // }
    }
}

void edge_case(){
    layer2.push_back(nums[0] + nums[1]);
    layer2.push_back(nums[0] * nums[1]);
    layer2.push_back(nums[0] - nums[1]);
    if (nums[1] != 0){
        if (nums[0] % nums[1] == 0){layer2.push_back(int(nums[0] / nums[1]));}
    }

    layer.push_back(nums[2] + nums[3]);
    layer.push_back(nums[2] * nums[3]);
    layer.push_back(nums[2] - nums[3]);
    if (nums[3] != 0){
        if ((nums[2] % nums[3] == 0)){layer.push_back(int(nums[2] / nums[3]));}
    }

    for (int i : layer){
        for (int j : layer2){
            if ((i+j) <= 24){
                ans = max(ans, i+j);
            }
            if ((i-j) <= 24){
                ans = max(ans, i-j);
            } 
            if ((i*j) <= 24){
                ans = max(ans, i*j);
            } 
            if (j != 0){
                if ((i % j == 0)){
                    if ((i/j) <= 24){ans = max(ans, int(i/j));
                    }
                }
            }  
        }
    }

    layer.clear();
    layer2.clear();

}

int main(){
    fastio

    cin >> n;

    while(n--){
        nums.clear();
        
        nums.resize(4);
        for (int i = 0; i < 4; i++){
            cin >> nums.at(i);
        }
        sort(nums.begin(), nums.end());
        
        do{
            solve(0, nums.at(0));
            edge_case();

        } while(next_permutation(nums.begin(), nums.end()));

        cout << ans << endl;
        ans = 0;
    }

}