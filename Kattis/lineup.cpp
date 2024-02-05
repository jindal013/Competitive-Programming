#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    string a, array[20], arrays[20], arrayr[20];

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> a;
        array[i] = a;
        arrays[i] = a;
        arrayr[i] = a;
    }

    sort(arrays, arrays+n);
    sort(arrayr, arrayr+n, greater<string>());

    if (equal(array, array+n, arrays))
        cout << "INCREASING" << endl;
    else if (equal(array, array+n, arrayr))
        cout << "DECREASING" << endl;
    else
        cout << "NEITHER" << endl;

}