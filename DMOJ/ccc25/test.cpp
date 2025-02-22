#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    m[1] = 2;
    m[2] = 3;

    for (auto it : m){
        cout << it.first << " " << it.second << endl;
    }

    cout << m.find(3)->second << endl;
}