//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int b1, b2, s1, s2, g1, g2, p1, p2, temp, n, sumb, suma;
    int pa = 0, ga = 0, sa = 0;

    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

    sumb = b1 + s1 + g1 + p1;
    suma = b2 + s2 + g2 + p2;

    n = suma - sumb;
    //cout << n;

    sa = n + b1 - b2;
    ga = sa + s1 - s2;
    pa = ga + g1 - g2;

    cout << sa << endl << ga << endl << pa << endl;

}