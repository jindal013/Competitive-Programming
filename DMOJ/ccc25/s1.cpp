#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x, y;

    cin >> a >> b >> x >> y;

    if (min(a, x) < min(b, y)){
        cout << 2*(a + x + max(b, y)) << endl;
    }
    else{
        cout << 2*(b + y + max(a, x)) << endl;
    }
}