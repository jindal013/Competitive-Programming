#include <bits/stdc++.h>
#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
    vector<int> vec = {1, 2, 3, 4};
    
    for (int it : vec){
        cout << typeid(it).name() << endl;
    }

}
