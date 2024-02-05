#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[9];
    int sum, a, final1i, final2i = 0;

    for (int i = 0; i < 9; i++){
        cin >> a;
        array[i] = a;
        sum += a;        
    }

    for (int x = 0; x<9; x++){
        for (int y = 0; y<9; y++){
            if (y == x){
                continue;
            }
            else{
                if ((sum-(array[x] + array[y])) == 100){
                    final1i = x;
                    final2i = y;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 9; i++){
        if (i == final1i || i == final2i){
            continue;
        }
        else{
            cout << array[i] << endl;
        }
    }

}