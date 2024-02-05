#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; 
    char prev, cur;
    int counter = 1, temp = 1; 


    cin >> n;

    prev = n[0];

    for (int i = 1; i < int(n.size()); i++){
        cur = n[i];
        if (cur == prev){
            temp++;
        }
        else{
            counter = max(counter, temp);
            temp = 1;
        }
        prev = n[i];
    }

    counter = max(counter, temp);
    cout << counter << endl;

}