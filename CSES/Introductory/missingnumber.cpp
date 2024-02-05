#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;

    cin >> n;
    
    int arr[int(2e5)+5] = {0};

    arr[0] = 1;

    for (int i = 1; i<n; i++){
        cin >> a;
        arr[a] = 1;
    }

    cout << distance(arr, find(arr, arr+n+2, 0)) << endl;



}