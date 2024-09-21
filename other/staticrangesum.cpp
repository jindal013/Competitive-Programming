#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int64_t n, q;
    cin >> n >> q;
    vector<int64_t> a(n+1, 0);

    cin >> a.at(1);
    int64_t x;

    for (int64_t i = 2; i < n+1; i++){
        cin >> x;
        a.at(i) = a.at(i-1) + x;
    }

    int64_t l, r;
    
    for (int64_t i = 0; i < q; i++){
        cin >> l >> r;
        cout << (a.at(r) - a.at(l)) << endl;
    }


}