#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

long long n, sum1, sum2, diff = 1e11;
vector<long long> weights;


int main(){
    fastio 

    cin >> n;
    weights.resize(n);

    for (long long &i : weights){
        cin >> i;
    }

    for (long long mask = 0; mask < pow(2, n); mask++){
        sum1 = 0;
        sum2 = 0;
        for (int x = 0; x < n; x++){
            if (mask & (1 << x)){
                sum1 += weights.at(x);
            }
            else{
                sum2 += weights.at(x);
            }
        }

        diff = min(diff, abs(sum2 - sum1));
    }

    cout << diff;

}