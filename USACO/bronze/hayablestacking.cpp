#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void setIO(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
    fastio
}

int main(){
    // setIO("stacking");
    int n, k, a, b;
    
    cin >> n >> k;

    vector<int> diff(n+2, 0);

    for (int i = 0; i < k; i++){
        cin >> a >> b;
        diff.at(a)++;
        diff.at(b+1)--;
    }

    for (int i = 1; i < n+2; i++){
        diff.at(i) += diff.at(i-1);
    }

    sort(diff.begin(), diff.end());

    cout << diff.at(((n+1)/2)+1) << endl;

}