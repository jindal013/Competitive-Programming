#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"

using namespace std;

int main(){
    fastio
    vector<pair<string, string>> samegroup {};
    vector<pair<string, string>> diffgroup {};
    unordered_map<string, int> groups;
    string test, temp1, temp2;
    int x, y, g, vio = 0;

    cin >> x;

    for (int i = 0; i<x; i++){
        cin >> temp1;
        cin >> temp2;
        samegroup.push_back(make_pair(temp1, temp2));
    }

    cin >> y;

    for (int i = 0; i<y; i++){
        cin >> temp1;
        cin >> temp2;
        diffgroup.push_back(make_pair(temp1, temp2));
    }

    cin >> g;

    for (int i = 0; i<g; i++){
        for (int x = 0; x<3; x++){
            cin >> test;
            groups[test] = i;
        }
    }

    for (int i = 0; i<x; i++){
         if (groups[samegroup[i].first] != groups[samegroup[i].second]){
            vio++;
        }
    }

    for (int i = 0; i<y; i++){

        if (groups[diffgroup[i].first] == groups[diffgroup[i].second]){
            vio++;
        }
    }

    cout << vio << endl;
    

}