#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t, n, m, placeholder;
    string s;
    cin >> t;

    while(t--){
        cin >> n >> m;

        vector<char> letter(n);
        for (char &i:letter){
            cin >> i;
        }

        set<int> ind;
        for (int i = 0; i < m; i++){
            cin >> placeholder;
            ind.insert(placeholder);            
        }

        cin >> s;
        sort(s.begin(), s.end());
        
        int index = 0;

        for (int element : ind){
            letter.at(element-1) = s.at(index);
            index++;
        }

        for (char c : letter){
            cout << c;
        }

        cout << endl;

    }

}