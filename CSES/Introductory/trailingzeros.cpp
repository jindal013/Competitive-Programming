#include <iostream>
#include <math.h>
#include <cmath>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int ans =  0, n, x = 1;

    cin >> n;

    while(int(pow(5, x)) <= n){
        x++;
    }
    x--;

    for (int i = 1; i <= x; i++){
        ans += (n/(pow(5,i)));
    }

    cout << ans;

}