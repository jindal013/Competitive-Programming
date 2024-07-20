#include <iostream>
#include <cmath>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long t, x, y;

    cin >> t;

    while(t--){
        cin >> y >> x;
        if (x>y){
            if (x%2 == 1){
                cout << (x*x) - y + 1 << endl;
            }
            else{
                cout << ((x-1)*(x-1)) + y << endl;
            }
        }
        else{
            if (y%2 == 0){
                cout << (y*y) - x + 1 << endl;
            }
            else{
                cout << ((y-1)*(y-1)) + x << endl;
            }
        }
        }
    }