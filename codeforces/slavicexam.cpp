#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t;
    string s, t2;
    cin >> t;

    while(t--){
        cin >> s;
        cin >> t2;
        //string ans = "";
        int index = 0;
        int limit = t2.size();

        for (char &c : s){
            if (c == '?'){
                if (index < limit){
                    c = t2[index];
                    index++;
                }
                else{
                    c = 'a';
                }
            }
            else if (index < limit){
                if (c == t2[index]){
                    index++;
                }
            }
        }

        if (index == limit){
            cout << "YES" << endl << s << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}