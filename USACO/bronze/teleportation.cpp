//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int n1 = min(abs(c-a), abs(d-a));
    int n2 = min(abs(c-b), abs(d-b));

    cout << min(abs(b-a), (n1 + n2)) << endl;

}