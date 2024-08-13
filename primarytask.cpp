#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio

    int t;
    string x;
    cin >> t;

    while (t--){
        cin >> x;

        string start = x.substr(0, 2);

        if (x.size()>2){
            if (start == "10"){
                string end = x.substr(2, x.size()-2);
                //cout << "sub string is: " << end << endl;
                if (end == "0" || end == "1"){
                    cout << "NO" << endl;
                }
                else if (end[0] == '0'){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }


    }
}