#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int n;
vector<long long> weights;


long long recurse(long long index, long long sum1, long long sum2){
    
    if (index == n) {return abs(sum1 - sum2);}

    return (min(recurse(index + 1, sum1 + weights.at(index), sum2), recurse(index + 1, sum1, sum2 + weights.at(index))));

}


int main(){
    fastio 

    cin >> n;
    weights.resize(n);

    for (long long &i : weights){
        cin >> i;
    }

    cout << recurse(0, 0, 0);

}