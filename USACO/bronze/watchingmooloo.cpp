#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;
using ll = long long;

int main(){
    fastio;

    ll n, k, x, money = 0, prev;
    cin >> n >> k;
    //bool alt = true;

    cin >> prev;
    money += k + 1;
    ll max_diff = k+1;

    for (int i = 1; i < n; i++){
        cin >> x;
        if (x-prev > max_diff){
            //curr = x;
            prev = x;
            money += k + 1;
            continue;
        }
        money += x-prev;
        prev = x;
    }

    cout << money << endl;

}