#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    //freopen("word.in", "r", stdin);
    //freopen("word.out", "w", stdout);

    int n, k, l;
    vector<string> vec;
    vector<int> track;

    cin >> n >> k;
    int temp = 0, count = 0, index = 0;
    string x;
    
    for (int i = 0; i < n; i++){
        cin >> x;
        vec.push_back(x);
    }

    for (int i = 0; i < n; i++){
        temp += size(vec.at(i));

        if (temp <= k){
            count++;
        }
        else {
            temp = size(vec.at(i));
            track.push_back(count);
            count = 1;
        }
        
        if (i == n-1){
            track.push_back(count);
        }
    }

    for (int it : track){
        for (int i = 0; i < (it-1); i++){
            cout << vec.at(index) << " ";
            index++;
        }
        cout << vec.at(index) << endl;
        index++;
    }

    /*
    for (int i = 0; i < n; i++){
        cin >> x;
        l = size(x);
        if ((temp + l) <= k){
            temp += l;
            vec.push_back(x);
        }
        else{
            temp = 0;
            for (int j = 0; j<(vec.size()-1); j++){
                cout << vec.at(j) << " ";
            }
            cout << vec.at(vec.size()-1) << endl;
            for (int j = 0; j<(vec.size()); j++){
                vec.pop_back();
            }
        }
    }*/

}