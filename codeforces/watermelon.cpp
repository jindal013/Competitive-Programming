//#include <bits/stdc++.h>
#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){

    int n;
    cin >> n;

    if ((n>2) && ((n%2)==0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}