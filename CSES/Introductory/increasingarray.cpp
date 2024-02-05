#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, arr[int(2e5)] {0};
    long long counter = 0;

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i<n; i++){
        if (arr[i] < arr[i-1]){
            counter += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }

    cout << counter << endl;


}