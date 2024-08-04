#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

long long t, n, k;
long long max_num;
vector<long long> starts;

long long solve(){
    for (long long i = max_num; i < (max_num + k); i++){
        bool works = true;

        for (auto &j : starts){
            //cout << ((i-j)/k) % 2LL << " <- this" << endl; 
            if ((((i-j)/k) % 2LL) == 1LL){
                //cout << "EHLELEOEOEO" << endl;
                works = false;
            }
        }

        if (works){
            return i;
        }
    }

    return -1;
}


int main(){
    fastio

    cin >> t;

    while (t--){
        
        cin >> n >> k;
        max_num = 0;
        starts.resize(n);

        for (auto &i : starts){
            cin >> i; 
            max_num = max(i, max_num);
        }
        
        cout << solve() << endl;
    }
}