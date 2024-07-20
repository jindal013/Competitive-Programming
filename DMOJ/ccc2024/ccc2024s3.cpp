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

    vector<int> a(n);
    vector<int> b(n);


    for (int i = 0; i < n; i++){
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++){
        cin >> b.at(i);
    }

    if (n == 2){
        for (int i = 0; i<n; i++){
            if((b.at(i) != a.at(0)) && (b.at(i) != a.at(1))){
                cout << "NO" << endl;
                return 0;
            }
        }

        if (a.at(0) == a.at(1)){
            cout << "YES" << endl;
            cout << 0 << endl;
            return 0;
        }
        else{
            int first = a.at(0);
            int second = a.at(1);

            if (b.at(0) == first){
                if (b.at(1) == second){
                    cout << "YES" << endl;
                    cout << 0 << endl;
                }
                else{
                    cout << "YES" << endl;
                    cout << 1 << endl;
                    cout << "R " << "0 1" << endl;
                }
            }
            else if (b.at(0) == second){
                if (b.at(1) == second){
                    cout << "YES" << endl;
                    cout << 1 << endl;
                    cout << "L " << "0 1" << endl;
                }
                else{
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    else if (n == 1){
        if (a.at(0) == b.at(0)){
            cout << "YES" << endl;
            cout << 0 << endl;
            return 0;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    else{
        vector<int> manip_a;
        vector<int> manip_b;

        manip_a.push_back(a.at(0));
        manip_b.push_back(b.at(0));

        for (int i = 1; i < n; i++){
            if (a.at(i) == a.at(i-1)){
                continue;
            }
            else{
                manip_a.push_back(a.at(i));
            }
            if (b.at(i) == b.at(i-1)){
                continue;
            }
            else{
                manip_b.push_back(b.at(i));
            }
        }

    int index = 0;

    for (int i = 0; i < manip_b.size(); i++){
        int element = manip_b.at(i);

    int found = -1;
    for (int j = index; j < manip_a.size(); j++){
        if (manip_a.at(j) == element){
            found = 1;
            index = j;
            break;
        }
    }

    if (found == -1){
        cout << "NO" << endl;
        return 0;
    }


    }

    cout << "YES" << endl;
    return 0;

    }

    }

