//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
    
    int n;
    cin >> n;

    vector<int> row1(n);
    vector<int> row2(n);

    if (n == 2){
        for (int i = 0; i < n; i++){
            cin >> row1.at(i);
        }
        for (int i = 0; i < n; i++){
            cin >> row2.at(i);
        }

        int sum = row1.at(0) + row1.at(1) + row2.at(0) + row2.at(1);

        if (((sum == 4*row1.at(0)) && (sum == 4*row1.at(1))) && ((sum == 4*row2.at(0)) && (sum == 4*row2.at(1)))){
            cout << 4 << endl;
            return 0;
        }

        if (row1.at(0) == row1.at(1)){
            if ((row2.at(0) != row2.at(1))){
                if ((2*row1.at(0)) == (row2.at(0) + row2.at(1))){
                    cout << 3 << endl;
                    return 0;
                }
            
             }
        }   

        if (row1.at(1) == row2.at(1)){
            if ((row1.at(0) != row2.at(0))){
                if ((2*row1.at(1)) == (row2.at(0) + row1.at(0))){
                    cout << 3 << endl;
                    return 0;
                }
            
             }
        }

        if (row2.at(1) == row2.at(0)){
            if ((row1.at(0) != row1.at(1))){
                if ((2*row2.at(1)) == (row1.at(0) + row1.at(1))){
                    cout << 3 << endl;
                    return 0;
                }
            
             }
        }  

        if (row1.at(0) == row2.at(0)){
            if ((row1.at(1) != row2.at(1))){
                if ((2*row1.at(0)) == (row1.at(1) + row2.at(1))){
                    cout << 3 << endl;
                    return 0;
                }
            
             }
        }  

        if ((row1.at(1) + row1.at(0)) == (row2.at(0) + row2.at(1))){
            cout << 2 << endl;
            return 0;
        }

        if ((row1.at(0) + row2.at(0)) == (row1.at(1) + row2.at(1))){
            cout << 2 << endl;
            return 0;
        }


        if ((sum - row1.at(0)) == (3*row1.at(0))){
            cout << 2 << endl;
            return 0;

        }
         if ((sum - row1.at(1)) == (3*row1.at(1))){
            cout << 2 << endl;
            return 0;

        }
         if ((sum - row2.at(0)) == (3*row2.at(0))){
            cout << 2 << endl;
            return 0;

        }
         if ((sum - row2.at(1)) == (3*row2.at(1))){
            cout << 2 << endl;
            return 0;

        }

        cout << 1 << endl;
        return 0;


    }
    else if (n<=8){
        return 0;
        // 2nd subtask
    }
    else{
        return 0;
        // 3rd++ subtask
    }
    
}