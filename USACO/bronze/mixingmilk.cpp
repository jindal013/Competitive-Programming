#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    
    array<int, 3> cap{};
    array<int, 3> am{};
    int pour, index;

    for (int i = 0; i<3; i++){
        cin >> cap[i] >> am[i];
    }

    for (int i = 0; i<100; i++){
        index = i%3;
        pour = min(am[index], cap[(index+1)%3]-am[(index+1)%3]);

        am[index] -= pour;
        am[(index+1)%3] += pour;
    }

    for (int i : am){
        cout << i << endl;
    }

}