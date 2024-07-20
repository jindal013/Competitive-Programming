#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n; // between 1 and 100
    vector<int> ans(26, 0);
    string a, b;

    cin >> n;

    while(n--){
        vector<int> cache(26, 0);
        cin >> a >> b;

        for (char &ch:a){
            cache.at(int(ch)-97)++;            
        }

        for (char &ch:b){
            cache.at(int(ch)-97)++;
        }

        for (int j = 0; j<26; j++){
            if (cache.at(j)>=1){
                ans.at(j) += cache.at(j) - min(count(a.begin(), a.end(), char(j+97)), count(b.begin(), b.end(), char(j+97)));
            }
        }
    }

    for (int i : ans){
        cout << i << endl;
    }
}