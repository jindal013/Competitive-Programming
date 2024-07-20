#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    string x;
    int b_row, b_col, r_row, r_col, l_row, l_col;

    for (int i = 0; i<10; i++){
        cin >> x;

        for (int j = 0; j<10; j++){
            if (x[j] == 'B'){
                b_row = i + 1;
                b_col = j + 1;
            }
            if (x[j] == 'R'){
                r_row = i + 1;
                r_col = j + 1;
            }
            if (x[j] == 'L'){
                l_row = i + 1;
                l_col = j + 1;
            }
        }
    }

    if (((b_row == r_row) && (b_row == l_row))  && (((r_col>b_col)&&(r_col<l_col)) || ((r_col<b_col)&&(r_col>l_col)))) {
        cout << (abs(l_row-b_row)+abs(l_col-b_col)+1);
    }
    else if (((b_col == r_col) && (b_col == l_col))  && (((r_row>b_row)&&(r_row<l_row)) || ((r_row<b_row)&&(r_row>l_row)))){
        cout << (abs(l_row-b_row)+abs(l_col-b_col)+1);
    }
    else{
        cout << (abs(l_row-b_row)+abs(l_col-b_col)-1);
    }

}