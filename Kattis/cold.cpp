#include <iostream>
using namespace std;

int main(){
    int n, t, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> t;
        if (t < 0){
            count += 1;
        }
    }
    cout << count << endl;
}