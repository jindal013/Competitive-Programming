#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    long long n, kc2, c;
    cin >> n;
    vector<long long> cache = {0, 6, 28, 96};

    for (long long i = 1; i<=n; i++){
        if (i<=4){
            cout << cache[i-1] << endl;
        }
        else{
            kc2 = (i*i)*(i*i-1)/2;
            //cout << "CHOSE:" << kc2 << endl;
            c = 4*(i-4)*(i-4) + 24 + 20*(i-4);
            cout << kc2-c << endl;
        }
    }
    
}