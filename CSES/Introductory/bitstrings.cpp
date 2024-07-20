#include <iostream>
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long x = 0, m = 1e9 + 7, ans = 1;

    cin >> x;

    while(x--){
        ans *= 2;
        ans %= m;
    }

    cout << ans;


}