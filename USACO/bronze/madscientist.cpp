#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n, counter = 0;
    string a, b;
    cin >> n;
    cin >> a >> b;

    for (int i = 0; i < n-1; i++){
        if (a[i] != b[i] && a[i+1] == b[i+1]){
            counter++;
        }
    }
    if (a[n-1] != b[n-1]){
        counter++;
    }
    cout << counter << endl;
}