#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;

    cin >> x >> y;

    int diff = abs(x-y);
    int power = ceil(log2(diff));
    int rem = power % 2;
    if (((x-y) > 0) && not rem){
        power++;
    }
    else if ((x-y) < 0){
        power += rem;
    }

    cout << 2*pow(2, power) - 2 + diff;

}