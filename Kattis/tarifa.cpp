#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int x, n, cur, bank = 0;

    cin >> x;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> cur;
        bank += cur;
    }

    bank = (x*(n+1)-bank);

    cout << bank << endl;
}