//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    //freopen("in.in", "r", stdin);
    //freopen("out.out", "w", stdout);

    vector<int> vec;
    int a;

    for (int i = 0; i<7; i++){
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    cout << vec[0] << " " << vec[1] << " " << (vec[6]-vec[0]-vec[1]) << endl;

}