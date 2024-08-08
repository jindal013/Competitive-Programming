#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, a;
    cin >> n >> x;
    //vector<int> vec(n);
    map<int, int> m;
    //bool found = false;
    //int ans1 = 0, ans2 = 0;


    for (int i = 1; i <= n; i++){
        cin >> a;

        if (m[x-a]){
            //found = true;
            //ans1 = i;
            //ans2 = m[x-a];
            cout << i << " " << m[x-a];
            return 0;
            //break;
        }
        m[a] = i;
    }

    // if (found){
    //     cout << ans1 << " " << ans2;
    //     return 0;
    // }
    cout << "IMPOSSIBLE" << endl;
    //return 0;
    

}