#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){ // https://usaco.org/index.php?page=viewproblem2&cpid=832 Adhoc problems bronze module
    fastio
    // freopen("milkorder.in", "r", stdin);
    // freopen("milkorder.out", "w", stdout);

    int n, m, k, cow_num, ind_num;
    cin >> n >> m >> k;

    vector<int> order(m);
    vector<int> cows(n, 0);

    for (int & i : order){
        cin >> i;
    }

    int counter = 0;
    vector<int> nums_present{};

    for (int i = 0; i < k; ++i){
        cin >> cow_num >> ind_num;
        if (count(order.begin(), order.end(), cow_num) > 0){
            counter++;
            nums_present.push_back(cow_num);
        }
        cows[ind_num-1] = cow_num;
    }

    if (counter){
        for (int i = 0; i < counter; ++i){

        }

    }
    else{
        for (int i = 0; i < n; i++){
            if (cows.at(i) == 0){
                cout << i+1 << endl;
            }
        }
    }



}