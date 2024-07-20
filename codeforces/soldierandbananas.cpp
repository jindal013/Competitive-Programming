//#include <bits/stdc++.h>
#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){

    int k, n, w;

    cin >> k >> n >> w;

    k = k*(w)*(w+1)/2;

    cout << max(0, k-n);

}