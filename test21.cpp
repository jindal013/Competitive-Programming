#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> vec{"1", "3", "4", "11", "321"};

    sort(vec.begin(), vec.end());

    do {
        for (auto &it: vec){
            cout << it << " ";
        }
        cout << endl;
    } while (next_permutation(vec.begin(), vec.end()));
}