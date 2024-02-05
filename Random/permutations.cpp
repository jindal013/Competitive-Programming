#include <bits/stdc++.h>
#define endl "\n"
#define fastio ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
    fastio
    int n;
    cin >> n;

    vector<int> vec {};

    for (int i = 1; i<= n; i++){
        vec.push_back(i);
    }

    if (n == 1){
        cout << 1 << endl;
    }
    else if (n <= 3){
        cout << "NO SOLUTION" << endl;
    }
    else{
        if (n % 2 != 0){
            int first = 0;
            int next = n/2;

            for (int i = 0; i<(n/2); i++){
                cout << vec[next] << " " << vec[first] << " ";
                first++;
                next++;
            }

            cout << vec[n-1] << endl;

        }
        else{
            int first = 0;
            int next = n/2;

            for (int i = 0; i<(n/2); i++){
                cout << vec[next] << " " << vec[first] << " ";
                first++;
                next++;
            }
        }
    }

}