#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec){
        cin >> i;
    }

    int ans = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (vec[j+1] < vec[j]){
                swap(vec[j], vec[j+1]);
                ans++;
            }
        }
    }

    cout << "Array is sorted in " << ans << " swaps." << endl;
    cout << "First Element: " << *vec.begin() << endl;
    cout << "Last Element: " << *(vec.end()-1) << endl;

}