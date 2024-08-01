#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio 

    string s;

    cin >> s;
    vector<string> perms{};

    sort(s.begin(), s.end());

    do {
        perms.push_back(s);
    }
    while (next_permutation(s.begin(), s.end()));


    cout << perms.size() << endl;
    for (auto &it : perms){
        cout << it << endl;
    }

}