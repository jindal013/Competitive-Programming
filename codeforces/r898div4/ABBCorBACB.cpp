#include <iostream>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        int n = s.size();
        int a = 0;
        int running_total = 0;
        int segment = INT32_MAX;
        // char prev = 'A';
        // int i = 0;
        // int used = 0;

        for (char &c : s){
            if (c == 'A'){
                a++;
                running_total++;
            }
            else{
                segment = min(running_total, segment);
                running_total = 0;
            }
        }

        segment = min(running_total, segment);

        if (s[0] == 'A' && s[n-1] == 'A'){
            cout << a - segment << endl;
        }
        else{
            cout << a << endl;
        }


        // while (i < n){
        //     if (s[i] == 'A'){
        //         a++;
        //         i++;
        //     }
        //     else{
        //         int prev = ++i;
        //         // cout << prev << endl;
        //         // cout << i << endl;
        //         // cout << s[i] << endl;
        //         while (s[i] != 'B' && i < n){
        //             i++;
        //         }
        //         // cout << "I after: " << i << endl;
        //         ans += max(a, i-prev);
        //         // cout << "A: " << a << "ans: " << ans << "i-prev: " << i-prev << endl;
        //         // cout << ans << endl;
        //         a = 0;
        //     }
        //     // i++;
        // }
        // cout << ans << endl;

        // // for (char &c : s){
        // //     if (c = 'A'){
        // //         a++;
        // //         if (prev == 'B'){

        // //         }
        // //     }
        // //     if (c = 'B'){
        // //         ans += a;
        //         a = 0;
        //     }
        //     prev = c;
        // }

    }
}