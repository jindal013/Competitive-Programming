#include <bits/stdc++.h>
#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio

    int a = 5;
    int b = 1;
    int i = 540;
    int *pa = &a;

    while (b){
        if (*(pa+i) != NULL) {
            cout << *(pa+i) << endl;
            cout << i << endl;
            b = 0;
        }
        else {
            i++;
        }
    }
    // vector<int> vec = {1, 2, 3, 4};
    
    // for (int it : vec){
    //     cout << typeid(it).name() << endl;
    // }

}
