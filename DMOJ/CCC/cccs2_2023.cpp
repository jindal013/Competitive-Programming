#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
     int answers[5001] = {};
     int arr[5001] = {};
     int num = 0;

     cin >> num;

     arr[0] = 0;
     answers[0] = -1;

     for (int i = 1; i < (num+1); i++) {
         cin >> arr[i];
         answers[i] = -1;
     }

     answers[1] = 0;

    for (int i = 1; i < (num); i++){
        int runfor = min(i, num-i);
        int sum = 0;

        for (int j = 1; j <= runfor; j++){
            sum += abs(arr[i-(j-1)] - arr[i+j]);

            if (answers[(2*j)] == -1){
                answers[(2*j)] = sum;
            }
            else if (sum < answers[(2*j)]){
                answers[(2*j)] = sum;
            }
        }
    }

    for (int i = 1; i < (num+1); i++){
        int runfor = min(i-1, num-i);
        int sum = 0;

        for (int j = 1; j <= runfor; j++){
            sum += abs(arr[i-j] - arr[i+j]);

            if (answers[(2*j+1)] == -1){
                answers[(2*j+1)] = sum;
            }
            else if (sum < answers[(2*j+1)]){
                answers[(2*j+1)] = sum;
            }
        }       
              
    }
    

    for (int i = 1; i < (num+1); i++){
        cout << answers[i] << " ";
    }

}
