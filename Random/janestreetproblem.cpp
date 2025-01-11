#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checker(vector<int> br){

    vector<bool> ind(15, false);

    for (int &i : br){
        if (ind.at(i-1) == true){
            return false;
        }
        else{
            ind.at(i-1) = true;
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < int(br.size()) - 1; j++){
            int temp = abs(br.at(j) - br.at(j+1));
            br.at(j) = temp;
        }
        br.pop_back();

        for (int &i : br){
            if (ind.at(i-1) == true){
                return false;
            }
            else{
                ind.at(i-1) = true;
            }
        }
    }
    return true; 
}

int main(){
    for (int a = 1; a<= 15; a++){
        for (int b = 1; b <= 15; b++){
            for (int c = 1; c <= 15; c++){
                for (int d = 1; d <= 15; d++){
                    vector<int> to_check = {a, b, c, 3, d};
                    // for (int&x : to_check){
                    //     cout << x << " ";
                    // }
                    // cout << endl;
                    if (checker(to_check)){
                        for (int &x : to_check){
                            cout << x << " ";
                        }
                        return 0;
                    }
                }
            }
        }
    }
}