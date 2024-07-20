#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
 
    cin >> n;
 
    if (n==1){
        cout << 1 << endl;
    }
    else if ((n==2) || (n==3)){
        cout << "NO SOLUTION" << endl;
    }
    else {
        for (int i = 1; i <= (n/2); i++){
            cout << (i+(n/2)) << " " << i << " ";
        }
        if (n%2 != 0){
            cout << n;
        }
    }
    
