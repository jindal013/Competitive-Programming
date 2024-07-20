//#include <bits/stdc++.h>
#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){

    int n, ans, a, b, c;
    cin >> n;
    ans = 0;

    while (n > 0){
        cin >> a >> b >> c;
        if ((a+b+c)>=2) ans++;
        n--;
    }

    cout << ans;

}