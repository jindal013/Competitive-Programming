#include <bits/stdc++.h>
using namespace std;

int main(){
    string testc, testo = "";

    cin >> testc;
    testc += " ";

    for (int i = 0; i < int(testc.size()); i++){
        if (testc[i] == '+' || testc[i] == '-'){
            if (testc[i] == '+'){
                testo += " tighten ";
            }
            else{
                testo += " loosen ";
            }
        }
        
        else if ((i!= 1) && not(isdigit(testc[i])) && isdigit(testc[i-1])){
            cout << testo << endl;
            testo = testc[i];
        }
        
        else {
        testo += testc[i];
        }

    }


}