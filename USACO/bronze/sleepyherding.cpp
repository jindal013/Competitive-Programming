#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    // freopen("herding.in", "r", stdin);
    // freopen("herding.out", "w", stdout);

    vector<int> positions(3);
    for (int & i : positions){
        cin >> i;
    }

    sort(positions.begin(), positions.end());

    if (positions[2]-1 == positions[1] && positions[1]-1 == positions[0]){
        cout << 0 << endl;
    }
    else if (positions[2]-positions[1] == 2 || positions[1]-positions[0] == 2){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    cout << max(positions[1]-positions[0]-1, positions[2]-positions[1]-1) << endl;


}