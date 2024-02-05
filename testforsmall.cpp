#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> hello(10);
    int arr[10] = {};

    for (int i = 0; i < 10; i++){
        cout << hello[i] << " ";
    }
    cout << endl;
    cout << "ARRAY NOW\n";

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    memset(&hello[0], -1, sizeof(hello[0])*hello.size());

    for (int i = 0; i < 10; i++){
        cout << hello[i] << " ";
    }

}