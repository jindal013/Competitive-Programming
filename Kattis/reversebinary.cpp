#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long x, y = 0;

    cin >> x;

    while (x!=0){
        if (x%2 == 1){
            y += 1;
        }
        y = y << 1;
        x /= 2;
    }
    y = y >> 1;
    cout << y << "\n";


    /*
    int n, iter = 0, iter2, array[30] = {}, final = 0;

    cin >> n;

    while (n != 0){
        if (n % 2 == 1){
            array[iter] = 1;
        }
        else{
            array[iter] = 0;
        }
        iter++;
        n /= 2;
    }
    
    iter2 = iter;
    iter -= 1;

    for (int i = 0; i < iter2; i++){
        if (array[i] == 1){
            final += pow(2, iter);
        }
        iter--;
    }

    cout << final << endl;
    */

}