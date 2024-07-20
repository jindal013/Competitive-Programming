#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long n, x;
    vector<long long> l1;
    vector<long long> l2;


    cin >> n;

    if ((((n*(n+1))/2)%2) == 0){
        x = (((n*(n+1))/2)/2);
        for (long long i = n; i>0; i--){
            if ((x-i)>= 0){
                l1.push_back(i);
                x-=i;
            }
            else{
                l2.push_back(i);
            }
        }

        cout << "YES" << endl << l1.size() << endl;
        cout << l1.at(0);
        for (long long k = 1; k < l1.size(); k++){
            cout << " " << l1.at(k);
        }
        cout << endl << l2.size() << endl;
        cout << l2.at(0);
        for (long long k = 1; k < l2.size(); k++){
            cout << " " << l2.at(k);
        }
    }
    else{
        cout << "NO" << endl;
    }
}