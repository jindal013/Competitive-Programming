#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void setIO(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    fastio
    setIO("bcount");

    int n, q, x, y;
    cin >> n >> q;

    vector<vector<int>> psums(3, vector<int>(n+1, 0));

    for (int i = 1; i <= n; i++){
        cin >> x;
        psums.at(x-1).at(i) = 1;
    }

    for (int i = 0; i < 3; i++){
        for (int j = 1; j <= n; j++){
            psums.at(i).at(j) += psums.at(i).at(j-1);
        }
    }

    for (int i = 0; i < q; i++){
        cin >> x >> y;
        cout << psums.at(0).at(y) - psums.at(0).at(x-1) << " " << psums.at(1).at(y) - psums.at(1).at(x-1) << " " << psums.at(2).at(y) - psums.at(2).at(x-1) << endl;
    }

}