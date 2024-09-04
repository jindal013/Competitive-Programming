#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main(){
    fastio
    int t;
    cin >> t;

    while (t--){
        double x, y, k;
        cin >> x >> y >> k;

        int x_steps = ceil(x/k);
        int y_steps = ceil(y/k);

        cout << max(2*y_steps, 2*x_steps - 1) << endl;

        // if (y_steps >= x_steps){
        //     cout << 2*y_steps << endl;
        // }
        // else{
        //     cout << 2*x_steps - 1 << endl;
        // }

        // if (x_steps > (y_steps + 1)){
        //     cout << 2*x_steps - 1 << endl;
        // }
        // else if (x_steps >= y_steps){
        //     cout << x_steps + y_steps << endl;
        // }
        // else{
        //     cout << 2*y_steps << endl;
        // }

        // if (x == 0){
        //     if (y == 0){
        //         cout << 0 << endl;
        //     }
        //     else{
        //         if (y % k == 0){
        //             cout << 2*(y/k) << endl; 
        //         }
        //         else{
        //             cout << 2*((y/k) + 1) << endl;
        //         }
        //     }
        // }
        // else if (y == 0){
        //     if (x % k == 0){
        //         cout << 2*(x/k)-1 << endl;
        //     }
        //     else{
        //         cout << 2*(x/k)+1 << endl;
        //     }
            
        //     // cout << (x/k) + (y/k) + 2 << endl;
        // }
        // else{
        //     int x_steps, y_steps;

        //     if (x % k == 0){
        //         x_steps = x/k;
        //     }
        //     else{
        //         x_steps = x/k + 1;
        //     }

        //     if (y % k == 0){
        //         y_steps = y/k;
        //     }
        //     else{
        //         y_steps = y/k + 1;
        //     }


        //     if (x_steps > (y_steps + 1)){
        //         cout << 2*x_steps - 1 << endl;
        //     }
        //     else if (x_steps >= y_steps){
        //         cout << x_steps + y_steps << endl;
        //     }
        //     else{
        //         cout << 2*y_steps << endl;
        //     }

            // if (x > y){
            //     int mul = x/k;


            // }
            // else if (x < y){
            //     // do this
            // }
            // else{
            //     // do this
            // }
            
            // cout << (x/k) + (y/k) + 2 << endl;

        }

        
    }
