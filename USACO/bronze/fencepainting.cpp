#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[4] {};

    for (int i = 0; i<4; i++){
        cin >> a[i];
    }

    if ((a[3] <= a[0]) || (a[2] >= a[1])){
        cout << a[1] - a[0] + a[3] - a[2] << "\n";
    }
    else{
        cout << *max_element(a, a+4) - *min_element(a, a+4) << "\n";
    }

}