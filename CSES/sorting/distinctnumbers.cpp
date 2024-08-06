#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long ans = 1;
    
    cin >> n;
    vector<long long> val(n);

    for (auto &i : val){
        cin >> i;
    }

    sort(val.begin(), val.end());
    
    for (long long i = 1; i < n; i++){
        if (val.at(i) != val.at(i-1)){
            ans++;
        }
    }

    cout << ans << endl;


}