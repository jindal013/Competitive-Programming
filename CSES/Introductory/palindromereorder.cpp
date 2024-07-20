// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int n, odd = 0;
    string s = "", fw = "", bk = "", mid = "", temp = "";
    vector<int> num(26, 0);

    cin >> s;
    
    for (char c : s){
        num.at(int(c) - 65)++;
    }

    for (int i = 0; i < 26; i++){
        if (odd > 1){
            cout << "NO SOLUTION";
            return 0;
        }
        else if ((num[i] % 2) == 1){
            odd++;
            for (int j = 0; j < num[i]; j++){
                mid += char(i+65);
            }
        }
        else{
            for (int j = 0; j < (num[i]/2); j++){
                temp += char(i+65);
            }
            fw = fw + temp;
            bk = temp + bk;
            temp = "";
        }
    }
    cout << (fw + mid + bk);
    return 0;

}