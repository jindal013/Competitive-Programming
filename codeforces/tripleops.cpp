#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

long long floorlog3(long long num){
    for (long long i = 0; i<13; i++){
        if ((num>=(pow(3, i)-0.01)) && (num<pow(3, i+1))){
            return i;
        }
    }

    return -1;
}


int main(){
    fastio

    long long t, l, r;
    cin >> t;

    while(t--){
        cin >> l >> r;
        long long ans = 0;

        ans += (floorlog3(l) + 1);
        long long end1 = ans;
        //cout << "END 1: " << pow(3, end1) << endl;

        long long end2 = (floorlog3(r) + 1);

        //cout << "END 2: " << pow(3, end2) << endl; 

        for (auto i = end1+1; i < end2; i++){ // just do a prefix sum array here!
            ans += (pow(3, i)-pow(3, i-1))*(i);
        }
        
        if (end1 != end2){
            ans += (pow(3, end1)-l)*(end1);
            ans += (r-pow(3, end2-1)+1)*(end2);
        }
        else{
            ans += (r-l+1)*(end2);
        }

        cout << ans << endl;  


    }
}