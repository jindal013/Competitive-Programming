// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    int ans[] = {0, 0, 0};
    map<pair<char, char>, int> m_final;

    vector<char> v(9);

    for (char &i : v){
        cin >> i;
    }

    // rows 
    for (int i = 0; i < 9; i += 3){
        map<char, int> m;
        for (int j = 0; j < 3; j++){
            m[v.at(i + j)]++;
        }
        ans[m.size()-1]++;
        if (m.size() < 3){
            pair<char, char> p;
            p.first = a64l
        }
    }

    // columns
    for (int i = 0; i < 3; i ++){
        map<char, int> m;
        for (int j = 0; j < 3; j++){
            m[v.at(i + 3*j)]++;
        }
        ans[m.size()-1]++;
    }

    //diagonals
    map<char, int> m1;
    for (int i = 0; i < 3; i++){
        m1[v.at(3*i + i)]++;
    }
    ans[m1.size()-1]++;

    //diagonals
    map<char, int> m2;
    for (int i = 0; i < 3; i++){
        m2[v.at(3*(i+1) - (i+1))]++;
    }
    ans[m2.size()-1]++;

    cout << ans[0] << "\n" << ans[1];
}