//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
    
    int n;
    int ans = 0;
    int hat_num = 0;
    vector<int> hats(n+1);
    hats.at(0) = 0;

    cin >> n;

    for (int i = 1; i <= (n/2); i++){
        cin >> hat_num;
        hats.at(i) += hat_num;
    }

    for (int i = 1; i <= (n/2); i++){
        cin >> hat_num;
        if (hats.at(i) == hat_num){
            ans += 2;
        }
    }

    cout << ans << endl;
    
}