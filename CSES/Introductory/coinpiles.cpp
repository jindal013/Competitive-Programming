#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long n, a, b; // be careful of int overflow

    cin >> n;

    while(n--){
        cin >> a >> b;

        if (((a+b)%3) == 0){
            cout << (2/3)*(a+b) << endl;
            
            if ((a >= ((a+b)/3)) && (a <= 2*((a+b)/3))){ // be careful of not doing (2/3)*num because (2/3) = 0 as they are integers
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}