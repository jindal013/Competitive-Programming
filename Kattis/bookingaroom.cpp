#include <iostream>
using namespace std;

int main() {
    int r, n, a, t, c, final = 0;

    cin >> r >> n;
    
    int arr[r];

    for (int i = 0; i<n; i++){
        cin >> a;
        arr[i] = a;
    }

    if (r == n){
        cout << "too late" << endl;
    }
    else{
        for (t = 1; t<=r; t++){
           c = 0;
           for (int i = 0; i<n; i++){
               if (arr[i] != t){
                   c++;
               }
           }
           if (c == n){
               final = t;
               break;
           }
        }
        cout << final << endl;
    }
}